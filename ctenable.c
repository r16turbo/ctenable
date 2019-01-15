#include <windows.h>

int main() {
  return SystemParametersInfo(SPI_SETFONTSMOOTHING, TRUE, NULL, SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
}
