# Headers
file(GLOB_RECURSE GP_PROJECT_HEADERS "${PROJECT_SOURCE_DIR}/include/*.h")
target_sources(GP PRIVATE ${GP_PROJECT_HEADERS})
target_include_directories(GP PRIVATE "${PROJECT_SOURCE_DIR}/include")
