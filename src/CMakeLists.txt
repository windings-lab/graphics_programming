file(GLOB GP_SOURCES
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/**/*.cpp"
)
target_sources(GP PRIVATE ${GP_SOURCES})
