#include <iostream>
#include "Color.hpp"
#include "Image.hpp"

using namespace std;


int main()
{    
    Color red(1, 0, 0);
    Color green(0, 1, 0);
    Color black;

    cout << "Red : " << red << std::endl;
    cout << "Green : " << green << std::endl;
    cout << "Black : " << black << std::endl;

    Color yellow = red + green;

    cout << "Yellow : " << yellow << std::endl;

    // Create an image in memory, and fill it with yellow
    Image image(512, 512, black);

    // Make a red square on the top left of the image
    for (int y = 206; y < 306; y++) {
      for (int x = 206; x < 306; x++) {
        image.SetPixel(x, y, green);
      }
    }

    image.WriteFile("test.png");
}