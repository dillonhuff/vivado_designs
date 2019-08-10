#define IMG_SIZE 100

void cosim(char a[IMG_SIZE], int b[256]) {

  
  char pix;
  int c;
  for (int i = 0; i < IMG_SIZE; i++) {
#pragma HLS pipeline II=1
    pix = a[i];
    c = b[pix];
    b[pix] = c + 1;
  }
}
