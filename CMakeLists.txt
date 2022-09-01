PROJECT(gfx)
cmake_minimum_required(VERSION 3.16)

# # 実行ファイルの出力ディレクトリの設定
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# # ライブラリファイルの出力ディレクトリの設定
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Libraries)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Libraries)

# gfx
add_library(gfx STATIC)
target_include_directories(gfx
    PUBLIC ${CMAKE_SOURCE_DIR}/Include
)
target_compile_features(gfx PUBLIC cxx_std_20)

add_subdirectory(Include)
add_subdirectory(Examples)
add_subdirectory(Sources)
