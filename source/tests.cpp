#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"


//Tests Konstruktor
TEST_CASE("vec2-constructorX", "[vector]") {
  REQUIRE(Vec2().x_==0);
}

TEST_CASE("vec2-constructorY", "[vector]") {
  REQUIRE(Vec2().y_==0);
}

TEST_CASE("vec2-constructorX_num", "[vector]") {
  REQUIRE(Vec2(1,2).x_==1);
}

TEST_CASE("vec2-constructorY_num", "[vector]") {
  REQUIRE(Vec2(1,2).y_==2);
}

//Tests Addition
TEST_CASE("vec2+=-1", "[vector]") {
  REQUIRE((Vec2()+= Vec2(2.0, 3.0)).x_==2.0f);
  REQUIRE((Vec2(2.0, 5.0) += Vec2(2.0, 1.5)).y_ == 6.5f);
}

TEST_CASE("vec2+=-2", "[vector]") {
  Vec2 test_vector1(2.0f,5.0f);
  Vec2 test_vector2(4.0f,1.0f);
  test_vector1.operator+=(test_vector2);
  REQUIRE(test_vector1.x_==6.0f);
  REQUIRE(test_vector1.y_==6.0f);
}

//Tests Subtraktion
TEST_CASE("vec2-=-1", "[vector]") {
  Vec2 test_vector1(2.0f,5.0f);
  Vec2 test_vector2(2.0f,4.0f);
  test_vector1.operator-=(test_vector2);
  REQUIRE(test_vector1.x_==0.0f);
  REQUIRE(test_vector1.y_==1.0f);
}

TEST_CASE("vec2-=-2", "[vector]") {
  Vec2 test_vector1(2.0f,5.0f);
  Vec2 test_vector2(4.0f,1.0f);
  test_vector1.operator-=(test_vector2);
  REQUIRE(test_vector1.x_==-2.0f);
  REQUIRE(test_vector1.y_==4.0f);
}

//Tests Multiplikation
TEST_CASE("vec2*=-1", "[vector]") {
  Vec2 test_vector1(2.0f,5.0f);
  test_vector1.operator*=(2);
  REQUIRE(test_vector1.x_==4.0f);
  REQUIRE(test_vector1.y_==10.0f);
}

TEST_CASE("vec2*=-2", "[vector]") {
  Vec2 test_vector1(1.0f,3.0f);
  test_vector1.operator*=(-2);
  REQUIRE(test_vector1.x_==-2.0f);
  REQUIRE(test_vector1.y_==-6.0f);
}

//Tests Division
TEST_CASE("vec2/=-1", "[vector]") {
  Vec2 test_vector1(2.0f,6.0f);
  test_vector1.operator/=(2);
  REQUIRE(test_vector1.x_==1.0f);
  REQUIRE(test_vector1.y_==3.0f);
}

TEST_CASE("vec2/=-2", "[vector]") {
  Vec2 test_vector1(1.0f,-4.0f);
  test_vector1.operator/=(-2);
  REQUIRE(test_vector1.x_==-0.5f);
  REQUIRE(test_vector1.y_==2.0f);
}

//Test 2.4 - Addition
  TEST_CASE("Addition", "[Vector]") {
    REQUIRE((Vec2(2.0, 3.0) + Vec2(2.0, 3.0)).x_==4.0f);
    REQUIRE((Vec2(2.0, 3.0) + Vec2(2.0, 3.0)).y_==6.0f);
  }

   TEST_CASE("Addition2", "[Vector]") {
    REQUIRE((Vec2(-2.0, -3.0) + Vec2(2.0, 4.0)).x_==0.0f);
    REQUIRE((Vec2(-2.0, -3.0) + Vec2(2.0, 4.0)).y_==1.0f);
  }

//Test 2.4 - Subtraktion
  TEST_CASE("Division", "[Vector]") {
    REQUIRE((Vec2(2.0, 3.0) - Vec2(2.0, 3.0)).x_==0.0f);
    REQUIRE((Vec2(2.0, 3.0) - Vec2(2.0, 5.0)).y_==-2.0f);
  }

   TEST_CASE("Division2", "[Vector]") {
    REQUIRE((Vec2(-2.0, -3.0) - Vec2(2.0, 4.0)).x_==0.0f);
    REQUIRE((Vec2(-2.0, -3.0) - Vec2(2.0, 4.0)).y_==1.0f);
  }

//Test 2.4 - Multiplikation
  TEST_CASE("Division", "[Vector]") {
    REQUIRE((Vec2(2.0, 3.0) * 2).x_==4.0f);
    REQUIRE((Vec2(2.0, 3.0) * -2).y_==-6.0f);
  }

   TEST_CASE("Division2", "[Vector]") {
    REQUIRE((Vec2(-2.0, -3.0) * 0).x_==0.0f);
    REQUIRE((Vec2(-2.0, -3.0) * -2).y_==6.0f);
  } 

//Test 2.4 - Division
  TEST_CASE("Division", "[Vector]") {
    REQUIRE((Vec2(2.0, 3.0) / 2).x_==1.0f);
    REQUIRE((Vec2(2.0, 6.0) / -2).y_==-3.0f);
  }

   TEST_CASE("Division2", "[Vector]") {
    REQUIRE((Vec2(-2.0, -3.0) / 1).x_==-1.5f);
    REQUIRE((Vec2(-2.0, -3.0) / -2).y_==1.0f);
  } 

  //Test 2.4 - Multiplikation 2
  TEST_CASE("Division", "[Vector]") {
    REQUIRE((Vec2(2.0, 3.0) * 2).x_==4.0f);
    REQUIRE((Vec2(2.0, 3.0) * -2).y_==-6.0f);
  }

   TEST_CASE("Division2", "[Vector]") {
    REQUIRE((Vec2(-2.0, -3.0) * 0).x_==0.0f);
    REQUIRE((Vec2(-2.0, -3.0) * -2).y_==6.0f);
  } 

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
