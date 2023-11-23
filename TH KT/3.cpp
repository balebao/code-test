#include <iostream>
#include <SDL.h>

class Ellipse {
public:
    Ellipse(int centerX, int centerY, int majorAxis, int minorAxis) : x(centerX), y(centerY), a(majorAxis), b(minorAxis) {}

    void Draw(SDL_Renderer* renderer) {
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // Màu đỏ
        for (int angle = 0; angle < 360; angle++) {
            double radians = angle * M_PI / 180.0;
            int xPos = x + static_cast<int>(a * cos(radians));
            int yPos = y + static_cast<int>(b * sin(radians));
            SDL_RenderDrawPoint(renderer, xPos, yPos);
        }
    }

private:
    int x, y;      // Tọa độ tâm
    int a, b;      // Bán kính lớn và bán kính nhỏ
};

int main(int argc, char* argv[]) {
    // Khởi tạo SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "Không thể khởi tạo SDL: " << SDL_GetError() << std::endl;
        return 1;
    }

    // Tạo cửa sổ
    const int screenWidth = 800;
    const int screenHeight = 600;
    SDL_Window* window = SDL_CreateWindow("Vẽ Hình Tròn",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        screenWidth, screenHeight, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        std::cerr << "Không thể tạo cửa sổ: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }

    // Tạo renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr) {
        std::cerr << "Không thể tạo renderer: " << SDL_GetError() << std::endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // Nhập thông tin về hình tròn
    int centerX, centerY, radius;
    std::cout << "Nhập tọa độ tâm x: ";
    std::cin >> centerX;
    std::cout << "Nhập tọa độ tâm y: ";
    std::cin >> centerY;
    std::cout << "Nhập bán kính: ";
    std::cin >> radius;

    // Vẽ hình tròn
    Ellipse circle(centerX, centerY, radius, radius);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); // Màu trắng
    SDL_RenderClear(renderer);
    circle.Draw(renderer);
    SDL_RenderPresent(renderer);

    bool quit = false;
    SDL_Event e;
    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    // Giải phóng tài nguyên và thoát SDL
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
