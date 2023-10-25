# Leitor de Modelos OBJ

## Descrição

Este é um simples leitor de modelos OBJ em C++.

## Como Usar

1. **Clone o Repositório:**
    ```bash
    git clone https://github.com/natiscarvalho/Atividade03.git
    ```

2. **Compile o Projeto:**
    Certifique-se de ter um compilador C++ instalado em seu sistema. Compile o projeto usando o seguinte comando:
    ```bash
    g++ -o obj_reader main.cpp ObjReader.cpp -std=c++11
    ```

3. **Execute o Programa:**
    Execute o programa com o comando:
    ```bash
    ./obj_reader
    ```
    O programa carregará os modelos OBJ "Male.obj", "Tree.obj" e "bugatti.obj" e exibirá a saída dos testes.

## Testes

Nessa atividade foi utilizada a biblioteca docteste para os testes unitários. Foram feitos testes com 3 arquivos obj diferentes, "Male.obj", "Tree.obj" e "bugatti.obj". Em cada um deles foi testado se o arquivo foi lido corretamente e se algum vértice foi armazenado desse arquivo.

Assim deve aparecer no console se os testes forem bem sucedidos:

    ```bash 
    [doctest] doctest version is "2.4.11"
    [doctest] run with "--help" for options
    ===============================================================================
    [doctest] test cases: 1 | 1 passed | 0 failed | 0 skipped
    [doctest] assertions: 6 | 6 passed | 0 failed |
    [doctest] Status: SUCCESS!
    ```

## Autor

Natália dos Santos Carvalho
