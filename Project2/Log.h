#pragma once
/// void Log is static here cause since we are using this in multiple cpp files,
/// we need to make this stick to those particular translation units only.

static void Log(const char* message)
{
	std::cout << message << std::endl;
}