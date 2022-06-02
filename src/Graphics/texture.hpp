#pragma once

#include "2drenderer.hpp"

namespace Graphics {

    class Texture
    {
        public:
        virtual uint32_t getwidth() const = 0;
        virtual uint32_t getheight() const = 0;

        virtual void Bind() const = 0;
    };

}