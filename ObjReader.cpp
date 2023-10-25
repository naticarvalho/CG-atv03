#include "ObjReader.h"
#include <fstream>
#include <sstream>

ObjReader::ObjReader() {}

ObjReader::~ObjReader() {}

bool ObjReader::loadObj(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return false; // Falha ao abrir o arquivo
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string type;
        iss >> type;

        if (type == "v") {
            float x, y, z;
            iss >> x >> y >> z;
            vertices.push_back(x);
            vertices.push_back(y);
            vertices.push_back(z);
        }
    }

    file.close();
    return true; // Leitura bem-sucedida
}

std::vector<float> ObjReader::getVertices() const {
    return vertices;
}
