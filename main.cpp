#include "ftpserver.h"
#include "networking.h"
#include <hal/video.h>

int main() {
  XVideoSetMode(640,480,32,60);
  bool dhcp = true;
  setupNetwork(&dhcp);
  ftpServer(nullptr);
  closeNetwork();
  return 0;
}
