#pragma once

#include <string>
#include <vector>

class ObjReader {
public:
    ObjReader();

    ~ObjReader();

    // Carregar um modelo OBJ a partir de um arquivo
    bool loadObj(const std::string& filename);

    // Obter os vértices
    std::vector<float> getVertices() const;

private:
    // Variável para armazenar dados do modelo
    std::vector<float> vertices;
};
