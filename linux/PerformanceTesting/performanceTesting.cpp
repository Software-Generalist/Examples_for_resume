#include <chrono>
#include <iostream>

int main (int argc, char** argv){

	auto begin = std::chrono::high_resolution_clock::now();
	uint32_t iterations = 10000;
	for(uint32_t i = 0; i < iterations; ++i)
	{
	    // code to benchmark
	}
	auto end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end-begin).count();
	std::cout << duration << "ns total, average : " << duration / iterations << "ns." << std::endl;
}
