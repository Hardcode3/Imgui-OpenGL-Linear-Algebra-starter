#include <glm/glm.hpp>

int main()
{
    glm::mat4 myMatrix;
    glm::vec4 myVector;
    // remplir myMatrix et myVector d'une façon ou d'une autre
    glm::vec4 transformedVector = myMatrix * myVector; // Encore, dans cet ordre ! C'est important.
    return 0;
}
