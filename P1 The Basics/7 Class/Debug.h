
// This file illustrates a literal class, which is a C++ 11 feature

#ifndef DEBUG_H
#define DEBUG_H
class Debug {
public:
	constexpr Debug(bool b = true): hw(b), io(b), other(b) { }
	constexpr Debug(bool h, bool i, bool o): 
	                                hw(h), io(i), other(o) { }
	constexpr bool any() { return hw || io || other; }
	constexpr bool hardware() { return hw || io; }
	constexpr bool app() { return other; }

	void set_io(bool b) { io = b; }
	void set_hw(bool b) { hw = b; }
	void set_other(bool b) { hw = b; }
private:
	bool hw;    // hardware errors other than IO errors
	bool io;    // IO errors
	bool other; // other errors
};

class HW_Subsystem {
public:
	HW_Subsystem(): debug(false) { }          // by default no debugging
	bool field_debug()   { return debug.any(); }
	bool default_debug() { return enable.any() && debug.any(); }
	void set_debug(bool b) { debug.set_hw(b); }  // turn on hardware debugging
private:
	Debug debug;
	constexpr static Debug enable{true, false, false};
};

class IO_Subsystem {
public:
	IO_Subsystem(): debug(false) { }          // by default no debugging
	bool field_debug()     { return debug.any(); }
	bool default_debug()   { return enable.any() && debug.any(); }
	void set_debug(bool b) { debug.set_io(b); }  // turn on IO debugging
private:
	Debug debug;
	constexpr static Debug enable{true, false, true};
};
#endif
