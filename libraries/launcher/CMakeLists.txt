cmake_minimum_required(VERSION 3.9.4)
project(launcher Java)
find_package(Java 1.7 REQUIRED COMPONENTS Development)

include(UseJava)
set(CMAKE_JAVA_JAR_ENTRY_POINT org.cocraikelauncher.EntryPoint)
set(CMAKE_JAVA_COMPILE_FLAGS -target 7 -source 7)

set(SRC
    org/cocraikelauncher/EntryPoint.java
    org/cocraikelauncher/launcher/Launcher.java
    org/cocraikelauncher/launcher/impl/AbstractLauncher.java
    org/cocraikelauncher/launcher/impl/StandardLauncher.java
    org/cocraikelauncher/launcher/impl/legacy/LegacyLauncher.java
    org/cocraikelauncher/launcher/impl/legacy/LegacyFrame.java
    org/cocraikelauncher/exception/ParameterNotFoundException.java
    org/cocraikelauncher/exception/ParseException.java
    org/cocraikelauncher/utils/Parameters.java
    org/cocraikelauncher/utils/ReflectionUtils.java
    org/cocraikelauncher/utils/logging/Level.java
    org/cocraikelauncher/utils/logging/Log.java
    net/minecraft/Launcher.java
)
add_jar(NewLaunch ${SRC})
install_jar(NewLaunch "${JARS_DEST_DIR}")
