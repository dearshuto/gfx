add_subdirectory(gl)
add_subdirectory(vk)

target_sources(gfx PRIVATE
    gfx_DeviceInfo.cpp
)