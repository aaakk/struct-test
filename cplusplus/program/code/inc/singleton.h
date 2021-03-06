//单例模式

#ifndef CODE_INC_SINGLETON_H_
#define CODE_INC_SINGLETON_H_

#include "nsport.h"

NS_LIANG_BEG

template<typename T>
class Singleton
{
public:
	static T* getInstance();

	Singleton(){}
private:
	NOT_ALLOW_COPY(Singleton);

	static T instance;
};

template<typename T>
T Singleton<T>::instance;

template<typename T>
T* Singleton<T>::getInstance()
{
	return &instance;
}

#define SINGLETON(type) class type : public Singleton<type>

NS_LIANG_END

#endif 
