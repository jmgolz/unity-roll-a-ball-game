#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// CameraController
struct CameraController_t3473169601;
// PlayerController
struct PlayerController_t2866526589;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// System.Object
struct Il2CppObject;
// UnityEngine.Collider
struct Collider_t2939674232;
// Rotator
struct Rotator_t3048826765;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_CameraController3473169601.h"
#include "AssemblyU2DCSharp_CameraController3473169601MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "AssemblyU2DCSharp_PlayerController2866526589.h"
#include "AssemblyU2DCSharp_PlayerController2866526589MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_ArrayTypes.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_Int321153838500MethodDeclarations.h"
#include "AssemblyU2DCSharp_Rotator3048826765.h"
#include "AssemblyU2DCSharp_Rotator3048826765MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, method) ((  Rigidbody_t3346577219 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraController::.ctor()
extern "C"  void CameraController__ctor_m1305907962 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C"  void CameraController_Start_m253045754 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_2 = __this->get_player_2();
		NullCheck(L_2);
		Transform_t1659122786 * L_3 = GameObject_get_transform_m1278640159(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->set_offset_3(L_5);
		return;
	}
}
// System.Void CameraController::LateUpdate()
extern "C"  void CameraController_LateUpdate_m786793369 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_1 = __this->get_player_2();
		NullCheck(L_1);
		Transform_t1659122786 * L_2 = GameObject_get_transform_m1278640159(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t4282066566  L_3 = Transform_get_position_m2211398607(L_2, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = __this->get_offset_3();
		Vector3_t4282066566  L_5 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m3111394108(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2658519486 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1086561018;
extern const uint32_t PlayerController_Start_m1605657278_MetadataUsageId;
extern "C"  void PlayerController_Start_m1605657278 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m1605657278_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObjectU5BU5D_t2662109048* L_0 = GameObject_FindGameObjectsWithTag_m3058873418(NULL /*static, unused*/, _stringLiteral1086561018, /*hidden argument*/NULL);
		NullCheck(L_0);
		__this->set_numberOfPickupObjects_4((((int32_t)((int32_t)(((Il2CppArray *)L_0)->max_length)))));
		Rigidbody_t3346577219 * L_1 = Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var);
		__this->set_rb_2(L_1);
		Text_t9039225 * L_2 = __this->get_winText_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		PlayerController_SetCountText_m1021738208(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const uint32_t PlayerController_FixedUpdate_m270852281_MetadataUsageId;
extern "C"  void PlayerController_FixedUpdate_m270852281 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_FixedUpdate_m270852281_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Vector3_t4282066566  L_0 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		Vector3_t4282066566  L_1 = Input_get_acceleration_m3697865796(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_x_1();
		(&V_0)->set_x_1(L_2);
		Vector3_t4282066566  L_3 = Input_get_acceleration_m3697865796(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_3;
		float L_4 = (&V_2)->get_y_2();
		(&V_0)->set_z_3(L_4);
		Rigidbody_t3346577219 * L_5 = __this->get_rb_2();
		Vector3_t4282066566  L_6 = V_0;
		float L_7 = __this->get_speed_3();
		Vector3_t4282066566  L_8 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody_AddForce_m3682301239(L_5, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
extern Il2CppCodeGenString* _stringLiteral1086561018;
extern const uint32_t PlayerController_OnTriggerEnter_m3392021114_MetadataUsageId;
extern "C"  void PlayerController_OnTriggerEnter_m3392021114 (PlayerController_t2866526589 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnTriggerEnter_m3392021114_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t2939674232 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t3674682005 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_CompareTag_m3153977471(L_1, _stringLiteral1086561018, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		Collider_t2939674232 * L_3 = ___other0;
		NullCheck(L_3);
		GameObject_t3674682005 * L_4 = Component_get_gameObject_m1170635899(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m3538205401(L_4, (bool)0, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_count_5();
		__this->set_count_5(((int32_t)((int32_t)L_5+(int32_t)1)));
		PlayerController_SetCountText_m1021738208(__this, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void PlayerController::SetCountText()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2622482517;
extern Il2CppCodeGenString* _stringLiteral1681054724;
extern const uint32_t PlayerController_SetCountText_m1021738208_MetadataUsageId;
extern "C"  void PlayerController_SetCountText_m1021738208 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_SetCountText_m1021738208_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t9039225 * L_0 = __this->get_countText_6();
		int32_t* L_1 = __this->get_address_of_count_5();
		String_t* L_2 = Int32_ToString_m1286526384(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral2622482517, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		int32_t L_4 = __this->get_count_5();
		int32_t L_5 = __this->get_numberOfPickupObjects_4();
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0041;
		}
	}
	{
		Text_t9039225 * L_6 = __this->get_winText_7();
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral1681054724);
	}

IL_0041:
	{
		return;
	}
}
// System.Void Rotator::.ctor()
extern "C"  void Rotator__ctor_m1971779198 (Rotator_t3048826765 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rotator::Update()
extern "C"  void Rotator_Update_m2722475087 (Rotator_t3048826765 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m2926210380(&L_1, (15.0f), (30.0f), (45.0f), /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_3 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m637363399(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
