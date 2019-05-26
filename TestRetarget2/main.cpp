#include <iostream>
#include <sdkddkver.h>
int main(int argc, char** argv)
{
	std::cout << "Hello world" << std::endl;
	std::cout << _MSC_VER << " " << _WIN32_WINNT << " " << WDK_NTDDI_VERSION << " " << NTDDI_VERSION << std::endl;
}