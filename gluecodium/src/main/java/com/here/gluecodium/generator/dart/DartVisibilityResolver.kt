/*
 * Copyright (C) 2016-2022 HERE Europe B.V.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * SPDX-License-Identifier: Apache-2.0
 * License-Filename: LICENSE
 */

package com.here.gluecodium.generator.dart

import com.here.gluecodium.cli.GluecodiumExecutionException
import com.here.gluecodium.generator.common.CommonGeneratorPredicates
import com.here.gluecodium.generator.common.NameResolver
import com.here.gluecodium.generator.common.ReferenceMapBasedResolver
import com.here.gluecodium.model.lime.LimeAttributeType.DART
import com.here.gluecodium.model.lime.LimeElement
import com.here.gluecodium.model.lime.LimeNamedElement
import com.here.gluecodium.model.lime.LimeType

internal class DartVisibilityResolver(limeReferenceMap: Map<String, LimeElement>) :
    ReferenceMapBasedResolver(limeReferenceMap), NameResolver {

    override fun resolveName(element: Any): String =
        when (element) {
            // Dart has no type nesting, so all types are "outside" and have to check for an internal outer type.
            is LimeType -> {
                val isInternal = generateSequence(element) {
                    limeReferenceMap[it.path.parent.toString()] as? LimeType
                }.any { CommonGeneratorPredicates.isInternal(it, DART) }
                getVisibilityPrefix(isInternal)
            }
            is LimeNamedElement -> getVisibilityPrefix(CommonGeneratorPredicates.isInternal(element, DART))
            else -> throw GluecodiumExecutionException("Unsupported element type ${element.javaClass.name}")
        }

    private fun getVisibilityPrefix(isInternal: Boolean) = if (isInternal) "_" else ""
}
