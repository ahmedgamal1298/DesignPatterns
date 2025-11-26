#pragma once
#include <mutex>
#include <iostream>
#include <memory>
#include <atomic>

class Basic
{
	inline static std::mutex mutex_m{};
	inline static std::atomic<Basic*> m_instance{ nullptr };
	Basic() = default;
	~Basic() {
		std::cout << __FUNCSIG__ << std::endl;
	
	}

public:
	static Basic* GetInstance();
	static void DestroyInstance();
};

