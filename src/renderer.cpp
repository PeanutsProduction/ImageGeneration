#include "renderer.h"

std::pair<int,int> projectPoint(const vec3& point, const Camera& cam, Canvas& canvas) {
    // find point relative to camera
    vec3 relativePos = point - cam.position;

    // project to find value
    double projX = relativePos.x/relativePos.z;
    double projY = relativePos.y/relativePos.z;

    double pixelX = (projX + 1) / 2 * canvas.getWidth();
    double pixelY = (1 - projY) / 2 * canvas.getHeight();

    return {pixelX, pixelY};
}
