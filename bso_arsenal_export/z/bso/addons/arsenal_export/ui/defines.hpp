#define pixelScale  0.25
#define GRID_W (pixelW * pixelGridNoUIScale * pixelScale)
#define GRID_H (pixelH * pixelGridNoUIScale * pixelScale)

#define WIDTH_TOTAL (safezoneW - 2 * (93 * GRID_W))
#define WIDTH_GAP (WIDTH_TOTAL / 100)
#define WIDTH_SINGLE ((WIDTH_TOTAL - 6 * WIDTH_GAP) / 5)
