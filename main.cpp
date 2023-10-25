#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "ObjReader.h"

TEST_CASE("ObjReader Teste") {
    ObjReader objReader;

    //Teste 1
    SUBCASE("Ler Male.obj") {
        CHECK(objReader.loadObj("Male.obj") == true);
        CHECK(objReader.getVertices().size() > 0);
    }

    //Teste 2
    SUBCASE("Ler Tree.obj") {
        CHECK(objReader.loadObj("Tree.obj") == true);
        CHECK(objReader.getVertices().size() > 0);
    }

    //Teste 3
    SUBCASE("Ler bugatti.obj") {
        CHECK(objReader.loadObj("bugatti.obj") == true);
        CHECK(objReader.getVertices().size() > 0);
    }
}
