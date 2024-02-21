#include <stddef.h>
#include <stdio.h>

extern unsigned char _binary_objcopy_png_start[];
extern unsigned char _binary_objcopy_png_end[];
extern const char _binary_objcopy_png_size[]; /* 测试下来看上去不行 */

int main() {
  size_t filesize = (size_t)(_binary_objcopy_png_size);
  size_t offsetsize = _binary_objcopy_png_end - _binary_objcopy_png_start;

  printf("filesize: %ld\n", filesize);
  printf("offsetsize: %ld\n", offsetsize);

  return 0;
}
