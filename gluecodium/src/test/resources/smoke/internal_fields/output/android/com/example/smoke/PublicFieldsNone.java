/*
 *
 */
package com.example.smoke;
import android.support.annotation.NonNull;
public final class PublicFieldsNone {
    @NonNull
    String internalField;
    public PublicFieldsNone() {
        this.internalField = "foo";
    }
    PublicFieldsNone(@NonNull final String internalField) {
        this.internalField = internalField;
    }
}
