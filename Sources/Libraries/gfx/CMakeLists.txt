add_subdirectory(gl)
add_subdirectory(vk)

target_sources(gfx PRIVATE
    gfx.cpp
    gfx_DeviceInfo.cpp
    gfx_QueueInfo.cpp
)