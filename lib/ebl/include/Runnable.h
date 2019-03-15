#ifndef OS_WRAPPER_RUNNABLE_H_INCLUDED
#define OS_WRAPPER_RUNNABLE_H_INCLUDED

namespace ebl {

class Runnable {
public:
	virtual ~Runnable() {}
	virtual void run() = 0;
};

}

#endif // OS_WRAPPER_RUNNABLE_H_INCLUDED
