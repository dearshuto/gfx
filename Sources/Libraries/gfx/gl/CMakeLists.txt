# 相対パスを絶対パスへ変換
cmake_policy(SET CMP0076 NEW)
target_sources(gfx PRIVATE
    gfx_DeviceGl.cpp
)