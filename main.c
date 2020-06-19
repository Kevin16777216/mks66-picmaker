#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"

int main() {

  screen s;
  color c;

  c.red = 0;
  c.green = 255;
  c.blue = 0;

  clear_screen(s);
  int x = 0;
  int y = 0;
  while(y < 500){
    x = 0;
    while(x <500){
      if((y%5)==(x%5)){
        plot(s,c,x,y);
      }
      x++;
    }
    y++;
  }
  display(s);
  save_extension(s, "lines.png");
  save_ppm(s, "binary.ppm");
  save_ppm_ascii(s, "ascii.ppm");
}
