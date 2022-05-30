#pragma once

#include <deque>
#include "render.hpp"

namespace Graphics {

    class simple2drenderer : public Render
    {
        private:
        std::deque<const Renderer*> renderQueue;
        public:
        void submit(const Renderer* renderer) override { renderQueue.push_back(renderer); }
        void flush() override { 
            while (!renderQueue.empty()){
                const Renderer* renderer = renderQueue.front();
                renderer->getVAO()->bind();
                renderer->getIBO()->bind();

                renderer->getShader().setUniformMat4("ml_matrix", Camera::translation(renderer->getPosition()));
                glDrawElements(GL_TRIANGLES, renderer->getIBO()->getCount(), GL_UNSIGNED_SHORT, nullptr);

                renderer->getVAO()->unbind();
                renderer->getIBO()->unbind();

                renderQueue.pop_front();
                }
            }
    };

}