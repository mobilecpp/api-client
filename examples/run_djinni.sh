#! /usr/bin/env bash

examples_dir=$(cd "`dirname "0"`" && pwd)
base_dir="$examples_dir/../"
in="$examples_dir/djinni/itunes-client.djinni"
cpp_out="$examples_dir/generated-src/cpp"
jni_out="$examples_dir/generated-src/jni"
objc_out="$examples_dir/generated-src/objc"
java_out="$examples_dir/generated-src/java/com/mobilecpp/itunes"
java_package="com.mobilecpp.itunes"
objc_prefix="MCP"
$base_dir/deps/djinni/src/run \
   --java-out $java_out \
   --java-package $java_package \
   --ident-java-field mFooBar \
    \
    --cpp-out $cpp_out \
    --cpp-namespace mobilecpp \
    --ident-cpp-enum-type foo_bar \
    \
    --jni-out $jni_out \
    --ident-jni-class NativeFooBar \
    --ident-jni-file NativeFooBar \
    \
	  --objc-out $objc_out \
    --objcpp-out $objc_out \
    --objc-type-prefix $objc_prefix \
    \
    --idl "$in"
