#ifndef _SJ_GFX_GL_DEVICEGL_H_
#define _SJ_GFX_GL_DEVICEGL_H_

namespace sj::gfx {
class DeviceInfo;
}

namespace sj::gfx::gl {

class DeviceGl
{
public:
    void Initialize(const DeviceInfo& info) noexcept;

    void Finalize() noexcept;

private:
};

}  // namespace sj::gfx::gl

#endif
