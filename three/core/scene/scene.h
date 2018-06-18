#pragma once
#include "../base/object.h"
#include "object.h"
#include "cornell_box.h"
#include <memory>
#include <pybind11/pybind11.h>
#include <vector>

namespace three {
namespace scene {
    namespace py = pybind11;
    class Scene {
    public:
        std::vector<std::shared_ptr<base::Object>> _objects;
        Scene();
        void add(std::shared_ptr<Object> object);
        void add(std::shared_ptr<Object> object, py::tuple position);
        void add(std::shared_ptr<Object> object, py::tuple position, py::tuple rotation_rad);
        void add(std::shared_ptr<CornellBox> object);
        void add(std::shared_ptr<CornellBox> object, py::tuple position);
        void add(std::shared_ptr<CornellBox> object, py::tuple position, py::tuple rotation_rad);
    };
}
}