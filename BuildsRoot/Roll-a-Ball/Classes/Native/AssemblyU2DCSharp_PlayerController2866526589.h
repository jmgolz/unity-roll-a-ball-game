#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t3346577219 * ___rb_2;
	// System.Single PlayerController::speed
	float ___speed_3;
	// System.Int32 PlayerController::numberOfPickupObjects
	int32_t ___numberOfPickupObjects_4;
	// System.Int32 PlayerController::count
	int32_t ___count_5;
	// UnityEngine.UI.Text PlayerController::countText
	Text_t9039225 * ___countText_6;
	// UnityEngine.UI.Text PlayerController::winText
	Text_t9039225 * ___winText_7;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rb_2)); }
	inline Rigidbody_t3346577219 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody_t3346577219 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier(&___rb_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_numberOfPickupObjects_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___numberOfPickupObjects_4)); }
	inline int32_t get_numberOfPickupObjects_4() const { return ___numberOfPickupObjects_4; }
	inline int32_t* get_address_of_numberOfPickupObjects_4() { return &___numberOfPickupObjects_4; }
	inline void set_numberOfPickupObjects_4(int32_t value)
	{
		___numberOfPickupObjects_4 = value;
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of_countText_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___countText_6)); }
	inline Text_t9039225 * get_countText_6() const { return ___countText_6; }
	inline Text_t9039225 ** get_address_of_countText_6() { return &___countText_6; }
	inline void set_countText_6(Text_t9039225 * value)
	{
		___countText_6 = value;
		Il2CppCodeGenWriteBarrier(&___countText_6, value);
	}

	inline static int32_t get_offset_of_winText_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___winText_7)); }
	inline Text_t9039225 * get_winText_7() const { return ___winText_7; }
	inline Text_t9039225 ** get_address_of_winText_7() { return &___winText_7; }
	inline void set_winText_7(Text_t9039225 * value)
	{
		___winText_7 = value;
		Il2CppCodeGenWriteBarrier(&___winText_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
