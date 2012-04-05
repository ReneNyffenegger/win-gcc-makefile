/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "diagnostic-core.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char * const output_0[] = {
  "test{b}\t%0, %0",
  "cmp{b}\t{%1, %0|%0, %1}",
};

static const char * const output_1[] = {
  "test{w}\t%0, %0",
  "cmp{w}\t{%1, %0|%0, %1}",
};

static const char * const output_2[] = {
  "test{l}\t%0, %0",
  "cmp{l}\t{%1, %0|%0, %1}",
};

static const char * const output_3[] = {
  "test{q}\t%0, %0",
  "cmp{q}\t{%1, %0|%0, %1}",
};

static const char *
output_16 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1206 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_18 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1253 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_20 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1287 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_21 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1287 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_24 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1322 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, true);
}

static const char *
output_26 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1372 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_27 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1372 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_31 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1426 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
#ifndef HAVE_AS_IX86_SAHF
  if (TARGET_64BIT)
    return ASM_BYTE "0x9e";
  else
#endif
  return "sahf";
}
}

static const char *
output_32 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1450 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true, false);
}

static const char *
output_33 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1479 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true, false);
}

static const char *
output_34 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1503 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true, false);
}

static const char *
output_35 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1523 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true, true);
}

static const char *
output_36 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1552 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true, true);
}

static const char *
output_37 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1576 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true, true);
}

static const char *
output_47 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1797 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      if (misaligned_operand (operands[0], OImode)
	  || misaligned_operand (operands[1], OImode))
	return "vmovdqu\t{%1, %0|%0, %1}";
      else
	return "vmovdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_48 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1881 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* TDmode values are passed as TImode on the stack.  Moving them
	 to stack may result in unaligned memory access.  */
      if (misaligned_operand (operands[0], TImode)
	  || misaligned_operand (operands[1], TImode))
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqu\t{%1, %0|%0, %1}";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_49 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2091 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_SSECVT:
      if (SSE_REG_P (operands[0]))
	return "movq2dq\t{%1, %0|%0, %1}";
      else
	return "movdq2q\t{%1, %0|%0, %1}";

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_TI:
	  return "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_DI:
	   return "%vmovq\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2SF:
	  return "movlps\t{%1, %0|%0, %1}";
	default:
	  gcc_unreachable ();
	}

    case TYPE_MMXMOV:
      return "movq\t{%1, %0|%0, %1}";

    case TYPE_SSELOG1:
      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_MMX:
      return "pxor\t%0, %0";

    case TYPE_MULTI:
      return "#";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_50 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2172 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_SSELOG1:
      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_TI:
	  return "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";
	case MODE_SI:
          return "%vmovd\t{%1, %0|%0, %1}";
	case MODE_SF:
          return "%vmovss\t{%1, %0|%0, %1}";
	default:
	  gcc_unreachable ();
	}

    case TYPE_MMX:
      return "pxor\t%0, %0";

    case TYPE_MMXMOV:
      if (get_attr_mode (insn) == MODE_DI)
	return "movq\t{%1, %0|%0, %1}";
      return "movd\t{%1, %0|%0, %1}";

    case TYPE_LEA:
      return "lea{l}\t{%a1, %0|%0, %a1}";

    default:
      gcc_assert (!flag_pic || LEGITIMATE_PIC_OPERAND_P (operands[1]));
      if (ix86_use_lea_for_mov (insn, operands))
	return "lea{l}\t{%a1, %0|%0, %a1}";
      else
	return "mov{l}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_51 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2251 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      /* movzwl is faster than movw on p2 due to partial word stalls,
	 though not as fast as an aligned movl.  */
      return "movz{wl|x}\t{%1, %k0|%k0, %1}";
    default:
      if (get_attr_mode (insn) == MODE_SI)
        return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else
        return "mov{w}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_52 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2307 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      gcc_assert (ANY_QI_REG_P (operands[1]) || MEM_P (operands[1]));
      return "movz{bl|x}\t{%1, %k0|%k0, %1}";
    default:
      if (get_attr_mode (insn) == MODE_SI)
        return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else
        return "mov{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_64 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2508 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movs{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char *
output_66 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2571 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movz{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char *
output_69 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2634 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_70 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2654 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_71 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2672 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_72 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2709 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_73 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2743 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  /* Anything else should be already split before reg-stack.  */
  gcc_assert (which_alternative == 1);
  return "push{l}\t%1";
}
}

static const char *
output_74 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2809 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      /* Handle misaligned load/store since we
         don't have movmisaligntf pattern. */
      if (misaligned_operand (operands[0], TFmode)
	  || misaligned_operand (operands[1], TFmode))
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqu\t{%1, %0|%0, %1}";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";
	}

    case 2:
      return standard_sse_constant_opcode (insn, operands[1]);

    case 3:
    case 4:
	return "#";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_75 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2872 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "#";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_76 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3051 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "#";

    case 5:
    case 9:
      return standard_sse_constant_opcode (insn, operands[1]);

    case 6:
    case 7:
    case 8:
    case 10:
    case 11:
    case 12:
      switch (get_attr_mode (insn))
	{
	case MODE_V2DF:
	  if (!TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovapd\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_DI:
	  return "%vmovq\t{%1, %0|%0, %1}";
	case MODE_DF:
	  if (TARGET_AVX && REG_P (operands[0]) && REG_P (operands[1]))
	    return "vmovsd\t{%1, %0, %0|%0, %0, %1}";
	  return "%vmovsd\t{%1, %0|%0, %1}";
	case MODE_V1DF:
	  return "%vmovlpd\t{%1, %d0|%d0, %1}";
	case MODE_V2SF:
	  return "%vmovlps\t{%1, %d0|%d0, %1}";
	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_77 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3183 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "mov{l}\t{%1, %0|%0, %1}";

    case 5:
      return standard_sse_constant_opcode (insn, operands[1]);

    case 6:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "%vmovaps\t{%1, %0|%0, %1}";
      if (TARGET_AVX)
	return "vmovss\t{%1, %0, %0|%0, %0, %1}";

    case 7:
    case 8:
      return "%vmovss\t{%1, %0|%0, %1}";

    case 9:
    case 10:
    case 14:
    case 15:
      return "movd\t{%1, %0|%0, %1}";

    case 11:
      return "movq\t{%1, %0|%0, %1}";

    case 12:
    case 13:
      return "%vmovd\t{%1, %0|%0, %1}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_78 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3346 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_79 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3361 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_80 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3361 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char * const output_81[] = {
  "#",
  "#",
  "#",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
};

static const char *
output_91 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3685 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cwtl|cwde}";
    default:
      return "movs{wl|x}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_93 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3756 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cbtw|cbw}";
    default:
      return "movs{bw|x}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_94 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3870 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return "%vcvtss2sd\t{%1, %d0|%d0, %1}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_96 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3901 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_97 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3930 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_98 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3930 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_99 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4019 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);
    case 1:
      return "%vcvtsd2ss\t{%1, %d0|%d0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_101 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4051 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_102 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4061 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);
    case 1:
      return "%vcvtsd2ss\t{%1, %d0|%d0, %1}";

    default:
      return "#";
    }
}
}

static const char *
output_103 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4085 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    default:
      return "#";
    }
}
}

static const char *
output_104 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4106 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_105 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4152 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  gcc_assert (!which_alternative);
  return output_387_reg_move (insn, operands);
}
}

static const char *
output_106 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4166 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  gcc_assert (!which_alternative);
  return output_387_reg_move (insn, operands);
}
}

static const char *
output_107 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4180 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_108 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4180 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_109 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4189 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_110 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4189 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_118 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4447 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, true);
}

static const char *
output_119 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4447 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, true);
}

static const char *
output_120 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4447 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, true);
}

static const char *
output_127 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4531 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_129 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4586 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_130 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4586 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char * const output_152[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_153[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_156[] = {
  "fild%Z1\t%1",
  "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
  "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
};

static const char * const output_157[] = {
  "fild%Z1\t%1",
  "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
  "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
};

static const char * const output_158[] = {
  "fild%Z1\t%1",
  "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
};

static const char * const output_159[] = {
  "fild%Z1\t%1",
  "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
};

static const char * const output_170[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_171[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_172[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_173[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_174[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_175[] = {
  "fild%Z1\t%1",
  "#",
};

static const char *
output_194 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5509 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      /* For most processors, ADD is faster than LEA.  This alternative
	 was added to use ADD as much as possible.  */
      if (which_alternative == 2)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}
        
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], SImode))
        return "sub{l}\t{%2, %0|%0, %2}";

      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_195 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5509 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      /* For most processors, ADD is faster than LEA.  This alternative
	 was added to use ADD as much as possible.  */
      if (which_alternative == 2)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}
        
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], DImode))
        return "sub{q}\t{%2, %0|%0, %2}";

      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_196 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5618 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* For most processors, ADD is faster than LEA.  This alternative
	 was added to use ADD as much as possible.  */
      if (which_alternative == 2)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], HImode))
	return "sub{w}\t{%2, %0|%0, %2}";

      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_197 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5671 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  bool widen = (which_alternative == 3 || which_alternative == 4);

  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
	return widen ? "inc{l}\t%k0" : "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return widen ? "dec{l}\t%k0" : "dec{b}\t%0";
	}

    default:
      /* For most processors, ADD is faster than LEA.  These alternatives
	 were added to use ADD as much as possible.  */
      if (which_alternative == 2 || which_alternative == 4)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], QImode))
	{
	  if (widen)
	    return "sub{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sub{b}\t{%2, %0|%0, %2}";
	}
      if (widen)
        return "add{l}\t{%k2, %k0|%k0, %k2}";
      else
        return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_198 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5733 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[1] == const1_rtx)
	return "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "dec{b}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[1], QImode))
	return "sub{b}\t{%1, %0|%0, %1}";

      return "add{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_199 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5821 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{b}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], QImode))
        return "sub{b}\t{%2, %0|%0, %2}";

      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_200 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5821 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{w}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], HImode))
        return "sub{w}\t{%2, %0|%0, %2}";

      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_201 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5821 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], SImode))
        return "sub{l}\t{%2, %0|%0, %2}";

      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_202 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5821 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], DImode))
        return "sub{q}\t{%2, %0|%0, %2}";

      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_203 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5900 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{b}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], QImode))
        return "sub{b}\t{%2, %0|%0, %2}";

      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_204 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5900 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{w}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], HImode))
        return "sub{w}\t{%2, %0|%0, %2}";

      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_205 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5900 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], SImode))
        return "sub{l}\t{%2, %0|%0, %2}";

      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_206 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5900 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], DImode))
        return "sub{q}\t{%2, %0|%0, %2}";

      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_207 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6029 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{b}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], QImode))
	return "add{b}\t{%2, %0|%0, %2}";

      return "sub{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_208 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6029 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{w}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], HImode))
	return "add{w}\t{%2, %0|%0, %2}";

      return "sub{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_209 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6029 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{l}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], SImode))
	return "add{l}\t{%2, %0|%0, %2}";

      return "sub{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_210 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6069 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{b}\t%0";
      else
        {
          gcc_assert (operands[2] == constm1_rtx);
          return "dec{b}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], QImode))
        return "sub{b}\t{%2, %0|%0, %2}";

      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_211 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6069 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{w}\t%0";
      else
        {
          gcc_assert (operands[2] == constm1_rtx);
          return "dec{w}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], HImode))
        return "sub{w}\t{%2, %0|%0, %2}";

      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_212 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6069 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
          gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], SImode))
        return "sub{l}\t{%2, %0|%0, %2}";

      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_213 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6069 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
          gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], DImode))
        return "sub{q}\t{%2, %0|%0, %2}";

      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_214 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6146 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%h0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{b}\t%h0";
	}

    default:
      return "add{b}\t{%2, %h0|%h0, %2}";
    }
}
}

static const char * const output_258[] = {
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %0|%0, %2}",
};

static const char * const output_259[] = {
  "imul{w}\t{%2, %1, %0|%0, %1, %2}",
  "imul{w}\t{%2, %1, %0|%0, %1, %2}",
  "imul{w}\t{%2, %0|%0, %2}",
};

static const char * const output_262[] = {
  "mul{l}\t%2",
  "#",
};

static const char *
output_280 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7405 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (which_alternative == 3)
    {
      if (CONST_INT_P (operands[1]) && INTVAL (operands[1]) < 0)
	operands[1] = GEN_INT (INTVAL (operands[1]) & 0xff);
      return "test{l}\t{%1, %k0|%k0, %1}";
    }
  return "test{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_288 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7725 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      {
	enum machine_mode mode;

	gcc_assert (CONST_INT_P (operands[2]));
        if (INTVAL (operands[2]) == 0xffff)
	  mode = HImode;
	else
	  {
	    gcc_assert (INTVAL (operands[2]) == 0xff);
	    mode = QImode;
	  }

	operands[1] = gen_lowpart (mode, operands[1]);
	if (mode == HImode)
	  return "movz{wl|x}\t{%1, %0|%0, %1}";
	else
	  return "movz{bl|x}\t{%1, %0|%0, %1}";
      }

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "and{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_289 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7782 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      gcc_assert (CONST_INT_P (operands[2]));
      gcc_assert (INTVAL (operands[2]) == 0xff);
      return "movz{bl|x}\t{%b1, %k0|%k0, %b1}";

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));

      return "and{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_290[] = {
  "and{b}\t{%2, %0|%0, %2}",
  "and{b}\t{%2, %0|%0, %2}",
  "and{l}\t{%k2, %k0|%k0, %k2}",
};

static const char *
output_292 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7901 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (which_alternative == 2)
    {
      if (CONST_INT_P (operands[2]) && INTVAL (operands[2]) < 0)
        operands[2] = GEN_INT (INTVAL (operands[2]) & 0xff);
      return "and{l}\t{%2, %k0|%k0, %2}";
    }
  return "and{b}\t{%2, %0|%0, %2}";
}
}

static const char * const output_307[] = {
  "or{b}\t{%2, %0|%0, %2}",
  "or{b}\t{%2, %0|%0, %2}",
  "or{l}\t{%k2, %k0|%k0, %k2}",
};

static const char * const output_308[] = {
  "xor{b}\t{%2, %0|%0, %2}",
  "xor{b}\t{%2, %0|%0, %2}",
  "xor{l}\t{%k2, %k0|%k0, %k2}",
};

static const char * const output_375[] = {
  "not{b}\t%0",
  "not{l}\t%k0",
};

static const char *
output_385 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9074 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
    case TYPE_ISHIFTX:
      return "#";

    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "add{l}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_386 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9074 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
    case TYPE_ISHIFTX:
      return "#";

    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "add{q}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_387 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9204 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_388 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9249 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      if (REG_P (operands[1]) && !ANY_QI_REG_P (operands[1]))
        return "add{l}\t%k0, %k0";
      else
        return "add{b}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t%k0";
	  else
	    return "sal{b}\t%0";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sal{b}\t{%2, %0|%0, %2}";
	}
    }
}
}

static const char *
output_389 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9310 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[1] == const1_rtx);
      return "add{b}\t%0, %0";

    default:
      if (operands[1] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_390 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9406 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{b}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_391 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9406 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_392 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9406 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_393 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9406 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{q}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_394 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9500 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{b}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_395 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9500 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_396 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9500 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_397 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9500 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{q}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_405[] = {
  "{cltd|cdq}",
  "sar{l}\t{%2, %0|%0, %2}",
};

static const char *
output_408 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9727 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ISHIFTX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "shr{l}\t%0";
      else
	return "shr{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_409 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9727 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ISHIFTX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sar{l}\t%0";
      else
	return "sar{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_410 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9727 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ISHIFTX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "shr{q}\t%0";
      else
	return "shr{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_411 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9727 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ISHIFTX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sar{q}\t%0";
      else
	return "sar{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_412 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9824 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{b}\t%0";
  else
    return "shr{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_413 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9824 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{b}\t%0";
  else
    return "sar{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_414 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9824 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{w}\t%0";
  else
    return "shr{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_415 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9824 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{w}\t%0";
  else
    return "sar{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_416 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9850 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[1] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{b}\t%0";
  else
    return "shr{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_417 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9850 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[1] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{b}\t%0";
  else
    return "sar{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_418 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9885 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{b}\t%0";
  else
    return "shr{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_419 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9885 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{b}\t%0";
  else
    return "sar{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_420 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9885 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{w}\t%0";
  else
    return "shr{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_421 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9885 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{w}\t%0";
  else
    return "sar{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_422 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9885 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{l}\t%0";
  else
    return "shr{l}\t{%2, %0|%0, %2}";
}
}

static const char *
output_423 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9885 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{l}\t%0";
  else
    return "sar{l}\t{%2, %0|%0, %2}";
}
}

static const char *
output_424 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9885 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{q}\t%0";
  else
    return "shr{q}\t{%2, %0|%0, %2}";
}
}

static const char *
output_425 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9885 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{q}\t%0";
  else
    return "sar{q}\t{%2, %0|%0, %2}";
}
}

static const char *
output_426 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9947 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{b}\t%0";
  else
    return "shr{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_427 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9947 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{b}\t%0";
  else
    return "sar{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_428 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9947 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{w}\t%0";
  else
    return "shr{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_429 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9947 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{w}\t%0";
  else
    return "sar{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_430 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9947 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{l}\t%0";
  else
    return "shr{l}\t{%2, %0|%0, %2}";
}
}

static const char *
output_431 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9947 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{l}\t%0";
  else
    return "sar{l}\t{%2, %0|%0, %2}";
}
}

static const char *
output_432 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9947 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{q}\t%0";
  else
    return "shr{q}\t{%2, %0|%0, %2}";
}
}

static const char *
output_433 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9947 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{q}\t%0";
  else
    return "sar{q}\t{%2, %0|%0, %2}";
}
}

static const char *
output_441 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10107 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ROTATEX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "rol{l}\t%0";
      else
	return "rol{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_442 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10107 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ROTATEX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "ror{l}\t%0";
      else
	return "ror{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_443 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10107 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ROTATEX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "rol{q}\t%0";
      else
	return "rol{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_444 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10107 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ROTATEX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "ror{q}\t%0";
      else
	return "ror{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_445 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10230 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "rol{b}\t%0";
  else
    return "rol{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_446 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10230 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "ror{b}\t%0";
  else
    return "ror{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_447 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10230 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "rol{w}\t%0";
  else
    return "rol{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_448 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10230 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "ror{w}\t%0";
  else
    return "ror{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_449 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10256 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[1] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "rol{b}\t%0";
  else
    return "rol{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_450 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10256 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[1] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "ror{b}\t%0";
  else
    return "ror{b}\t{%1, %0|%0, %1}";
}
}

static const char * const output_457[] = {
  "cmp%D3ss\t{%2, %0|%0, %2}",
  "vcmp%D3ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_458[] = {
  "cmp%D3sd\t{%2, %0|%0, %2}",
  "vcmp%D3sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_478 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11253 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_480 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11317 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_482 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11355 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_484 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11380 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_486 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11427 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_488 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11448 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_490 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11536 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_492 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11563 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_501 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11736 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  int num = INTVAL (operands[0]);

  gcc_assert (num >= 1 && num <= 8);

  while (num--)
    fputs ("\tnop\n", asm_out_file);

  return "";
}
}

static const char *
output_502 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11757 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
#ifdef ASM_OUTPUT_MAX_SKIP_PAD
  ASM_OUTPUT_MAX_SKIP_PAD (asm_out_file, 4, (int)INTVAL (operands[0]));
#else
  /* It is tempting to use ASM_OUTPUT_ALIGN here, but we don't want to do that.
     The align insn is used to avoid 3 jump instructions in the row to improve
     branch prediction and the benefits hardly outweigh the cost of extra 8
     nops on the average inserted by full alignment pseudo operation.  */
#endif
  return "";
}
}

static const char *
output_503 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11780 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_set_got (operands[0], NULL_RTX);
}

static const char *
output_504 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11790 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_set_got (operands[0], operands[1]);
}

static const char *
output_507 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11893 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (operands[0] == const0_rtx)
    return "ret";
  else
    return "ret\t%0";
}
}

static const char *
output_510 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12002 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (TARGET_BMI)
    return "tzcnt{w}\t{%1, %0|%0, %1}";
  else
    return "bsf{w}\t{%1, %0|%0, %1}";
}
}

static const char *
output_511 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12002 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (TARGET_BMI)
    return "tzcnt{l}\t{%1, %0|%0, %1}";
  else
    return "bsf{l}\t{%1, %0|%0, %1}";
}
}

static const char *
output_522 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12149 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) << 8 | INTVAL (operands[3]));
  return "bextr\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_534 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12317 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{w}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_535 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12317 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{l}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_536 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12337 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{w}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_537 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12337 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{l}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_538 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12337 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{q}\t{%1, %0|%0, %1}";
#endif
}
}

static const char * const output_539[] = {
  "bswap\t%0",
  "movbe\t{%1, %0|%0, %1}",
  "movbe\t{%1, %0|%0, %1}",
};

static const char * const output_541[] = {
  "xchg{b}\t{%h0, %b0|%b0, %h0}",
  "rol{w}\t{$8, %0|%0, 8}",
};

static const char *
output_546 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12557 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  output_asm_insn
    ("lea{l}\t{%a2@tlsgd(,%1,1), %0|%0, %a2@tlsgd[%1*1]}", operands);
  if (TARGET_SUN_TLS)
#ifdef HAVE_AS_IX86_TLSGDPLT
    return "call\t%a2@tlsgdplt";
#else
    return "call\t%p3@plt";
#endif
  return "call\t%P3";
}
}

static const char *
output_547 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12624 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  output_asm_insn
    ("lea{l}\t{%&@tlsldm(%1), %0|%0, %&@tlsldm[%1]}", operands);
  if (TARGET_SUN_TLS)
#ifdef HAVE_AS_IX86_TLSLDMPLT
    return "call\t%&@tlsldmplt";
#else
    return "call\t%p2@plt";
#endif
  return "call\t%P2";
}
}

static const char *
output_558 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12940 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_559 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12940 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_560 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12961 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_561 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12961 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_562 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12978 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_563 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12978 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_564 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12993 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_565 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12993 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_567 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13031 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_568 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13031 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_569 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13053 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_570 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13053 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_571 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13073 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_572 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13073 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_573 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13073 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_574 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13073 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_575 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13093 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_576 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13093 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_577 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13093 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_578 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13093 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_579 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13113 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_580 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13131 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_581 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13150 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_582 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13167 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_583 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13181 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_584 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13198 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_585 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13198 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_586 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13216 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_587 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13216 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_588 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13234 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_589 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13234 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_590 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13251 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_591 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13251 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_592 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13269 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_593 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13269 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_594 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13331 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_595 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13331 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_634 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14674 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_638 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14733 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_639 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14733 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_647 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14934 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_649 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14993 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_650 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14993 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_658 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15192 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_660 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15251 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_661 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15251 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char * const output_691[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_692[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_694[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
};

static const char * const output_695[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "#",
  "#",
};

static const char * const output_696[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_699[] = {
  "maxss\t{%2, %0|%0, %2}",
  "vmaxss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_700[] = {
  "minss\t{%2, %0|%0, %2}",
  "vminss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_701[] = {
  "maxsd\t{%2, %0|%0, %2}",
  "vmaxsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_702[] = {
  "minsd\t{%2, %0|%0, %2}",
  "vminsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_703[] = {
  "minss\t{%2, %0|%0, %2}",
  "vminss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_704[] = {
  "minsd\t{%2, %0|%0, %2}",
  "vminsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_705[] = {
  "maxss\t{%2, %0|%0, %2}",
  "vmaxss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_706[] = {
  "maxsd\t{%2, %0|%0, %2}",
  "vmaxsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_707 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16617 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOV:
      return "mov{l}\t{%1, %0|%0, %1}";

    case TYPE_ALU:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], SImode))
	return "sub{l}\t{%2, %0|%0, %2}";

      return "add{l}\t{%2, %0|%0, %2}";

    default:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{l}\t{%a2, %0|%0, %a2}";
    }
}
}

static const char *
output_711 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16733 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_adjust_stack_and_probe (operands[0]);
}

static const char *
output_712 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16743 "../../gcc-4.7.0/gcc/config/i386/i386.md"
 return output_probe_stack_range (operands[0], operands[2]);
}

static const char *
output_713 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17640 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{ return ASM_SHORT "0x0b0f"; }
}

static const char *
output_714 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17672 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  static const char * const patterns[4] = {
   "prefetchnta\t%a0", "prefetcht2\t%a0", "prefetcht1\t%a0", "prefetcht0\t%a0"
  };

  int locality = INTVAL (operands[1]);
  gcc_assert (locality >= 0 && locality <= 3);

  return patterns[locality];
}
}

static const char *
output_715 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17693 "../../gcc-4.7.0/gcc/config/i386/i386.md"
{
  if (INTVAL (operands[1]) == 0)
    return "prefetch\t%a0";
  else
    return "prefetchw\t%a0";
}
}

static const char * const output_737[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "%vpxor\t%0, %d0",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_738[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "%vpxor\t%0, %d0",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_739[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "%vpxor\t%0, %d0",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_740[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "%vpxor\t%0, %d0",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_741[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "%vxorps\t%0, %d0",
  "%vmovaps\t{%1, %0|%0, %1}",
  "%vmovlps\t{%1, %d0|%d0, %1}",
  "%vmovlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_744[] = {
  "pfsub\t{%2, %0|%0, %2}",
  "pfsubr\t{%1, %0|%0, %1}",
};

static const char * const output_767[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_769[] = {
  "punpckhdq\t%0, %0",
  "unpckhps\t%0, %0",
  "#",
  "#",
  "#",
  "#",
};

static const char *
output_831 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1283 "../../gcc-4.7.0/gcc/config/i386/mmx.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  if (MEM_P (operands[2]))
    return "pinsrw\t{%3, %2, %0|%0, %2, %3}";
  else
    return "pinsrw\t{%3, %k2, %0|%0, %k2, %3}";
}
}

static const char *
output_833 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1330 "../../gcc-4.7.0/gcc/config/i386/mmx.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "pshufw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char * const output_837[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_839[] = {
  "punpckhdq\t%0, %0",
  "punpckhdq\t%0, %0",
  "pshufd\t{$85, %1, %0|%0, %1, 85}",
  "unpckhps\t%0, %0",
  "#",
  "#",
  "#",
};

static const char *
output_840 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1579 "../../gcc-4.7.0/gcc/config/i386/mmx.md"
{
  /* These two instructions have the same operation, but their encoding
     is different.  Prefer the one that is de facto standard.  */
  if (TARGET_SSE || TARGET_3DNOW_A)
    return "pavgb\t{%2, %0|%0, %2}";
  else
    return "pavgusb\t{%2, %0|%0, %2}";
}
}

static const char *
output_847 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 430 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V32QImode)
		  || misaligned_operand (operands[1], V32QImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V32QImode)
		  || misaligned_operand (operands[1], V32QImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V32QImode)
		  || misaligned_operand (operands[1], V32QImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_848 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 430 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V16QImode)
		  || misaligned_operand (operands[1], V16QImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V16QImode)
		  || misaligned_operand (operands[1], V16QImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V16QImode)
		  || misaligned_operand (operands[1], V16QImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_849 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 430 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V16HImode)
		  || misaligned_operand (operands[1], V16HImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V16HImode)
		  || misaligned_operand (operands[1], V16HImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V16HImode)
		  || misaligned_operand (operands[1], V16HImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_850 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 430 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8HImode)
		  || misaligned_operand (operands[1], V8HImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8HImode)
		  || misaligned_operand (operands[1], V8HImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8HImode)
		  || misaligned_operand (operands[1], V8HImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_851 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 430 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8SImode)
		  || misaligned_operand (operands[1], V8SImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8SImode)
		  || misaligned_operand (operands[1], V8SImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8SImode)
		  || misaligned_operand (operands[1], V8SImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_852 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 430 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4SImode)
		  || misaligned_operand (operands[1], V4SImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4SImode)
		  || misaligned_operand (operands[1], V4SImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4SImode)
		  || misaligned_operand (operands[1], V4SImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_853 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 430 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4DImode)
		  || misaligned_operand (operands[1], V4DImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4DImode)
		  || misaligned_operand (operands[1], V4DImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4DImode)
		  || misaligned_operand (operands[1], V4DImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_854 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 430 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2DImode)
		  || misaligned_operand (operands[1], V2DImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2DImode)
		  || misaligned_operand (operands[1], V2DImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2DImode)
		  || misaligned_operand (operands[1], V2DImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_855 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 430 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2TImode)
		  || misaligned_operand (operands[1], V2TImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2TImode)
		  || misaligned_operand (operands[1], V2TImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2TImode)
		  || misaligned_operand (operands[1], V2TImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_856 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 430 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V1TImode)
		  || misaligned_operand (operands[1], V1TImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V1TImode)
		  || misaligned_operand (operands[1], V1TImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V1TImode)
		  || misaligned_operand (operands[1], V1TImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_857 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 430 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8SFmode)
		  || misaligned_operand (operands[1], V8SFmode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8SFmode)
		  || misaligned_operand (operands[1], V8SFmode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8SFmode)
		  || misaligned_operand (operands[1], V8SFmode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_858 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 430 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4SFmode)
		  || misaligned_operand (operands[1], V4SFmode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4SFmode)
		  || misaligned_operand (operands[1], V4SFmode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4SFmode)
		  || misaligned_operand (operands[1], V4SFmode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_859 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 430 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4DFmode)
		  || misaligned_operand (operands[1], V4DFmode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4DFmode)
		  || misaligned_operand (operands[1], V4DFmode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4DFmode)
		  || misaligned_operand (operands[1], V4DFmode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_860 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 430 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2DFmode)
		  || misaligned_operand (operands[1], V2DFmode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2DFmode)
		  || misaligned_operand (operands[1], V2DFmode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2DFmode)
		  || misaligned_operand (operands[1], V2DFmode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else if (TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_882[] = {
  "addps\t{%2, %0|%0, %2}",
  "vaddps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_883[] = {
  "subps\t{%2, %0|%0, %2}",
  "vsubps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_884[] = {
  "addps\t{%2, %0|%0, %2}",
  "vaddps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_885[] = {
  "subps\t{%2, %0|%0, %2}",
  "vsubps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_886[] = {
  "addpd\t{%2, %0|%0, %2}",
  "vaddpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_887[] = {
  "subpd\t{%2, %0|%0, %2}",
  "vsubpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_888[] = {
  "addpd\t{%2, %0|%0, %2}",
  "vaddpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_889[] = {
  "subpd\t{%2, %0|%0, %2}",
  "vsubpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_890[] = {
  "addss\t{%2, %0|%0, %2}",
  "vaddss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_891[] = {
  "subss\t{%2, %0|%0, %2}",
  "vsubss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_892[] = {
  "addsd\t{%2, %0|%0, %2}",
  "vaddsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_893[] = {
  "subsd\t{%2, %0|%0, %2}",
  "vsubsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_894[] = {
  "mulps\t{%2, %0|%0, %2}",
  "vmulps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_895[] = {
  "mulps\t{%2, %0|%0, %2}",
  "vmulps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_896[] = {
  "mulpd\t{%2, %0|%0, %2}",
  "vmulpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_897[] = {
  "mulpd\t{%2, %0|%0, %2}",
  "vmulpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_898[] = {
  "mulss\t{%2, %0|%0, %2}",
  "vmulss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_899[] = {
  "mulsd\t{%2, %0|%0, %2}",
  "vmulsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_900[] = {
  "divps\t{%2, %0|%0, %2}",
  "vdivps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_901[] = {
  "divps\t{%2, %0|%0, %2}",
  "vdivps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_902[] = {
  "divpd\t{%2, %0|%0, %2}",
  "vdivpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_903[] = {
  "divpd\t{%2, %0|%0, %2}",
  "vdivpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_904[] = {
  "divss\t{%2, %0|%0, %2}",
  "vdivss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_905[] = {
  "divsd\t{%2, %0|%0, %2}",
  "vdivsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_908[] = {
  "rcpss\t{%1, %0|%0, %1}",
  "vrcpss\t{%1, %2, %0|%0, %2, %1}",
};

static const char * const output_913[] = {
  "sqrtss\t{%1, %0|%0, %1}",
  "vsqrtss\t{%1, %2, %0|%0, %2, %1}",
};

static const char * const output_914[] = {
  "sqrtsd\t{%1, %0|%0, %1}",
  "vsqrtsd\t{%1, %2, %0|%0, %2, %1}",
};

static const char * const output_917[] = {
  "rsqrtss\t{%1, %0|%0, %1}",
  "vrsqrtss\t{%1, %2, %0|%0, %2, %1}",
};

static const char * const output_918[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_919[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_920[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_921[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_922[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_923[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_924[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_925[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_926[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_927[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_928[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_929[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_930[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_931[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_932[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_933[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_934[] = {
  "maxss\t{%2, %0|%0, %2}",
  "vmaxss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_935[] = {
  "minss\t{%2, %0|%0, %2}",
  "vminss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_936[] = {
  "maxsd\t{%2, %0|%0, %2}",
  "vmaxsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_937[] = {
  "minsd\t{%2, %0|%0, %2}",
  "vminsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_938[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_939[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_940[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_941[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_942[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_943[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_944[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_945[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_947[] = {
  "addsubpd\t{%2, %0|%0, %2}",
  "vaddsubpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_949[] = {
  "addsubps\t{%2, %0|%0, %2}",
  "vaddsubps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_952[] = {
  "haddpd\t{%2, %0|%0, %2}",
  "vhaddpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_953[] = {
  "hsubpd\t{%2, %0|%0, %2}",
  "vhsubpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_956[] = {
  "haddps\t{%2, %0|%0, %2}",
  "vhaddps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_957[] = {
  "hsubps\t{%2, %0|%0, %2}",
  "vhsubps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_964[] = {
  "cmp%D3ps\t{%2, %0|%0, %2}",
  "vcmp%D3ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_965[] = {
  "cmp%D3ps\t{%2, %0|%0, %2}",
  "vcmp%D3ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_966[] = {
  "cmp%D3pd\t{%2, %0|%0, %2}",
  "vcmp%D3pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_967[] = {
  "cmp%D3pd\t{%2, %0|%0, %2}",
  "vcmp%D3pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_968[] = {
  "cmp%D3ps\t{%2, %0|%0, %2}",
  "vcmp%D3ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_969[] = {
  "cmp%D3ps\t{%2, %0|%0, %2}",
  "vcmp%D3ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_970[] = {
  "cmp%D3pd\t{%2, %0|%0, %2}",
  "vcmp%D3pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_971[] = {
  "cmp%D3pd\t{%2, %0|%0, %2}",
  "vcmp%D3pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_972[] = {
  "cmp%D3ss\t{%2, %0|%0, %2}",
  "vcmp%D3ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_973[] = {
  "cmp%D3sd\t{%2, %0|%0, %2}",
  "vcmp%D3sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_978 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1555 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      insn = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_979 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1555 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      insn = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_980 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1555 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      insn = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_981 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1555 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      insn = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_982 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1595 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      insn = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_983 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1595 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      insn = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_984 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1595 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      insn = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_985 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1595 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      insn = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_986 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1595 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      insn = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_987 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1595 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      insn = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_988 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1595 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      insn = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_989 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1595 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      insn = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_990 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1595 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      insn = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_991 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1595 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      insn = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_992 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1595 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      insn = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_993 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1595 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      insn = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_994 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1651 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      insn = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_995 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1651 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      insn = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_996 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1683 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      insn = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_997 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1683 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      insn = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_998 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1683 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      insn = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_999 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1683 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      insn = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_1000 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1683 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      insn = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char *
output_1001 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1683 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *insn;
  const char *suffix
    = TARGET_SSE_PACKED_SINGLE_INSN_OPTIMAL ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      insn = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      insn = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), insn, suffix);
  return buf;
}
}

static const char * const output_1026[] = {
  "vfmadd132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1027[] = {
  "vfmadd132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1028[] = {
  "vfmsub132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1029[] = {
  "vfmsub132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1030[] = {
  "vfnmadd132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1031[] = {
  "vfnmadd132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1032[] = {
  "vfnmsub132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1033[] = {
  "vfnmsub132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1050[] = {
  "vfmadd132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1051[] = {
  "vfmadd132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1052[] = {
  "vfmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1053[] = {
  "vfmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1054[] = {
  "vfmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1055[] = {
  "vfmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1056[] = {
  "vfmsub132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1057[] = {
  "vfmsub132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1058[] = {
  "vfmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1059[] = {
  "vfmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1060[] = {
  "vfmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1061[] = {
  "vfmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1062[] = {
  "vfnmadd132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1063[] = {
  "vfnmadd132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1064[] = {
  "vfnmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1065[] = {
  "vfnmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1066[] = {
  "vfnmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1067[] = {
  "vfnmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1068[] = {
  "vfnmsub132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1069[] = {
  "vfnmsub132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1070[] = {
  "vfnmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1071[] = {
  "vfnmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1072[] = {
  "vfnmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1073[] = {
  "vfnmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1074[] = {
  "vfmaddsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1075[] = {
  "vfmaddsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1076[] = {
  "vfmaddsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1077[] = {
  "vfmaddsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1078[] = {
  "vfmsubadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1079[] = {
  "vfmsubadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1080[] = {
  "vfmsubadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1081[] = {
  "vfmsubadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1085[] = {
  "cvtsi2ss\t{%2, %0|%0, %2}",
  "cvtsi2ss\t{%2, %0|%0, %2}",
  "vcvtsi2ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1098[] = {
  "cvtsi2sd\t{%2, %0|%0, %2}",
  "cvtsi2sd\t{%2, %0|%0, %2}",
  "vcvtsi2sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1107 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2646 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX)
    return "vcvtpd2dq{x}\t{%1, %0|%0, %1}";
  else
    return "cvtpd2dq\t{%1, %0|%0, %1}";
}
}

static const char *
output_1110 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2703 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX)
    return "vcvttpd2dq{x}\t{%1, %0|%0, %1}";
  else
    return "cvttpd2dq\t{%1, %0|%0, %1}";
}
}

static const char * const output_1111[] = {
  "cvtsd2ss\t{%2, %0|%0, %2}",
  "cvtsd2ss\t{%2, %0|%0, %2}",
  "vcvtsd2ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1112[] = {
  "cvtss2sd\t{%2, %0|%0, %2}",
  "cvtss2sd\t{%2, %0|%0, %2}",
  "vcvtss2sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1114 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2785 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX)
    return "vcvtpd2ps{x}\t{%1, %0|%0, %1}";
  else
    return "cvtpd2ps\t{%1, %0|%0, %1}";
}
}

static const char * const output_1118[] = {
  "movhlps\t{%2, %0|%0, %2}",
  "vmovhlps\t{%2, %1, %0|%0, %1, %2}",
  "movlps\t{%H2, %0|%0, %H2}",
  "vmovlps\t{%H2, %1, %0|%0, %1, %H2}",
  "%vmovhps\t{%2, %0|%0, %2}",
};

static const char * const output_1119[] = {
  "movlhps\t{%2, %0|%0, %2}",
  "vmovlhps\t{%2, %1, %0|%0, %1, %2}",
  "movhps\t{%2, %0|%0, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
  "%vmovlps\t{%2, %H0|%H0, %2}",
};

static const char * const output_1121[] = {
  "unpckhps\t{%2, %0|%0, %2}",
  "vunpckhps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1123[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "vunpcklps\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1128 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3612 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 8) << 4;
  mask |= (INTVAL (operands[6]) - 8) << 6;
  operands[3] = GEN_INT (mask);

  return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1129 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3654 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  switch (which_alternative)
    {
    case 0:
      return "shufps\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1130 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3654 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  switch (which_alternative)
    {
    case 0:
      return "shufps\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_1131[] = {
  "%vmovhps\t{%1, %0|%0, %1}",
  "%vmovhlps\t{%1, %d0|%d0, %1}",
  "%vmovlps\t{%H1, %d0|%d0, %H1}",
};

static const char * const output_1132[] = {
  "movhps\t{%2, %0|%0, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "vmovlhps\t{%2, %1, %0|%0, %1, %2}",
  "%vmovlps\t{%2, %H0|%H0, %2}",
};

static const char * const output_1133[] = {
  "%vmovlps\t{%1, %0|%0, %1}",
  "%vmovaps\t{%1, %0|%0, %1}",
  "%vmovlps\t{%1, %d0|%d0, %1}",
};

static const char * const output_1134[] = {
  "shufps\t{$0xe4, %1, %0|%0, %1, 0xe4}",
  "vshufps\t{$0xe4, %1, %2, %0|%0, %2, %1, 0xe4}",
  "movlps\t{%2, %0|%0, %2}",
  "vmovlps\t{%2, %1, %0|%0, %1, %2}",
  "%vmovlps\t{%2, %0|%0, %2}",
};

static const char * const output_1135[] = {
  "movss\t{%2, %0|%0, %2}",
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1138[] = {
  "vshufps\t{$0, %1, %1, %0|%0, %1, %1, 0}",
  "vbroadcastss\t{%1, %0|%0, %1}",
  "shufps\t{$0, %0, %0|%0, %0, 0}",
};

static const char * const output_1139[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "vunpcklps\t{%2, %1, %0|%0, %1, %2}",
  "insertps\t{$0x10, %2, %0|%0, %2, 0x10}",
  "vinsertps\t{$0x10, %2, %1, %0|%0, %1, %2, 0x10}",
  "%vmovss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1140[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "movss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1141[] = {
  "movlhps\t{%2, %0|%0, %2}",
  "vmovlhps\t{%2, %1, %0|%0, %1, %2}",
  "movhps\t{%2, %0|%0, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1142[] = {
  "%vinsertps\t{$0xe, %d2, %0|%0, %d2, 0xe}",
  "%vmovd\t{%2, %0|%0, %2}",
  "%vmovd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
  "pinsrd\t{$0, %2, %0|%0, %2, 0}",
  "vpinsrd\t{$0, %2, %1, %0|%0, %1, %2, 0}",
  "#",
  "#",
  "#",
};

static const char * const output_1143[] = {
  "%vinsertps\t{$0xe, %d2, %0|%0, %d2, 0xe}",
  "%vmovss\t{%2, %0|%0, %2}",
  "%vmovd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
  "pinsrd\t{$0, %2, %0|%0, %2, 0}",
  "vpinsrd\t{$0, %2, %1, %0|%0, %1, %2, 0}",
  "#",
  "#",
  "#",
};

static const char *
output_1144 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3945 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])) << 4);
  switch (which_alternative)
    {
    case 0:
      return "insertps\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vinsertps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1145 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3972 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  if (MEM_P (operands[2]))
    {
      unsigned count_s = INTVAL (operands[3]) >> 6;
      if (count_s)
	operands[3] = GEN_INT (INTVAL (operands[3]) & 0x3f);
      operands[2] = adjust_address_nv (operands[2], SFmode, count_s * 4);
    }
  switch (which_alternative)
    {
    case 0:
      return "insertps\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vinsertps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_1147[] = {
  "%vextractps\t{%2, %1, %0|%0, %1, %2}",
  "#",
  "#",
};

static const char * const output_1162[] = {
  "unpckhpd\t{%2, %0|%0, %2}",
  "vunpckhpd\t{%2, %1, %0|%0, %1, %2}",
  "%vmovddup\t{%H1, %0|%0, %H1}",
  "movlpd\t{%H1, %0|%0, %H1}",
  "vmovlpd\t{%H1, %2, %0|%0, %2, %H1}",
  "%vmovhpd\t{%1, %0|%0, %1}",
};

static const char * const output_1163[] = {
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovddup\t{%1, %0|%0, %1}",
};

static const char * const output_1164[] = {
  "unpcklpd\t{%2, %0|%0, %2}",
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "%vmovddup\t{%1, %0|%0, %1}",
  "movhpd\t{%2, %0|%0, %2}",
  "vmovhpd\t{%2, %1, %0|%0, %1, %2}",
  "%vmovlpd\t{%2, %H0|%H0, %2}",
};

static const char *
output_1165 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4542 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 4) << 1;
  mask |= (INTVAL (operands[5]) - 2) << 2;
  mask |= (INTVAL (operands[6]) - 6) << 3;
  operands[3] = GEN_INT (mask);

  return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char * const output_1167[] = {
  "punpckhqdq\t{%2, %0|%0, %2}",
  "vpunpckhqdq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1169[] = {
  "punpcklqdq\t{%2, %0|%0, %2}",
  "vpunpcklqdq\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1170 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4649 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  switch (which_alternative)
    {
    case 0:
      return "shufpd\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1171 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4649 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  switch (which_alternative)
    {
    case 0:
      return "shufpd\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_1172[] = {
  "%vmovhpd\t{%1, %0|%0, %1}",
  "unpckhpd\t%0, %0",
  "vunpckhpd\t{%d1, %0|%0, %d1}",
  "#",
  "#",
  "#",
};

static const char * const output_1173[] = {
  "movhps\t{%1, %0|%0, %1}",
  "movhlps\t{%1, %0|%0, %1}",
  "movlps\t{%H1, %0|%0, %H1}",
};

static const char * const output_1174[] = {
  "%vmovlpd\t{%1, %0|%0, %1}",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_1175[] = {
  "movlps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
};

static const char * const output_1176[] = {
  "movhpd\t{%2, %0|%0, %2}",
  "vmovhpd\t{%2, %1, %0|%0, %1, %2}",
  "unpcklpd\t{%2, %0|%0, %2}",
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "#",
  "#",
  "#",
};

static const char * const output_1177[] = {
  "%vmovsd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "vmovlpd\t{%2, %1, %0|%0, %1, %2}",
  "movsd\t{%2, %0|%0, %2}",
  "vmovsd\t{%2, %1, %0|%0, %1, %2}",
  "shufpd\t{$2, %1, %0|%0, %1, 2}",
  "movhpd\t{%H1, %0|%0, %H1}",
  "vmovhpd\t{%H1, %2, %0|%0, %2, %H1}",
  "#",
  "#",
  "#",
};

static const char * const output_1178[] = {
  "movsd\t{%2, %0|%0, %2}",
  "vmovsd\t{%2, %1, %0|%0, %1, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "vmovlpd\t{%2, %1, %0|%0, %1, %2}",
  "%vmovlpd\t{%2, %0|%0, %2}",
  "shufpd\t{$2, %1, %0|%0, %1, 2}",
  "movhps\t{%H1, %0|%0, %H1}",
  "vmovhps\t{%H1, %2, %0|%0, %2, %H1}",
  "%vmovhps\t{%1, %H0|%H0, %1}",
};

static const char * const output_1179[] = {
  "unpcklpd\t%0, %0",
  "%vmovddup\t{%1, %0|%0, %1}",
};

static const char * const output_1180[] = {
  "unpcklpd\t{%2, %0|%0, %2}",
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "%vmovddup\t{%1, %0|%0, %1}",
  "movhpd\t{%2, %0|%0, %2}",
  "vmovhpd\t{%2, %1, %0|%0, %1, %2}",
  "%vmovsd\t{%1, %0|%0, %1}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char * const output_1181[] = {
  "paddb\t{%2, %0|%0, %2}",
  "vpaddb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1182[] = {
  "psubb\t{%2, %0|%0, %2}",
  "vpsubb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1183[] = {
  "paddb\t{%2, %0|%0, %2}",
  "vpaddb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1184[] = {
  "psubb\t{%2, %0|%0, %2}",
  "vpsubb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1185[] = {
  "paddw\t{%2, %0|%0, %2}",
  "vpaddw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1186[] = {
  "psubw\t{%2, %0|%0, %2}",
  "vpsubw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1187[] = {
  "paddw\t{%2, %0|%0, %2}",
  "vpaddw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1188[] = {
  "psubw\t{%2, %0|%0, %2}",
  "vpsubw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1189[] = {
  "paddd\t{%2, %0|%0, %2}",
  "vpaddd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1190[] = {
  "psubd\t{%2, %0|%0, %2}",
  "vpsubd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1191[] = {
  "paddd\t{%2, %0|%0, %2}",
  "vpaddd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1192[] = {
  "psubd\t{%2, %0|%0, %2}",
  "vpsubd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1193[] = {
  "paddq\t{%2, %0|%0, %2}",
  "vpaddq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1194[] = {
  "psubq\t{%2, %0|%0, %2}",
  "vpsubq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1195[] = {
  "paddq\t{%2, %0|%0, %2}",
  "vpaddq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1196[] = {
  "psubq\t{%2, %0|%0, %2}",
  "vpsubq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1197[] = {
  "paddsb\t{%2, %0|%0, %2}",
  "vpaddsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1198[] = {
  "paddusb\t{%2, %0|%0, %2}",
  "vpaddusb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1199[] = {
  "psubsb\t{%2, %0|%0, %2}",
  "vpsubsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1200[] = {
  "psubusb\t{%2, %0|%0, %2}",
  "vpsubusb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1201[] = {
  "paddsb\t{%2, %0|%0, %2}",
  "vpaddsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1202[] = {
  "paddusb\t{%2, %0|%0, %2}",
  "vpaddusb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1203[] = {
  "psubsb\t{%2, %0|%0, %2}",
  "vpsubsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1204[] = {
  "psubusb\t{%2, %0|%0, %2}",
  "vpsubusb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1205[] = {
  "paddsw\t{%2, %0|%0, %2}",
  "vpaddsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1206[] = {
  "paddusw\t{%2, %0|%0, %2}",
  "vpaddusw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1207[] = {
  "psubsw\t{%2, %0|%0, %2}",
  "vpsubsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1208[] = {
  "psubusw\t{%2, %0|%0, %2}",
  "vpsubusw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1209[] = {
  "paddsw\t{%2, %0|%0, %2}",
  "vpaddsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1210[] = {
  "paddusw\t{%2, %0|%0, %2}",
  "vpaddusw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1211[] = {
  "psubsw\t{%2, %0|%0, %2}",
  "vpsubsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1212[] = {
  "psubusw\t{%2, %0|%0, %2}",
  "vpsubusw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1215[] = {
  "pmullw\t{%2, %0|%0, %2}",
  "vpmullw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1216[] = {
  "pmullw\t{%2, %0|%0, %2}",
  "vpmullw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1217[] = {
  "pmulhw\t{%2, %0|%0, %2}",
  "vpmulhw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1218[] = {
  "pmulhuw\t{%2, %0|%0, %2}",
  "vpmulhuw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1219[] = {
  "pmulhw\t{%2, %0|%0, %2}",
  "vpmulhw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1220[] = {
  "pmulhuw\t{%2, %0|%0, %2}",
  "vpmulhuw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1222[] = {
  "pmuludq\t{%2, %0|%0, %2}",
  "vpmuludq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1224[] = {
  "pmuldq\t{%2, %0|%0, %2}",
  "vpmuldq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1226[] = {
  "pmaddwd\t{%2, %0|%0, %2}",
  "vpmaddwd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1227[] = {
  "pmulld\t{%2, %0|%0, %2}",
  "vpmulld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1228[] = {
  "pmulld\t{%2, %0|%0, %2}",
  "vpmulld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1232[] = {
  "psraw\t{%2, %0|%0, %2}",
  "vpsraw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1233[] = {
  "psraw\t{%2, %0|%0, %2}",
  "vpsraw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1234[] = {
  "psrad\t{%2, %0|%0, %2}",
  "vpsrad\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1235[] = {
  "psrad\t{%2, %0|%0, %2}",
  "vpsrad\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1236[] = {
  "psllw\t{%2, %0|%0, %2}",
  "vpsllw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1237[] = {
  "psrlw\t{%2, %0|%0, %2}",
  "vpsrlw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1238[] = {
  "psllw\t{%2, %0|%0, %2}",
  "vpsllw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1239[] = {
  "psrlw\t{%2, %0|%0, %2}",
  "vpsrlw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1240[] = {
  "pslld\t{%2, %0|%0, %2}",
  "vpslld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1241[] = {
  "psrld\t{%2, %0|%0, %2}",
  "vpsrld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1242[] = {
  "pslld\t{%2, %0|%0, %2}",
  "vpslld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1243[] = {
  "psrld\t{%2, %0|%0, %2}",
  "vpsrld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1244[] = {
  "psllq\t{%2, %0|%0, %2}",
  "vpsllq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1245[] = {
  "psrlq\t{%2, %0|%0, %2}",
  "vpsrlq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1246[] = {
  "psllq\t{%2, %0|%0, %2}",
  "vpsllq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1247[] = {
  "psrlq\t{%2, %0|%0, %2}",
  "vpsrlq\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1248 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5958 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "pslldq\t{%2, %0|%0, %2}";
    case 1:
      return "vpslldq\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1249 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5958 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "pslldq\t{%2, %0|%0, %2}";
    case 1:
      return "vpslldq\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1250 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5995 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "psrldq\t{%2, %0|%0, %2}";
    case 1:
      return "vpsrldq\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1251 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5995 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "psrldq\t{%2, %0|%0, %2}";
    case 1:
      return "vpsrldq\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_1264[] = {
  "pmaxsb\t{%2, %0|%0, %2}",
  "vpmaxsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1265[] = {
  "pminsb\t{%2, %0|%0, %2}",
  "vpminsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1266[] = {
  "pmaxsd\t{%2, %0|%0, %2}",
  "vpmaxsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1267[] = {
  "pminsd\t{%2, %0|%0, %2}",
  "vpminsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1268[] = {
  "pmaxsw\t{%2, %0|%0, %2}",
  "vpmaxsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1269[] = {
  "pminsw\t{%2, %0|%0, %2}",
  "vpminsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1270[] = {
  "pmaxuw\t{%2, %0|%0, %2}",
  "vpmaxuw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1271[] = {
  "pminuw\t{%2, %0|%0, %2}",
  "vpminuw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1272[] = {
  "pmaxud\t{%2, %0|%0, %2}",
  "vpmaxud\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1273[] = {
  "pminud\t{%2, %0|%0, %2}",
  "vpminud\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1274[] = {
  "pmaxub\t{%2, %0|%0, %2}",
  "vpmaxub\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1275[] = {
  "pminub\t{%2, %0|%0, %2}",
  "vpminub\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1280[] = {
  "pcmpeqq\t{%2, %0|%0, %2}",
  "vpcmpeqq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1281[] = {
  "pcmpeqb\t{%2, %0|%0, %2}",
  "vpcmpeqb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1282[] = {
  "pcmpeqw\t{%2, %0|%0, %2}",
  "vpcmpeqw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1283[] = {
  "pcmpeqd\t{%2, %0|%0, %2}",
  "vpcmpeqd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1284[] = {
  "pcmpgtq\t{%2, %0|%0, %2}",
  "vpcmpgtq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1289[] = {
  "pcmpgtb\t{%2, %0|%0, %2}",
  "vpcmpgtb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1290[] = {
  "pcmpgtw\t{%2, %0|%0, %2}",
  "vpcmpgtw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1291[] = {
  "pcmpgtd\t{%2, %0|%0, %2}",
  "vpcmpgtd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1292 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6508 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pandn";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1293 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6508 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pandn";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1294 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6508 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pandn";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1295 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6508 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pandn";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1296 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6508 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pandn";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1297 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6508 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pandn";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1298 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6508 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pandn";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1299 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6508 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pandn";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1300 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pand";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1301 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "por";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1302 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pxor";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1303 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pand";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1304 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "por";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1305 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pxor";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1306 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pand";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1307 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "por";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1308 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pxor";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1309 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pand";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1310 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "por";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1311 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pxor";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1312 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pand";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1313 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "por";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1314 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pxor";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1315 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pand";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1316 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "por";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1317 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pxor";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1318 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pand";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1319 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "por";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1320 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pxor";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1321 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pand";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1322 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "por";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1323 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6583 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pxor";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char * const output_1324[] = {
  "pandn\t{%2, %0|%0, %2}",
  "vpandn\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1325[] = {
  "pand\t{%2, %0|%0, %2}",
  "vpand\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1326[] = {
  "por\t{%2, %0|%0, %2}",
  "vpor\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1327[] = {
  "pxor\t{%2, %0|%0, %2}",
  "vpxor\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1328[] = {
  "packsswb\t{%2, %0|%0, %2}",
  "vpacksswb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1329[] = {
  "packsswb\t{%2, %0|%0, %2}",
  "vpacksswb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1330[] = {
  "packssdw\t{%2, %0|%0, %2}",
  "vpackssdw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1331[] = {
  "packssdw\t{%2, %0|%0, %2}",
  "vpackssdw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1332[] = {
  "packuswb\t{%2, %0|%0, %2}",
  "vpackuswb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1333[] = {
  "packuswb\t{%2, %0|%0, %2}",
  "vpackuswb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1335[] = {
  "punpckhbw\t{%2, %0|%0, %2}",
  "vpunpckhbw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1337[] = {
  "punpcklbw\t{%2, %0|%0, %2}",
  "vpunpcklbw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1339[] = {
  "punpckhwd\t{%2, %0|%0, %2}",
  "vpunpckhwd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1341[] = {
  "punpcklwd\t{%2, %0|%0, %2}",
  "vpunpcklwd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1343[] = {
  "punpckhdq\t{%2, %0|%0, %2}",
  "vpunpckhdq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1345[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "vpunpckldq\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1346 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7056 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));

  switch (which_alternative)
    {
    case 0:
      if (GET_MODE_SIZE (QImode) < GET_MODE_SIZE (SImode))
	return "pinsrb\t{%3, %k2, %0|%0, %k2, %3}";
      /* FALLTHRU */
    case 1:
      return "pinsrb\t{%3, %2, %0|%0, %2, %3}";
    case 2:
      if (GET_MODE_SIZE (QImode) < GET_MODE_SIZE (SImode))
	return "vpinsrb\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
      /* FALLTHRU */
    case 3:
      return "vpinsrb\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1347 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7056 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));

  switch (which_alternative)
    {
    case 0:
      if (GET_MODE_SIZE (HImode) < GET_MODE_SIZE (SImode))
	return "pinsrw\t{%3, %k2, %0|%0, %k2, %3}";
      /* FALLTHRU */
    case 1:
      return "pinsrw\t{%3, %2, %0|%0, %2, %3}";
    case 2:
      if (GET_MODE_SIZE (HImode) < GET_MODE_SIZE (SImode))
	return "vpinsrw\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
      /* FALLTHRU */
    case 3:
      return "vpinsrw\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1348 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7056 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));

  switch (which_alternative)
    {
    case 0:
      if (GET_MODE_SIZE (SImode) < GET_MODE_SIZE (SImode))
	return "pinsrd\t{%3, %k2, %0|%0, %k2, %3}";
      /* FALLTHRU */
    case 1:
      return "pinsrd\t{%3, %2, %0|%0, %2, %3}";
    case 2:
      if (GET_MODE_SIZE (SImode) < GET_MODE_SIZE (SImode))
	return "vpinsrd\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
      /* FALLTHRU */
    case 3:
      return "vpinsrd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1349 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7056 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));

  switch (which_alternative)
    {
    case 0:
      if (GET_MODE_SIZE (DImode) < GET_MODE_SIZE (SImode))
	return "pinsrq\t{%3, %k2, %0|%0, %k2, %3}";
      /* FALLTHRU */
    case 1:
      return "pinsrq\t{%3, %2, %0|%0, %2, %3}";
    case 2:
      if (GET_MODE_SIZE (DImode) < GET_MODE_SIZE (SImode))
	return "vpinsrq\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
      /* FALLTHRU */
    case 3:
      return "vpinsrq\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1355 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7233 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "vpshufd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1356 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7272 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshufd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1357 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7332 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "vpshuflw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1358 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7375 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshuflw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1359 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7436 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= (INTVAL (operands[2]) - 4) << 0;
  mask |= (INTVAL (operands[3]) - 4) << 2;
  mask |= (INTVAL (operands[4]) - 4) << 4;
  mask |= (INTVAL (operands[5]) - 4) << 6;
  operands[2] = GEN_INT (mask);

  return "vpshufhw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1360 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7479 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= (INTVAL (operands[2]) - 4) << 0;
  mask |= (INTVAL (operands[3]) - 4) << 2;
  mask |= (INTVAL (operands[4]) - 4) << 4;
  mask |= (INTVAL (operands[5]) - 4) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshufhw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char * const output_1361[] = {
  "%vmovd\t{%2, %0|%0, %2}",
  "%vmovd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1365[] = {
  "%vmovhps\t{%1, %0|%0, %1}",
  "psrldq\t{$8, %0|%0, 8}",
  "vpsrldq\t{$8, %1, %0|%0, %1, 8}",
  "%vmovq\t{%H1, %0|%0, %H1}",
  "movhlps\t{%1, %0|%0, %1}",
  "movlps\t{%H1, %0|%0, %H1}",
};

static const char * const output_1366[] = {
  "%vpshufd\t{$0, %1, %0|%0, %1, 0}",
  "vbroadcastss\t{%1, %0|%0, %1}",
  "shufps\t{$0, %0, %0|%0, %0, 0}",
};

static const char * const output_1367[] = {
  "punpcklqdq\t%0, %0",
  "vpunpcklqdq\t{%d1, %0|%0, %d1}",
  "%vmovddup\t{%1, %0|%0, %1}",
  "movlhps\t%0, %0",
};

static const char * const output_1368[] = {
  "pinsrd\t{$1, %2, %0|%0, %2, 1}",
  "vpinsrd\t{$1, %2, %1, %0|%0, %1, %2, 1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "vpunpckldq\t{%2, %1, %0|%0, %1, %2}",
  "%vmovd\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1369[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1370[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "movss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1371[] = {
  "punpcklqdq\t{%2, %0|%0, %2}",
  "vpunpcklqdq\t{%2, %1, %0|%0, %1, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1372[] = {
  "%vmovq\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "punpcklqdq\t{%2, %0|%0, %2}",
  "vpunpcklqdq\t{%2, %1, %0|%0, %1, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1374[] = {
  "pavgb\t{%2, %0|%0, %2}",
  "vpavgb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1376[] = {
  "pavgw\t{%2, %0|%0, %2}",
  "vpavgw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1377[] = {
  "psadbw\t{%2, %0|%0, %2}",
  "vpsadbw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1378[] = {
  "psadbw\t{%2, %0|%0, %2}",
  "vpsadbw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1392[] = {
  "phaddw\t{%2, %0|%0, %2}",
  "vphaddw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1395[] = {
  "phaddd\t{%2, %0|%0, %2}",
  "vphaddd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1398[] = {
  "phaddsw\t{%2, %0|%0, %2}",
  "vphaddsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1401[] = {
  "phsubw\t{%2, %0|%0, %2}",
  "vphsubw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1404[] = {
  "phsubd\t{%2, %0|%0, %2}",
  "vphsubd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1407[] = {
  "phsubsw\t{%2, %0|%0, %2}",
  "vphsubsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1410[] = {
  "pmaddubsw\t{%2, %0|%0, %2}",
  "vpmaddubsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1413[] = {
  "pmulhrsw\t{%2, %0|%0, %2}",
  "vpmulhrsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1415[] = {
  "pshufb\t{%2, %0|%0, %2}",
  "vpshufb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1416[] = {
  "pshufb\t{%2, %0|%0, %2}",
  "vpshufb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1418[] = {
  "psignb\t{%2, %0|%0, %2}",
  "vpsignb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1419[] = {
  "psignb\t{%2, %0|%0, %2}",
  "vpsignb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1420[] = {
  "psignw\t{%2, %0|%0, %2}",
  "vpsignw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1421[] = {
  "psignw\t{%2, %0|%0, %2}",
  "vpsignw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1422[] = {
  "psignd\t{%2, %0|%0, %2}",
  "vpsignd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1423[] = {
  "psignd\t{%2, %0|%0, %2}",
  "vpsignd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1427 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9370 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "palignr\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vpalignr\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1428 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9370 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "palignr\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vpalignr\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1429 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9399 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);
  return "palignr\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_1447[] = {
  "blendps\t{%3, %2, %0|%0, %2, %3}",
  "vblendps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1448[] = {
  "blendps\t{%3, %2, %0|%0, %2, %3}",
  "vblendps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1449[] = {
  "blendpd\t{%3, %2, %0|%0, %2, %3}",
  "vblendpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1450[] = {
  "blendpd\t{%3, %2, %0|%0, %2, %3}",
  "vblendpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1451[] = {
  "blendvps\t{%3, %2, %0|%0, %2, %3}",
  "vblendvps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1452[] = {
  "blendvps\t{%3, %2, %0|%0, %2, %3}",
  "vblendvps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1453[] = {
  "blendvpd\t{%3, %2, %0|%0, %2, %3}",
  "vblendvpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1454[] = {
  "blendvpd\t{%3, %2, %0|%0, %2, %3}",
  "vblendvpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1455[] = {
  "dpps\t{%3, %2, %0|%0, %2, %3}",
  "vdpps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1456[] = {
  "dpps\t{%3, %2, %0|%0, %2, %3}",
  "vdpps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1457[] = {
  "dppd\t{%3, %2, %0|%0, %2, %3}",
  "vdppd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1458[] = {
  "dppd\t{%3, %2, %0|%0, %2, %3}",
  "vdppd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1461[] = {
  "mpsadbw\t{%3, %2, %0|%0, %2, %3}",
  "vmpsadbw\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1462[] = {
  "mpsadbw\t{%3, %2, %0|%0, %2, %3}",
  "vmpsadbw\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1464[] = {
  "packusdw\t{%2, %0|%0, %2}",
  "vpackusdw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1465[] = {
  "pblendvb\t{%3, %2, %0|%0, %2, %3}",
  "vpblendvb\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1466[] = {
  "pblendvb\t{%3, %2, %0|%0, %2, %3}",
  "vpblendvb\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1467[] = {
  "pblendw\t{%3, %2, %0|%0, %2, %3}",
  "vpblendw\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char *
output_1468 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9689 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) & 0xff);
  return "vpblendw\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char * const output_1506[] = {
  "roundss\t{%3, %2, %0|%0, %2, %3}",
  "vroundss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1507[] = {
  "roundsd\t{%3, %2, %0|%0, %2, %3}",
  "vroundsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1511[] = {
  "%vpcmpestrm\t{%6, %4, %2|%2, %4, %6}",
  "%vpcmpestrm\t{%6, %4, %2|%2, %4, %6}",
  "%vpcmpestri\t{%6, %4, %2|%2, %4, %6}",
  "%vpcmpestri\t{%6, %4, %2|%2, %4, %6}",
};

static const char * const output_1515[] = {
  "%vpcmpistrm\t{%4, %3, %2|%2, %3, %4}",
  "%vpcmpistrm\t{%4, %3, %2|%2, %3, %4}",
  "%vpcmpistri\t{%4, %3, %2|%2, %3, %4}",
  "%vpcmpistri\t{%4, %3, %2|%2, %3, %4}",
};

static const char *
output_1565 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11317 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT ((16 * 8) - INTVAL (operands[2]));
  return "vprotb\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_1566 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11317 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT ((8 * 8) - INTVAL (operands[2]));
  return "vprotw\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_1567 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11317 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT ((4 * 8) - INTVAL (operands[2]));
  return "vprotd\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_1568 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11317 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT ((2 * 8) - INTVAL (operands[2]));
  return "vprotq\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_1601 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11689 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  return ((INTVAL (operands[3]) != 0)
	  ? "vpcomtrueb\t{%2, %1, %0|%0, %1, %2}"
	  : "vpcomfalseb\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char *
output_1602 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11689 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  return ((INTVAL (operands[3]) != 0)
	  ? "vpcomtruew\t{%2, %1, %0|%0, %1, %2}"
	  : "vpcomfalsew\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char *
output_1603 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11689 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  return ((INTVAL (operands[3]) != 0)
	  ? "vpcomtrued\t{%2, %1, %0|%0, %1, %2}"
	  : "vpcomfalsed\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char *
output_1604 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11689 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  return ((INTVAL (operands[3]) != 0)
	  ? "vpcomtrueq\t{%2, %1, %0|%0, %1, %2}"
	  : "vpcomfalseq\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char * const output_1609[] = {
  "aesenc\t{%2, %0|%0, %2}",
  "vaesenc\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1610[] = {
  "aesenclast\t{%2, %0|%0, %2}",
  "vaesenclast\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1611[] = {
  "aesdec\t{%2, %0|%0, %2}",
  "vaesdec\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1612[] = {
  "aesdeclast\t{%2, %0|%0, %2}",
  "vaesdeclast\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1615[] = {
  "pclmulqdq\t{%3, %2, %0|%0, %2, %3}",
  "vpclmulqdq\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char *
output_1629 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11941 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);
  return "vpermq\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char * const output_1632[] = {
  "vbroadcastss\t{%1, %0|%0, %1}",
  "#",
};

static const char * const output_1633[] = {
  "vbroadcastss\t{%1, %0|%0, %1}",
  "#",
};

static const char * const output_1634[] = {
  "vbroadcastsd\t{%1, %0|%0, %1}",
  "#",
};

static const char * const output_1635[] = {
  "vbroadcastsd\t{%1, %0|%0, %1}",
  "#",
};

static const char * const output_1640[] = {
  "vbroadcast%~128\t{%1, %0|%0, %1}",
  "vinsert%~128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2%~128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_1641[] = {
  "vbroadcast%~128\t{%1, %0|%0, %1}",
  "vinsert%~128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2%~128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_1642[] = {
  "vbroadcast%~128\t{%1, %0|%0, %1}",
  "vinsert%~128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2%~128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_1643[] = {
  "vbroadcast%~128\t{%1, %0|%0, %1}",
  "vinsert%~128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2%~128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_1644[] = {
  "vbroadcastf128\t{%1, %0|%0, %1}",
  "vinsertf128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2f128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_1645[] = {
  "vbroadcastf128\t{%1, %0|%0, %1}",
  "vinsertf128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2f128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char *
output_1646 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12045 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int elt = INTVAL (operands[3]);
  switch (which_alternative)
    {
    case 0:
    case 1:
      operands[1] = adjust_address_nv (operands[1], SFmode, elt * 4);
      return "vbroadcastss\t{%1, %0|%0, %1}";
    case 2:
      operands[2] = GEN_INT (elt * 0x55);
      return "vpermilps\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1649 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12158 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V8SFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilps\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1650 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12158 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V4SFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilps\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1651 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12158 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V4DFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilpd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1652 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12158 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V2DFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilpd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1660 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12244 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask = avx_vperm2f128_parallel (operands[3], V8SImode) - 1;
  if (mask == 0x12)
    return "vinsert%~128\t{$0, %x2, %1, %0|%0, %1, %x2, 0}";
  if (mask == 0x20)
    return "vinsert%~128\t{$1, %x2, %1, %0|%0, %1, %x2, 1}";
  operands[3] = GEN_INT (mask);
  return "vperm2%~128\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1661 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12244 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask = avx_vperm2f128_parallel (operands[3], V8SFmode) - 1;
  if (mask == 0x12)
    return "vinsertf128\t{$0, %x2, %1, %0|%0, %1, %x2, 0}";
  if (mask == 0x20)
    return "vinsertf128\t{$1, %x2, %1, %0|%0, %1, %x2, 1}";
  operands[3] = GEN_INT (mask);
  return "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1662 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12244 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  int mask = avx_vperm2f128_parallel (operands[3], V4DFmode) - 1;
  if (mask == 0x12)
    return "vinsertf128\t{$0, %x2, %1, %0|%0, %1, %x2, 0}";
  if (mask == 0x20)
    return "vinsertf128\t{$1, %x2, %1, %0|%0, %1, %x2, 1}";
  operands[3] = GEN_INT (mask);
  return "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1706 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12589 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsert%~128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1707 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12589 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsert%~128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1708 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12589 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsert%~128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1709 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12589 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsert%~128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1710 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12589 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1711 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12589 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1742 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12829 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  if (V2DImode != V2DImode)
    return "vpgatherqq\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqq\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_1743 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12829 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  if (V2DFmode != V2DFmode)
    return "vgatherqpd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqpd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_1744 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12829 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  if (V4DImode != V4DImode)
    return "vpgatherqq\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqq\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_1745 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12829 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  if (V4DFmode != V4DFmode)
    return "vgatherqpd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqpd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_1746 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12829 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  if (V4SImode != V4SImode)
    return "vpgatherqd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_1747 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12829 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  if (V4SFmode != V4SFmode)
    return "vgatherqps\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqps\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_1748 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12829 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  if (V8SImode != V4SImode)
    return "vpgatherqd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_1749 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12829 "../../gcc-4.7.0/gcc/config/i386/sse.md"
{
  if (V8SFmode != V4SFmode)
    return "vgatherqps\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqps\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_1761 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 299 "../../gcc-4.7.0/gcc/config/i386/sync.md"
{
  gcc_assert (find_regno_note (insn, REG_DEAD, FIRST_STACK_REG) != NULL_RTX);

  return "fistp%Z0\t%0";
}
}

static const char *
output_1770 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 503 "../../gcc-4.7.0/gcc/config/i386/sync.md"
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} inc{b}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;} dec{b}\t%0";
    }

  if (x86_maybe_negate_const_int (&operands[1], QImode))
    return "lock{%;} sub{b}\t{%1, %0|%0, %1}";

  return "lock{%;} add{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1771 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 503 "../../gcc-4.7.0/gcc/config/i386/sync.md"
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} inc{w}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;} dec{w}\t%0";
    }

  if (x86_maybe_negate_const_int (&operands[1], HImode))
    return "lock{%;} sub{w}\t{%1, %0|%0, %1}";

  return "lock{%;} add{w}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1772 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 503 "../../gcc-4.7.0/gcc/config/i386/sync.md"
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} inc{l}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;} dec{l}\t%0";
    }

  if (x86_maybe_negate_const_int (&operands[1], SImode))
    return "lock{%;} sub{l}\t{%1, %0|%0, %1}";

  return "lock{%;} add{l}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1776 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 540 "../../gcc-4.7.0/gcc/config/i386/sync.md"
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} inc{b}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;} dec{b}\t%0";
    }

  if (x86_maybe_negate_const_int (&operands[1], QImode))
    return "lock{%;} sub{b}\t{%1, %0|%0, %1}";

  return "lock{%;} add{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1777 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 540 "../../gcc-4.7.0/gcc/config/i386/sync.md"
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} inc{w}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;} dec{w}\t%0";
    }

  if (x86_maybe_negate_const_int (&operands[1], HImode))
    return "lock{%;} sub{w}\t{%1, %0|%0, %1}";

  return "lock{%;} add{w}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1778 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 540 "../../gcc-4.7.0/gcc/config/i386/sync.md"
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} inc{l}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;} dec{l}\t%0";
    }

  if (x86_maybe_negate_const_int (&operands[1], SImode))
    return "lock{%;} sub{l}\t{%1, %0|%0, %1}";

  return "lock{%;} add{l}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1779 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 564 "../../gcc-4.7.0/gcc/config/i386/sync.md"
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} dec{b}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;} inc{b}\t%0";
    }

  if (x86_maybe_negate_const_int (&operands[1], QImode))
    return "lock{%;} add{b}\t{%1, %0|%0, %1}";

  return "lock{%;} sub{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1780 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 564 "../../gcc-4.7.0/gcc/config/i386/sync.md"
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} dec{w}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;} inc{w}\t%0";
    }

  if (x86_maybe_negate_const_int (&operands[1], HImode))
    return "lock{%;} add{w}\t{%1, %0|%0, %1}";

  return "lock{%;} sub{w}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1781 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 564 "../../gcc-4.7.0/gcc/config/i386/sync.md"
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} dec{l}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;} inc{l}\t%0";
    }

  if (x86_maybe_negate_const_int (&operands[1], SImode))
    return "lock{%;} add{l}\t{%1, %0|%0, %1}";

  return "lock{%;} sub{l}\t{%1, %0|%0, %1}";
}
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "q,?mq",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,?mr",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,?mr",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,?mr",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "Qmn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,x",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "f,xm",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "riF*o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "ri*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=X",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_no_elim_operand,
    "rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "=X",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_no_elim_operand,
    "rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "=<",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "re*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    pop_operand,
    ">",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,xm,x",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,xm,x",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,*y,m*y,*y,*x,m,*x,*x,*x,m,*x,*x,?*x,?*Ym",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "riFo,riF,C,*y,m,C,*x,*x,m,C,*x,*x,m,*Ym,*x",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,*y,*y,?rm,?*y,*x,*x,?r,m,?*Yi,*x",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "g,re,C,*y,*y,rm,C,*x,*Yi,*x,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,rn,rm,rn",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=q,q,q,r,r,?r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "q,qn,qm,q,rn,qm,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+q",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+q",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "+rm,r",
    HImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "+q",
    QImode,
    1,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    HImode,
    1,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=R",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=R",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Qm,?r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Qm,?R",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "Qmn",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Q",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "=<,<,<",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "x,Fo,*r",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<,<",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "f,ro",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<,<",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "f,*rFo",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<,<,<",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "f,Yd*rFo,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<,<,<",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "f,rFm,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,x,?*r,!o",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "xm,x,C,*roF,F*r",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,?Yx*r,!o",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "fm,f,G,Yx*roF,FYx*r",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,?Yd*r,!o,x,x,x,m,*x,*x,*x,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "fm,f,G,Yd*roF,FYd*r,C,x,m,x,C,*x,m,*x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,?r,?m,x,x,x,m,!*y,!m,!*y,?Yi,?r,!*Ym,!r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "fm,f,G,rmF,Fr,C,x,m,x,m,*y,*y,r,Yi,r,*Ym",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "+f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "+f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "+f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "+f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "+f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,?r,?o,?*Ym,?*y,?*Yi,*x",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm,r,r,m,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,?&q",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,?&q",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=*A,r,?r,?*o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,X,X,&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=*a,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "*0,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=*a,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "*0,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,f,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=fm,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "f,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=fm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,?f,?x,?*r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "f,xm,f,f,f",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,X,m,m,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?x,?*r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "f,f,f,f",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=m,?f,?x,?*r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m,m,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?x,?*r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m,m,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&x,&x",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x,&x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "m,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&x,&x",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x,&x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "m,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f,x,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r,r,m,!x",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m,m,X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f,x,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r,r,m,!x",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m,m,X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m,m,X",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m,m,X",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,!x",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m,X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,!x",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m,X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m,X",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m,X",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,x",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,x",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,x",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "ronF,rnF",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "roe,re",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    lea_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re,0,le",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re,0,le",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r,Yp",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r,Yp",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm,0,ln",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,q,r,r,Yp",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,q,0,r,Yp",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm,0,rn,0,ln",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rmn,rn",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rmn",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=qm",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=rm",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=rm",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "Qmn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "%0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const248_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "ri",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const248_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "ronF,rnF",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "roe,re",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "K,e,mr",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "K,n,mr",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%d",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=A,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,d",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%a",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=1",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "1",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,q,qm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "n,n,qn,n",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,q,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "n,n,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "n,n,rn",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "e,e,re",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,qm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm,L",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,qm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm,L",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qmn,rn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qmn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm,*r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn,n",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "+q,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "qmn,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=q,m,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn,rn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "+q,m",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "+q,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "=q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "qmn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=ro",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=ro",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,f,!r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x,0,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,0,X,X",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,f,!r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x,0,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,0,X,X",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,!r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xm,0,X",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,!r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xm,0,X",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,!r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,!r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,!r",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,0",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    TFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xmC",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xmC",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xmC",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1,1,x,1,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1,1,x,1,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    TFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1,1,x,1,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_pm1_operand,
    "n,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "Jc,Jc",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "+r*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "Ic",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "c",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "c",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,l,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,M,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,l,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cJ,M,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,Yp",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,l",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,M",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=qm,r,Yp",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0,l",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,cI,M",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "+qm",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_1_to_63_operand,
    "J",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_63_operand,
    "J",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "Jc",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=*d,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "*a,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cJ,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cJ,J",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_nonmemory_operand,
    "rN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_nonmemory_operand,
    "rN",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=q",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "+qm",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a,a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a,a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    indirect_branch_operand,
    "rw",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "lzw",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    sibcall_insn_operand,
    "Uz",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "lzm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "lzm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    sibcall_insn_operand,
    "Uz",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    sibcall_insn_operand,
    "Uz",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "lzm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    sibcall_insn_operand,
    "Uz",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    BLKmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&q",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,m,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+Q,r",
    HImode,
    1,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=Q",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&Q",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=Q",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "z",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "z",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "z",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_modbase_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,xm,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,fm,0,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,fm,0,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,fm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,fm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "F",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "F",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "F",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "u",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "u",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r,0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f,&r,&r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f,r,r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_nonmemory_operand,
    "re,le",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=!?y,!y,!?y,m,!y,*x,*x,*x,m,*x,*x,*x,m,r,m",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,!y,m,!?y,*x,!y,C,*xm,*x,C,*x,m,*x,irm,r",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!y,!?y,m,!y,*x,*x,*x,m,*x,*x,*x,m,r,m",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,!y,m,!?y,*x,!y,C,*xm,*x,C,*x,m,*x,irm,r",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!y,!?y,m,!y,*x,*x,*x,m,*x,*x,*x,m,r,m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,!y,m,!?y,*x,!y,C,*xm,*x,C,*x,m,*x,irm,r",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!y,!?y,m,!y,*x,*x,*x,m,*x,*x,*x,m,r,m",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,!y,m,!?y,*x,!y,C,*xm,*x,C,*x,m,*x,irm,r",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!y,!?y,m,!y,*x,*x,*x,*x,m,r,m",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,!y,m,!?y,*x,!y,C,*x,m,*x,irm,r",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y,y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym,0",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,rm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "ym,C",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,y,m,f,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,ym,y,m,m",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=y,x,y,x,f,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0,o,o,o,o",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "yN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "yN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "yN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "ym,C",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,y,m,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,ym,y,m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=y,x,x,x,y,x,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0,x,0,o,o,o",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    emms_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V2TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V1TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V1TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=?x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&x,X",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,xm,x,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,xm,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V8SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,xm,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V4SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,xm,x,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,xm,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V4DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,xm,x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V2DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V8SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V2DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V8SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V2DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,0",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,0",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "y,m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0,x,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o,o,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,o",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0,x,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m,x,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,o",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0,x,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "m,m,x,x,x",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0,x,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,m,x,x",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x,*y,*y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x,0,x,m,0,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "x,x,m,m,C,*ym,C",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,m,0,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x,0,x",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,x,m,m",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,x,x,x,m,m,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,C,C,C,0,x,0,x,0,0,0",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "x,m,*r,m,x,x,*rm,*rm,!x,!*re,!*fF",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,x,x,x,m,m,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,C,C,C,0,x,0,x,0,0,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "x,m,*r,m,x,x,*rm,*rm,!x,!*re,!*fF",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m,f,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,m,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,x,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "n,n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,*r,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "o,o,o",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "n,n,n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,o,o,o,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,1,0,x,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,1",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,o",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,m,0,x,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,1,m,m,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_5_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_6_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=m,x,x,x,*f,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,0,x,o,o,o",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x,*f,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m,m,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,o,o,o",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0,x,0,0,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "m,m,x,x,x,*f,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,x,x,x,m,m,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,0,x,0,x,x,o,o,0,0,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "m,m,m,x,x,0,0,x,x,*f,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,m,x,x,x,o",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0,x,0,x,o,o,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m,m,x,0,0,x,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x,x,x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x,m,0,x,m,0,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "x,x,1,m,m,C,x,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "xN,xN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "xN,xN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "xN,xN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "xN,xN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "xN,xN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "xN,xN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2TImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_mul_8_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V1TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V1TImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_mul_8_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,Yi,x,x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "C,C,C,0,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,r,m,x,x",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=xm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,Yi",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "o",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=xm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=m,x,x,x,x,x",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,0,x,o,x,o",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x,m,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x,*y,*y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x,0,x,rm,0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "rm,rm,x,x,C,*ym,C",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,rm,0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,m,0,*rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x,x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x,0,0,x",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,x,x,m,m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,?x,x,x,x,x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,*y,0,x,0,0,x",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,C,x,x,x,m,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    address_operand,
    "p",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2TImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2TImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_not_xmm0_operand_maybe_avx,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_not_xmm0_operand_maybe_avx,
    "0,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimm_not_xmm0_operand_maybe_avx,
    "xm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yz,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_not_xmm0_operand_maybe_avx,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_not_xmm0_operand_maybe_avx,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimm_not_xmm0_operand_maybe_avx,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yz,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_not_xmm0_operand_maybe_avx,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_not_xmm0_operand_maybe_avx,
    "0,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimm_not_xmm0_operand_maybe_avx,
    "xm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yz,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_not_xmm0_operand_maybe_avx,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_not_xmm0_operand_maybe_avx,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimm_not_xmm0_operand_maybe_avx,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yz,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_not_xmm0_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_not_xmm0_operand_maybe_avx,
    "0,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimm_not_xmm0_operand_maybe_avx,
    "xm,xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yz,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_not_xmm0_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_not_xmm0_operand_maybe_avx,
    "0,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimm_not_xmm0_operand_maybe_avx,
    "xm,xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yz,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    avx2_pblendw_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yz,Yz",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_not_xmm0_operand,
    "x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a,a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimm_not_xmm0_operand,
    "x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a,a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yz,Yz",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a,a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=Yz,Yz,X,X",
    V16QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,c,c",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "x,x,x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a,a,a,a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m,x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "d,d,d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "n,n,n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yz,Yz",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_not_xmm0_operand,
    "x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimm_not_xmm0_operand,
    "x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yz,Yz",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=Yz,Yz,X,X",
    V16QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,c,c",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "x,x,x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m,x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n,n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_63_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_int_operator,
    "",
    V16QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_int_operator,
    "",
    V8HImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_int_operator,
    "",
    V4SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_int_operator,
    "",
    V2DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_uns_operator,
    "",
    V16QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_uns_operator,
    "",
    V8HImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_uns_operator,
    "",
    V4SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_uns_operator,
    "",
    V2DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vzeroall_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?x",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?x",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,o,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    avx_vbroadcast_operand,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "C,n,n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,o,?x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    avx_vbroadcast_operand,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "C,n,n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,o,?x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    avx_vbroadcast_operand,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "C,n,n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xm,C",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xm,C",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xm,C",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xm,C",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xm,C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xm,C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "N",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "N",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "N",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,xf,xf",
    DFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m,m,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,m,?r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,xf,xf",
    DFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "q",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cmpxchg8b_pic_memory_operand,
    "+m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "SD",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=q",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=q",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "qn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "re",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    push_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    CDImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    CDImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_reg_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    any_fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    any_fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    any_fp_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "x",
    DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "x",
    DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "x",
    SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "x",
    SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    fp_register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    fp_register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    lea_address_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    lea_address_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_nonmemory_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const248_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const248_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_szext_general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    TFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    ashldi_input_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_31_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    indirect_branch_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    q_regs_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    sibcall_insn_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    sibcall_insn_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    sibcall_insn_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    sibcall_insn_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_modbase_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    tls_modbase_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
     register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
     register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_and_not_any_fp_reg_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    aligned_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    promotable_binary_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    aligned_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    aligned_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "q",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    push_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    push_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    push_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    SFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "q",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arith_or_logical_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    commutative_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    commutative_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arith_or_logical_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    plusminuslogic_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    plusminuslogic_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    plusminuslogic_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_nonmemory_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    plusminuslogic_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    plusminuslogic_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    plusminuslogic_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    plusminuslogic_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    plusminuslogic_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    plusminuslogic_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    plusminuslogic_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    1,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const359_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const359_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const359_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const359_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    zero_extended_scalar_load_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    zero_extended_scalar_load_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V1TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V8SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V4SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V4DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V2DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_mul_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_mul_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_mul_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_mul_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_not_xmm0_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimm_not_xmm0_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_not_xmm0_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimm_not_xmm0_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    avx_vbroadcast_operand,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    avx_vbroadcast_operand,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V2DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V2DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    DFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data_d insn_data[] = 
{
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:959 */
  {
    "*cmpqi_ccno_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_0 },
#else
    { 0, output_0, 0 },
#endif
    0,
    &operand_data[1],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:959 */
  {
    "*cmphi_ccno_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_1 },
#else
    { 0, output_1, 0 },
#endif
    0,
    &operand_data[3],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:959 */
  {
    "*cmpsi_ccno_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_2 },
#else
    { 0, output_2, 0 },
#endif
    0,
    &operand_data[5],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:959 */
  {
    "*cmpdi_ccno_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_3 },
#else
    { 0, output_3, 0 },
#endif
    0,
    &operand_data[7],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:971 */
  {
    "*cmpqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[9],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:971 */
  {
    "*cmphi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[11],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:971 */
  {
    "*cmpsi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[13],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:971 */
  {
    "*cmpdi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[15],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:980 */
  {
    "*cmpqi_minus_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[9],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:980 */
  {
    "*cmphi_minus_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[11],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:980 */
  {
    "*cmpsi_minus_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[13],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:980 */
  {
    "*cmpdi_minus_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[15],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:991 */
  {
    "*cmpqi_ext_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[17],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1019 */
  {
    "*cmpqi_ext_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t%h0, %h0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[18],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1044 */
  {
    "*cmpqi_ext_3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[20],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1074 */
  {
    "*cmpqi_ext_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[22],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1197 */
  {
    "*cmpfp_0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_16 },
#else
    { 0, 0, output_16 },
#endif
    0,
    &operand_data[24],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1217 */
  {
    "*cmpfp_0_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[24],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1245 */
  {
    "*cmpfp_xf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_18 },
#else
    { 0, 0, output_18 },
#endif
    0,
    &operand_data[27],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1258 */
  {
    "*cmpfp_xf_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[27],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1279 */
  {
    "*cmpfp_sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_20 },
#else
    { 0, 0, output_20 },
#endif
    0,
    &operand_data[30],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1279 */
  {
    "*cmpfp_df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_21 },
#else
    { 0, 0, output_21 },
#endif
    0,
    &operand_data[33],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1292 */
  {
    "*cmpfp_sf_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[30],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1292 */
  {
    "*cmpfp_df_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[33],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1313 */
  {
    "*cmpfp_u",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_24 },
#else
    { 0, 0, output_24 },
#endif
    0,
    &operand_data[36],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1333 */
  {
    "*cmpfp_u_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[36],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1361 */
  {
    "*cmpfp_hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_26 },
#else
    { 0, 0, output_26 },
#endif
    0,
    &operand_data[39],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1361 */
  {
    "*cmpfp_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_27 },
#else
    { 0, 0, output_27 },
#endif
    0,
    &operand_data[43],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1378 */
  {
    "*cmpfp_hi_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[39],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1378 */
  {
    "*cmpfp_si_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1408 */
  {
    "x86_fnstsw_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnstsw\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_fnstsw_1,
    &operand_data[24],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1421 */
  {
    "x86_sahf_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_31 },
#else
    { 0, 0, output_31 },
#endif
    (insn_gen_fn) gen_x86_sahf_1,
    &operand_data[47],
    1,
    1,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1443 */
  {
    "*cmpfp_i_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_32 },
#else
    { 0, 0, output_32 },
#endif
    0,
    &operand_data[48],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1472 */
  {
    "*cmpfp_i_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_33 },
#else
    { 0, 0, output_33 },
#endif
    0,
    &operand_data[50],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1495 */
  {
    "*cmpfp_i_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_34 },
#else
    { 0, 0, output_34 },
#endif
    0,
    &operand_data[37],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1516 */
  {
    "*cmpfp_iu_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_35 },
#else
    { 0, 0, output_35 },
#endif
    0,
    &operand_data[48],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1545 */
  {
    "*cmpfp_iu_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_36 },
#else
    { 0, 0, output_36 },
#endif
    0,
    &operand_data[50],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1568 */
  {
    "*cmpfp_iu_387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_37 },
#else
    { 0, 0, output_37 },
#endif
    0,
    &operand_data[37],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1591 */
  {
    "*pushdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[52],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1673 */
  {
    "*pushsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[54],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1694 */
  {
    "*pushqi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%k1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[56],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1694 */
  {
    "*pushhi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%k1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1702 */
  {
    "*pushsi2_prologue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[60],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1711 */
  {
    "*popsi1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{l}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[62],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1719 */
  {
    "*popsi1_epilogue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{l}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[62],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1772 */
  {
    "*movsi_xor",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t%k0, %k0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[64],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1782 */
  {
    "*movsi_or",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[66],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1793 */
  {
    "*movoi_internal_avx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_47 },
#else
    { 0, 0, output_47 },
#endif
    0,
    &operand_data[68],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:1876 */
  {
    "*movti_internal_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_48 },
#else
    { 0, 0, output_48 },
#endif
    0,
    &operand_data[70],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2085 */
  {
    "*movdi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_49 },
#else
    { 0, 0, output_49 },
#endif
    0,
    &operand_data[72],
    2,
    2,
    0,
    15,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2166 */
  {
    "*movsi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_50 },
#else
    { 0, 0, output_50 },
#endif
    0,
    &operand_data[74],
    2,
    2,
    0,
    12,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2247 */
  {
    "*movhi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_51 },
#else
    { 0, 0, output_51 },
#endif
    0,
    &operand_data[76],
    2,
    2,
    0,
    4,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2303 */
  {
    "*movqi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_52 },
#else
    { 0, 0, output_52 },
#endif
    0,
    &operand_data[78],
    2,
    2,
    0,
    7,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2390 */
  {
    "*swapsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[80],
    2,
    2,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2404 */
  {
    "*swapqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%k1, %k0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[82],
    2,
    2,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2404 */
  {
    "*swaphi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%k1, %k0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[84],
    2,
    2,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2420 */
  {
    "*swapqi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{b}\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[86],
    2,
    2,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2420 */
  {
    "*swaphi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{w}\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[84],
    2,
    2,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2447 */
  {
    "*movstrictqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[88],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2447 */
  {
    "*movstricthi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[90],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2457 */
  {
    "*movstrictqi_xor",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t%0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[92],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2457 */
  {
    "*movstricthi_xor",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t%0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[94],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2467 */
  {
    "*movhi_extv_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%h1, %k0|%k0, %h1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[96],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2467 */
  {
    "*movsi_extv_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%h1, %k0|%k0, %h1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[98],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2502 */
  {
    "*movqi_extv_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_64 },
#else
    { 0, 0, output_64 },
#endif
    0,
    &operand_data[100],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2528 */
  {
    "*movsi_extzv_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%h1, %k0|%k0, %h1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[98],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2564 */
  {
    "*movqi_extzv_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_66 },
#else
    { 0, 0, output_66 },
#endif
    0,
    &operand_data[102],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2607 */
  {
    "*movsi_insv_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%b1, %h0|%h0, %b1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[104],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2617 */
  {
    "*movqi_insv_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[106],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2630 */
  {
    "*pushtf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_69 },
#else
    { 0, 0, output_69 },
#endif
    0,
    &operand_data[108],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2650 */
  {
    "*pushxf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_70 },
#else
    { 0, 0, output_70 },
#endif
    0,
    &operand_data[110],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2668 */
  {
    "*pushxf_nointeger",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_71 },
#else
    { 0, 0, output_71 },
#endif
    0,
    &operand_data[112],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2705 */
  {
    "*pushdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_72 },
#else
    { 0, 0, output_72 },
#endif
    0,
    &operand_data[114],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2739 */
  {
    "*pushsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_73 },
#else
    { 0, 0, output_73 },
#endif
    0,
    &operand_data[116],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2796 */
  {
    "*movtf_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_74 },
#else
    { 0, 0, output_74 },
#endif
    0,
    &operand_data[118],
    2,
    2,
    0,
    5,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:2860 */
  {
    "*movxf_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_75 },
#else
    { 0, 0, output_75 },
#endif
    0,
    &operand_data[120],
    2,
    2,
    0,
    5,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3034 */
  {
    "*movdf_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_76 },
#else
    { 0, 0, output_76 },
#endif
    0,
    &operand_data[122],
    2,
    2,
    0,
    13,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3168 */
  {
    "*movsf_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_77 },
#else
    { 0, 0, output_77 },
#endif
    0,
    &operand_data[124],
    2,
    2,
    0,
    16,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3340 */
  {
    "swapxf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_78 },
#else
    { 0, 0, output_78 },
#endif
    (insn_gen_fn) gen_swapxf,
    &operand_data[126],
    2,
    2,
    2,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3355 */
  {
    "*swapsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_79 },
#else
    { 0, 0, output_79 },
#endif
    0,
    &operand_data[128],
    2,
    2,
    2,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3355 */
  {
    "*swapdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_80 },
#else
    { 0, 0, output_80 },
#endif
    0,
    &operand_data[130],
    2,
    2,
    2,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3409 */
  {
    "zero_extendsidi2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_81 },
#else
    { 0, output_81, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2_1,
    &operand_data[132],
    2,
    2,
    0,
    7,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3469 */
  {
    "zero_extendhisi2_and",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2_and,
    &operand_data[134],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3482 */
  {
    "*zero_extendhisi2_movzwl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{wl|x}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[136],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3497 */
  {
    "*zero_extendqihi2_and",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[138],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3497 */
  {
    "*zero_extendqisi2_and",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[140],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3523 */
  {
    "*zero_extendqihi2_movzbl_and",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[142],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3523 */
  {
    "*zero_extendqisi2_movzbl_and",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[144],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3544 */
  {
    "*zero_extendqihi2_movzbl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%1, %k0|%k0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[146],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3544 */
  {
    "*zero_extendqisi2_movzbl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%1, %k0|%k0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[148],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3589 */
  {
    "extendsidi2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendsidi2_1,
    &operand_data[150],
    2,
    3,
    0,
    4,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3681 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_91 },
#else
    { 0, 0, output_91 },
#endif
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[153],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3735 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[148],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3752 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_93 },
#else
    { 0, 0, output_93 },
#endif
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[155],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3865 */
  {
    "*extendsfdf2_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_94 },
#else
    { 0, 0, output_94 },
#endif
    0,
    &operand_data[157],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3888 */
  {
    "*extendsfdf2_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtss2sd\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[159],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3897 */
  {
    "*extendsfdf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_96 },
#else
    { 0, 0, output_96 },
#endif
    0,
    &operand_data[161],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3925 */
  {
    "*extendsfxf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_97 },
#else
    { 0, 0, output_97 },
#endif
    0,
    &operand_data[163],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:3925 */
  {
    "*extenddfxf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_98 },
#else
    { 0, 0, output_98 },
#endif
    0,
    &operand_data[165],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4014 */
  {
    "*truncdfsf_fast_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_99 },
#else
    { 0, 0, output_99 },
#endif
    0,
    &operand_data[167],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4036 */
  {
    "*truncdfsf_fast_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsd2ss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[169],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4046 */
  {
    "*truncdfsf_fast_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_101 },
#else
    { 0, 0, output_101 },
#endif
    0,
    &operand_data[171],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4055 */
  {
    "*truncdfsf_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_102 },
#else
    { 0, 0, output_102 },
#endif
    0,
    &operand_data[173],
    3,
    3,
    0,
    5,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4079 */
  {
    "*truncdfsf_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_103 },
#else
    { 0, 0, output_103 },
#endif
    0,
    &operand_data[176],
    3,
    3,
    0,
    4,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4099 */
  {
    "*truncdfsf2_i387_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_104 },
#else
    { 0, 0, output_104 },
#endif
    0,
    &operand_data[179],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4146 */
  {
    "*truncxfsf2_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_105 },
#else
    { 0, 0, output_105 },
#endif
    0,
    &operand_data[181],
    3,
    3,
    0,
    4,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4160 */
  {
    "*truncxfdf2_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_106 },
#else
    { 0, 0, output_106 },
#endif
    0,
    &operand_data[184],
    3,
    3,
    0,
    4,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4175 */
  {
    "truncxfsf2_i387_noop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_107 },
#else
    { 0, 0, output_107 },
#endif
    (insn_gen_fn) gen_truncxfsf2_i387_noop,
    &operand_data[187],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4175 */
  {
    "truncxfdf2_i387_noop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_108 },
#else
    { 0, 0, output_108 },
#endif
    (insn_gen_fn) gen_truncxfdf2_i387_noop,
    &operand_data[189],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4184 */
  {
    "*truncxfsf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_109 },
#else
    { 0, 0, output_109 },
#endif
    0,
    &operand_data[191],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4184 */
  {
    "*truncxfdf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_110 },
#else
    { 0, 0, output_110 },
#endif
    0,
    &operand_data[193],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4326 */
  {
    "*fixuns_truncsf_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[195],
    5,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4326 */
  {
    "*fixuns_truncdf_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[200],
    5,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4370 */
  {
    "fix_truncsfsi_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvttss2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi_sse,
    &operand_data[205],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4370 */
  {
    "fix_truncdfsi_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvttsd2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi_sse,
    &operand_data[207],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4411 */
  {
    "fix_trunchi_fisttp_i387_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunchi_fisttp_i387_1,
    &operand_data[209],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4411 */
  {
    "fix_truncsi_fisttp_i387_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsi_fisttp_i387_1,
    &operand_data[211],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4411 */
  {
    "fix_truncdi_fisttp_i387_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdi_fisttp_i387_1,
    &operand_data[213],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4438 */
  {
    "fix_trunchi_i387_fisttp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_118 },
#else
    { 0, 0, output_118 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387_fisttp,
    &operand_data[215],
    2,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4438 */
  {
    "fix_truncsi_i387_fisttp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_119 },
#else
    { 0, 0, output_119 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387_fisttp,
    &operand_data[218],
    2,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4438 */
  {
    "fix_truncdi_i387_fisttp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_120 },
#else
    { 0, 0, output_120 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387_fisttp,
    &operand_data[221],
    2,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4451 */
  {
    "fix_trunchi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387_fisttp_with_temp,
    &operand_data[224],
    3,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4451 */
  {
    "fix_truncsi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387_fisttp_with_temp,
    &operand_data[228],
    3,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4451 */
  {
    "fix_truncdi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387_fisttp_with_temp,
    &operand_data[232],
    3,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4489 */
  {
    "*fix_trunchi_i387_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[209],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4489 */
  {
    "*fix_truncsi_i387_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[211],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4489 */
  {
    "*fix_truncdi_i387_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[213],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4522 */
  {
    "fix_truncdi_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_127 },
#else
    { 0, 0, output_127 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387,
    &operand_data[236],
    4,
    5,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4536 */
  {
    "fix_truncdi_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387_with_temp,
    &operand_data[241],
    5,
    6,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4578 */
  {
    "fix_trunchi_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_129 },
#else
    { 0, 0, output_129 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387,
    &operand_data[247],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4578 */
  {
    "fix_truncsi_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_130 },
#else
    { 0, 0, output_130 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387,
    &operand_data[251],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4591 */
  {
    "fix_trunchi_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387_with_temp,
    &operand_data[255],
    5,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4591 */
  {
    "fix_truncsi_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387_with_temp,
    &operand_data[260],
    5,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4628 */
  {
    "x86_fnstcw_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnstcw\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_fnstcw_1,
    &operand_data[215],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4639 */
  {
    "x86_fldcw_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_fldcw_1,
    &operand_data[41],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4665 */
  {
    "*floathisf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[265],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4665 */
  {
    "*floathidf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[267],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4665 */
  {
    "*floathixf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[269],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4679 */
  {
    "*floathisf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[271],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4679 */
  {
    "*floathidf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[274],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4679 */
  {
    "*floathixf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[277],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4692 */
  {
    "*floathisf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[280],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4692 */
  {
    "*floathidf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[282],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4692 */
  {
    "*floathixf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[284],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4754 */
  {
    "*floatsisf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[286],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4754 */
  {
    "*floatsidf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[288],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4754 */
  {
    "*floatsixf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[290],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4754 */
  {
    "*floatdisf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[292],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4754 */
  {
    "*floatdidf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[294],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4754 */
  {
    "*floatdixf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[296],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4791 */
  {
    "*floatsisf2_vector_mixed_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[298],
    3,
    3,
    0,
    5,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4791 */
  {
    "*floatsidf2_vector_mixed_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[301],
    3,
    3,
    0,
    5,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4807 */
  {
    "*floatsisf2_vector_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_152 },
#else
    { 0, output_152, 0 },
#endif
    0,
    &operand_data[304],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4807 */
  {
    "*floatsidf2_vector_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_153 },
#else
    { 0, output_153, 0 },
#endif
    0,
    &operand_data[306],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4823 */
  {
    "*floatsisf2_mixed_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[308],
    3,
    3,
    0,
    4,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4823 */
  {
    "*floatsidf2_mixed_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[311],
    3,
    3,
    0,
    4,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4866 */
  {
    "*floatsisf2_mixed_interunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_156 },
#else
    { 0, output_156, 0 },
#endif
    0,
    &operand_data[314],
    2,
    2,
    0,
    3,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4866 */
  {
    "*floatsidf2_mixed_interunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_157 },
#else
    { 0, output_157, 0 },
#endif
    0,
    &operand_data[316],
    2,
    2,
    0,
    3,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4892 */
  {
    "*floatsisf2_mixed_nointerunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_158 },
#else
    { 0, output_158, 0 },
#endif
    0,
    &operand_data[304],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4892 */
  {
    "*floatsidf2_mixed_nointerunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_159 },
#else
    { 0, output_159, 0 },
#endif
    0,
    &operand_data[306],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4916 */
  {
    "*floatsisf2_vector_sse_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[318],
    3,
    3,
    0,
    3,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4916 */
  {
    "*floatsidf2_vector_sse_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[321],
    3,
    3,
    0,
    3,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4931 */
  {
    "*floatsisf2_vector_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[324],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:4931 */
  {
    "*floatsidf2_vector_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[326],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5082 */
  {
    "*floatsisf2_sse_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[328],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5082 */
  {
    "*floatsidf2_sse_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[331],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5097 */
  {
    "*floatsisf2_sse_interunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[328],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5097 */
  {
    "*floatsidf2_sse_interunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[331],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5132 */
  {
    "*floatsisf2_sse_nointerunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[324],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5132 */
  {
    "*floatsidf2_sse_nointerunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[326],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5180 */
  {
    "*floatsisf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_170 },
#else
    { 0, output_170, 0 },
#endif
    0,
    &operand_data[334],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5180 */
  {
    "*floatsidf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_171 },
#else
    { 0, output_171, 0 },
#endif
    0,
    &operand_data[337],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5180 */
  {
    "*floatsixf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_172 },
#else
    { 0, output_172, 0 },
#endif
    0,
    &operand_data[340],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5180 */
  {
    "*floatdisf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_173 },
#else
    { 0, output_173, 0 },
#endif
    0,
    &operand_data[343],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5180 */
  {
    "*floatdidf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_174 },
#else
    { 0, output_174, 0 },
#endif
    0,
    &operand_data[346],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5180 */
  {
    "*floatdixf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_175 },
#else
    { 0, output_175, 0 },
#endif
    0,
    &operand_data[349],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5195 */
  {
    "*floatsisf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[352],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5195 */
  {
    "*floatsidf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[354],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5195 */
  {
    "*floatsixf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[356],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5195 */
  {
    "*floatdisf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[358],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5195 */
  {
    "*floatdidf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[360],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5195 */
  {
    "*floatdixf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[362],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5228 */
  {
    "floatdisf2_i387_with_xmm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdisf2_i387_with_xmm,
    &operand_data[364],
    3,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5228 */
  {
    "floatdidf2_i387_with_xmm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdidf2_i387_with_xmm,
    &operand_data[369],
    3,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5228 */
  {
    "floatdixf2_i387_with_xmm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdixf2_i387_with_xmm,
    &operand_data[374],
    3,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5287 */
  {
    "*floatunssisf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[379],
    3,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5287 */
  {
    "*floatunssidf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[383],
    3,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5287 */
  {
    "*floatunssixf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[387],
    3,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5387 */
  {
    "*adddi3_doubleword",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[391],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5387 */
  {
    "*addti3_doubleword",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[394],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5410 */
  {
    "*addsi3_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[397],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5410 */
  {
    "*adddi3_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[400],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5423 */
  {
    "addqi3_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addqi3_cc,
    &operand_data[403],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5450 */
  {
    "*leasi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a1, %0|%0, %a1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[406],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5502 */
  {
    "*addsi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_194 },
#else
    { 0, 0, output_194 },
#endif
    0,
    &operand_data[408],
    3,
    3,
    0,
    4,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5502 */
  {
    "*adddi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_195 },
#else
    { 0, 0, output_195 },
#endif
    0,
    &operand_data[411],
    3,
    3,
    0,
    4,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5612 */
  {
    "*addhi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_196 },
#else
    { 0, 0, output_196 },
#endif
    0,
    &operand_data[414],
    3,
    3,
    0,
    4,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5665 */
  {
    "*addqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_197 },
#else
    { 0, 0, output_197 },
#endif
    0,
    &operand_data[417],
    3,
    3,
    0,
    6,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5726 */
  {
    "*addqi_1_slp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_198 },
#else
    { 0, 0, output_198 },
#endif
    0,
    &operand_data[420],
    2,
    2,
    1,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5810 */
  {
    "*addqi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_199 },
#else
    { 0, 0, output_199 },
#endif
    0,
    &operand_data[422],
    3,
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5810 */
  {
    "*addhi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_200 },
#else
    { 0, 0, output_200 },
#endif
    0,
    &operand_data[425],
    3,
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5810 */
  {
    "*addsi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_201 },
#else
    { 0, 0, output_201 },
#endif
    0,
    &operand_data[428],
    3,
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5810 */
  {
    "*adddi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_202 },
#else
    { 0, 0, output_202 },
#endif
    0,
    &operand_data[431],
    3,
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5892 */
  {
    "*addqi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_203 },
#else
    { 0, 0, output_203 },
#endif
    0,
    &operand_data[434],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5892 */
  {
    "*addhi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_204 },
#else
    { 0, 0, output_204 },
#endif
    0,
    &operand_data[437],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5892 */
  {
    "*addsi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_205 },
#else
    { 0, 0, output_205 },
#endif
    0,
    &operand_data[440],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:5892 */
  {
    "*adddi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_206 },
#else
    { 0, 0, output_206 },
#endif
    0,
    &operand_data[443],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6022 */
  {
    "*addqi_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_207 },
#else
    { 0, 0, output_207 },
#endif
    0,
    &operand_data[446],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6022 */
  {
    "*addhi_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_208 },
#else
    { 0, 0, output_208 },
#endif
    0,
    &operand_data[449],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6022 */
  {
    "*addsi_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_209 },
#else
    { 0, 0, output_209 },
#endif
    0,
    &operand_data[452],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6059 */
  {
    "*addqi_5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_210 },
#else
    { 0, 0, output_210 },
#endif
    0,
    &operand_data[434],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6059 */
  {
    "*addhi_5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_211 },
#else
    { 0, 0, output_211 },
#endif
    0,
    &operand_data[437],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6059 */
  {
    "*addsi_5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_212 },
#else
    { 0, 0, output_212 },
#endif
    0,
    &operand_data[440],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6059 */
  {
    "*adddi_5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_213 },
#else
    { 0, 0, output_213 },
#endif
    0,
    &operand_data[443],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6134 */
  {
    "addqi_ext_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_214 },
#else
    { 0, 0, output_214 },
#endif
    (insn_gen_fn) gen_addqi_ext_1,
    &operand_data[455],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6169 */
  {
    "*addqi_ext_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[458],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6191 */
  {
    "*lea_general_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[461],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6223 */
  {
    "*lea_general_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[465],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6253 */
  {
    "*lea_general_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[469],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6288 */
  {
    "*lea_general_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[474],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6288 */
  {
    "*lea_general_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[474],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6339 */
  {
    "*subdi3_doubleword",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[478],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6339 */
  {
    "*subti3_doubleword",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[481],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6361 */
  {
    "*subqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[484],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6361 */
  {
    "*subhi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[487],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6361 */
  {
    "*subsi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[490],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6361 */
  {
    "*subdi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[493],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6383 */
  {
    "*subqi_1_slp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[420],
    2,
    2,
    1,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6394 */
  {
    "*subqi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[484],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6394 */
  {
    "*subhi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[487],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6394 */
  {
    "*subsi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[490],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6394 */
  {
    "*subdi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[493],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6425 */
  {
    "*subqi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[484],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6425 */
  {
    "*subhi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[487],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6425 */
  {
    "*subsi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[490],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6425 */
  {
    "*subdi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[493],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6465 */
  {
    "*addqi3_carry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[496],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6465 */
  {
    "*subqi3_carry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[500],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6465 */
  {
    "*addhi3_carry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[504],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6465 */
  {
    "*subhi3_carry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[508],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6465 */
  {
    "*addsi3_carry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[512],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6465 */
  {
    "*subsi3_carry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[516],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6465 */
  {
    "*adddi3_carry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[520],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6465 */
  {
    "*subdi3_carry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[524],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6512 */
  {
    "*addqi3_cconly_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[434],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6512 */
  {
    "*addhi3_cconly_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[437],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6512 */
  {
    "*addsi3_cconly_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[440],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6525 */
  {
    "*subqi3_cconly_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[9],
    2,
    2,
    1,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6525 */
  {
    "*subhi3_cconly_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[11],
    2,
    2,
    1,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6525 */
  {
    "*subsi3_cconly_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[13],
    2,
    2,
    1,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6537 */
  {
    "*addqi3_cc_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[403],
    3,
    3,
    3,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6537 */
  {
    "*subqi3_cc_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[484],
    3,
    3,
    3,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6537 */
  {
    "*addhi3_cc_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[504],
    3,
    3,
    3,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6537 */
  {
    "*subhi3_cc_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[487],
    3,
    3,
    3,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6537 */
  {
    "*addsi3_cc_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[397],
    3,
    3,
    3,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6537 */
  {
    "*subsi3_cc_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[490],
    3,
    3,
    3,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6537 */
  {
    "*adddi3_cc_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[400],
    3,
    3,
    3,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6537 */
  {
    "*subdi3_cc_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[493],
    3,
    3,
    3,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6609 */
  {
    "*mulsi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_258 },
#else
    { 0, output_258, 0 },
#endif
    0,
    &operand_data[528],
    3,
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6680 */
  {
    "*mulhi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_259 },
#else
    { 0, output_259, 0 },
#endif
    0,
    &operand_data[531],
    3,
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6710 */
  {
    "*mulqi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{b}\t%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[534],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6765 */
  {
    "*bmi2_umulsidi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulx\t{%3, %0, %1|%1, %0, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[537],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6783 */
  {
    "*umulsidi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_262 },
#else
    { 0, output_262, 0 },
#endif
    0,
    &operand_data[541],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6834 */
  {
    "*mulsidi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{l}\t%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[544],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6854 */
  {
    "*mulqihi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{b}\t%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[547],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6854 */
  {
    "*umulqihi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{b}\t%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[547],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6915 */
  {
    "*smulsi3_highpart_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{l}\t%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[550],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:6915 */
  {
    "*umulsi3_highpart_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{l}\t%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[550],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7044 */
  {
    "divmodsi4_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divmodsi4_1,
    &operand_data[554],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7079 */
  {
    "*divmodhi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[558],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7079 */
  {
    "*divmodsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[554],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7114 */
  {
    "*divmodhi4_noext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "idiv{w}\t%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[562],
    5,
    5,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7114 */
  {
    "*divmodsi4_noext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "idiv{l}\t%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[567],
    5,
    5,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7170 */
  {
    "divmodhiqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "idiv{b}\t%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divmodhiqi3,
    &operand_data[572],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7217 */
  {
    "udivmodsi4_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivmodsi4_1,
    &operand_data[554],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7239 */
  {
    "*udivmodhi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[558],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7239 */
  {
    "*udivmodsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[554],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7260 */
  {
    "*udivmodhi4_noext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{w}\t%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[562],
    5,
    5,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7260 */
  {
    "*udivmodsi4_noext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{l}\t%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[567],
    5,
    5,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7311 */
  {
    "udivmodhiqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{b}\t%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivmodhiqi3,
    &operand_data[572],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7394 */
  {
    "*testqi_1_maybe_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_280 },
#else
    { 0, 0, output_280 },
#endif
    0,
    &operand_data[575],
    2,
    2,
    0,
    4,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7419 */
  {
    "*testqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[577],
    2,
    2,
    0,
    3,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7419 */
  {
    "*testhi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[579],
    2,
    2,
    0,
    3,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7419 */
  {
    "*testsi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[581],
    2,
    2,
    0,
    3,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7445 */
  {
    "*testqi_ext_0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[583],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7479 */
  {
    "*testqi_ext_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[585],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7495 */
  {
    "*testqi_ext_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[22],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7535 */
  {
    "*testqi_ext_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[587],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7719 */
  {
    "*andsi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_288 },
#else
    { 0, 0, output_288 },
#endif
    0,
    &operand_data[590],
    3,
    3,
    0,
    3,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7776 */
  {
    "*andhi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_289 },
#else
    { 0, 0, output_289 },
#endif
    0,
    &operand_data[593],
    3,
    3,
    0,
    3,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7807 */
  {
    "*andqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_290 },
#else
    { 0, output_290, 0 },
#endif
    0,
    &operand_data[596],
    3,
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7820 */
  {
    "*andqi_1_slp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[599],
    2,
    2,
    1,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7889 */
  {
    "*andqi_2_maybe_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_292 },
#else
    { 0, 0, output_292 },
#endif
    0,
    &operand_data[601],
    3,
    3,
    2,
    3,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7913 */
  {
    "*andqi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[422],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7913 */
  {
    "*andhi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[425],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7913 */
  {
    "*andsi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[428],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7942 */
  {
    "*andqi_2_slp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[604],
    2,
    2,
    3,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7960 */
  {
    "andqi_ext_0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andqi_ext_0,
    &operand_data[606],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:7980 */
  {
    "*andqi_ext_0_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[606],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8024 */
  {
    "*andqi_ext_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[609],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8042 */
  {
    "*andqi_ext_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[458],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8123 */
  {
    "*iorhi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[425],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8123 */
  {
    "*xorhi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[425],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8123 */
  {
    "*iorsi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[428],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8123 */
  {
    "*xorsi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[428],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8123 */
  {
    "*iordi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[431],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8123 */
  {
    "*xordi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[431],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8135 */
  {
    "*iorqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_307 },
#else
    { 0, output_307, 0 },
#endif
    0,
    &operand_data[612],
    3,
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8135 */
  {
    "*xorqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_308 },
#else
    { 0, output_308, 0 },
#endif
    0,
    &operand_data[612],
    3,
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8171 */
  {
    "*iorqi_1_slp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[615],
    2,
    2,
    1,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8171 */
  {
    "*xorqi_1_slp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[615],
    2,
    2,
    1,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8182 */
  {
    "*iorqi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[422],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8182 */
  {
    "*xorqi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[422],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8182 */
  {
    "*iorhi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[425],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8182 */
  {
    "*xorhi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[425],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8182 */
  {
    "*iorsi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[428],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8182 */
  {
    "*xorsi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[428],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8182 */
  {
    "*iordi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[431],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8182 */
  {
    "*xordi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[431],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8225 */
  {
    "*iorqi_2_slp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[617],
    2,
    2,
    3,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8225 */
  {
    "*xorqi_2_slp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[617],
    2,
    2,
    3,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8239 */
  {
    "*iorqi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[434],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8239 */
  {
    "*xorqi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[434],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8239 */
  {
    "*iorhi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[437],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8239 */
  {
    "*xorhi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[437],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8239 */
  {
    "*iorsi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[440],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8239 */
  {
    "*xorsi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[440],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8239 */
  {
    "*iordi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[443],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8239 */
  {
    "*xordi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[443],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8252 */
  {
    "*iorqi_ext_0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[606],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8252 */
  {
    "*xorqi_ext_0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[606],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8289 */
  {
    "*iorqi_ext_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[609],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8289 */
  {
    "*xorqi_ext_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[609],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8308 */
  {
    "*iorqi_ext_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[619],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8308 */
  {
    "*xorqi_ext_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[619],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8416 */
  {
    "*xorqi_cc_ext_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[622],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8449 */
  {
    "*negdi2_doubleword",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[625],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8449 */
  {
    "*negti2_doubleword",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[627],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8472 */
  {
    "*negqi2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{b}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[629],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8472 */
  {
    "*neghi2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{w}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[631],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8472 */
  {
    "*negsi2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{l}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[633],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8472 */
  {
    "*negdi2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{q}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[635],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8498 */
  {
    "*negqi2_cmpz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{b}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[629],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8498 */
  {
    "*neghi2_cmpz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{w}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[631],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8498 */
  {
    "*negsi2_cmpz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{l}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[633],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8498 */
  {
    "*negdi2_cmpz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{q}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[635],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8536 */
  {
    "*absnegsf2_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[637],
    4,
    4,
    0,
    4,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8536 */
  {
    "*absnegdf2_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[641],
    4,
    4,
    0,
    4,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8545 */
  {
    "*absnegsf2_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[645],
    4,
    4,
    0,
    3,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8545 */
  {
    "*absnegdf2_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[649],
    4,
    4,
    0,
    3,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8554 */
  {
    "*absnegsf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[653],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8554 */
  {
    "*absnegdf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[657],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8554 */
  {
    "*absnegxf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[661],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8569 */
  {
    "*absnegtf2_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[665],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8707 */
  {
    "*abssf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[669],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8707 */
  {
    "*negsf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[669],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8707 */
  {
    "*absdf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[671],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8707 */
  {
    "*negdf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[671],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8707 */
  {
    "*absxf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[673],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8707 */
  {
    "*negxf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[673],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8717 */
  {
    "*absextendsfdf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[675],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8717 */
  {
    "*negextendsfdf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[675],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8726 */
  {
    "*absextendsfxf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[677],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8726 */
  {
    "*negextendsfxf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[677],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8735 */
  {
    "*absextenddfxf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[679],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8735 */
  {
    "*negextenddfxf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[679],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8757 */
  {
    "copysignsf3_const",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysignsf3_const,
    &operand_data[681],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8757 */
  {
    "copysigndf3_const",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysigndf3_const,
    &operand_data[685],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8757 */
  {
    "copysigntf3_const",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysigntf3_const,
    &operand_data[689],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8771 */
  {
    "copysignsf3_var",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysignsf3_var,
    &operand_data[693],
    6,
    6,
    0,
    5,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8771 */
  {
    "copysigndf3_var",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysigndf3_var,
    &operand_data[699],
    6,
    6,
    0,
    5,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8771 */
  {
    "copysigntf3_var",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysigntf3_var,
    &operand_data[705],
    6,
    6,
    0,
    5,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8807 */
  {
    "*one_cmplhi2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "not{w}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[631],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8807 */
  {
    "*one_cmplsi2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "not{l}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[633],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8807 */
  {
    "*one_cmpldi2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "not{q}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[635],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8816 */
  {
    "*one_cmplqi2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_375 },
#else
    { 0, output_375, 0 },
#endif
    0,
    &operand_data[711],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8836 */
  {
    "*one_cmplqi2_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[629],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8836 */
  {
    "*one_cmplhi2_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[631],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8836 */
  {
    "*one_cmplsi2_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[633],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8836 */
  {
    "*one_cmpldi2_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[635],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8920 */
  {
    "*ashldi3_doubleword",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[713],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:8970 */
  {
    "x86_shld",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "shld{l}\t{%s2%1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_shld,
    &operand_data[716],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9033 */
  {
    "*ashlsi3_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[719],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9033 */
  {
    "*ashldi3_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[723],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9059 */
  {
    "*bmi2_ashlsi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "shlx\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9068 */
  {
    "*ashlsi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_385 },
#else
    { 0, 0, output_385 },
#endif
    0,
    &operand_data[730],
    3,
    3,
    0,
    3,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9068 */
  {
    "*ashldi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_386 },
#else
    { 0, 0, output_386 },
#endif
    0,
    &operand_data[733],
    3,
    3,
    0,
    3,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9198 */
  {
    "*ashlhi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_387 },
#else
    { 0, 0, output_387 },
#endif
    0,
    &operand_data[736],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9243 */
  {
    "*ashlqi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_388 },
#else
    { 0, 0, output_388 },
#endif
    0,
    &operand_data[739],
    3,
    3,
    0,
    3,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9300 */
  {
    "*ashlqi3_1_slp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_389 },
#else
    { 0, 0, output_389 },
#endif
    0,
    &operand_data[742],
    2,
    2,
    1,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9391 */
  {
    "*ashlqi3_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_390 },
#else
    { 0, 0, output_390 },
#endif
    0,
    &operand_data[744],
    3,
    3,
    2,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9391 */
  {
    "*ashlhi3_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_391 },
#else
    { 0, 0, output_391 },
#endif
    0,
    &operand_data[747],
    3,
    3,
    2,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9391 */
  {
    "*ashlsi3_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_392 },
#else
    { 0, 0, output_392 },
#endif
    0,
    &operand_data[750],
    3,
    3,
    2,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9391 */
  {
    "*ashldi3_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_393 },
#else
    { 0, 0, output_393 },
#endif
    0,
    &operand_data[753],
    3,
    3,
    2,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9487 */
  {
    "*ashlqi3_cconly",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_394 },
#else
    { 0, 0, output_394 },
#endif
    0,
    &operand_data[756],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9487 */
  {
    "*ashlhi3_cconly",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_395 },
#else
    { 0, 0, output_395 },
#endif
    0,
    &operand_data[759],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9487 */
  {
    "*ashlsi3_cconly",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_396 },
#else
    { 0, 0, output_396 },
#endif
    0,
    &operand_data[762],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9487 */
  {
    "*ashldi3_cconly",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_397 },
#else
    { 0, 0, output_397 },
#endif
    0,
    &operand_data[765],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9543 */
  {
    "*lshrsi3_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[719],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9543 */
  {
    "*ashrsi3_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[719],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9543 */
  {
    "*lshrdi3_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[723],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9543 */
  {
    "*ashrdi3_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[723],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9569 */
  {
    "*lshrdi3_doubleword",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[768],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9569 */
  {
    "*ashrdi3_doubleword",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[768],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9613 */
  {
    "x86_shrd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "shrd{l}\t{%s2%1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_shrd,
    &operand_data[716],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9647 */
  {
    "ashrsi3_cvt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_405 },
#else
    { 0, output_405, 0 },
#endif
    (insn_gen_fn) gen_ashrsi3_cvt,
    &operand_data[771],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9711 */
  {
    "*bmi2_lshrsi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "shrx\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9711 */
  {
    "*bmi2_ashrsi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sarx\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9720 */
  {
    "*lshrsi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_408 },
#else
    { 0, 0, output_408 },
#endif
    0,
    &operand_data[774],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9720 */
  {
    "*ashrsi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_409 },
#else
    { 0, 0, output_409 },
#endif
    0,
    &operand_data[774],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9720 */
  {
    "*lshrdi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_410 },
#else
    { 0, 0, output_410 },
#endif
    0,
    &operand_data[777],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9720 */
  {
    "*ashrdi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_411 },
#else
    { 0, 0, output_411 },
#endif
    0,
    &operand_data[777],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9817 */
  {
    "*lshrqi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_412 },
#else
    { 0, 0, output_412 },
#endif
    0,
    &operand_data[780],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9817 */
  {
    "*ashrqi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_413 },
#else
    { 0, 0, output_413 },
#endif
    0,
    &operand_data[780],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9817 */
  {
    "*lshrhi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_414 },
#else
    { 0, 0, output_414 },
#endif
    0,
    &operand_data[783],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9817 */
  {
    "*ashrhi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_415 },
#else
    { 0, 0, output_415 },
#endif
    0,
    &operand_data[783],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9841 */
  {
    "*lshrqi3_1_slp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_416 },
#else
    { 0, 0, output_416 },
#endif
    0,
    &operand_data[742],
    2,
    2,
    1,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9841 */
  {
    "*ashrqi3_1_slp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_417 },
#else
    { 0, 0, output_417 },
#endif
    0,
    &operand_data[742],
    2,
    2,
    1,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9870 */
  {
    "*lshrqi3_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_418 },
#else
    { 0, 0, output_418 },
#endif
    0,
    &operand_data[744],
    3,
    3,
    2,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9870 */
  {
    "*ashrqi3_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_419 },
#else
    { 0, 0, output_419 },
#endif
    0,
    &operand_data[744],
    3,
    3,
    2,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9870 */
  {
    "*lshrhi3_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_420 },
#else
    { 0, 0, output_420 },
#endif
    0,
    &operand_data[747],
    3,
    3,
    2,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9870 */
  {
    "*ashrhi3_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_421 },
#else
    { 0, 0, output_421 },
#endif
    0,
    &operand_data[747],
    3,
    3,
    2,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9870 */
  {
    "*lshrsi3_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_422 },
#else
    { 0, 0, output_422 },
#endif
    0,
    &operand_data[750],
    3,
    3,
    2,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9870 */
  {
    "*ashrsi3_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_423 },
#else
    { 0, 0, output_423 },
#endif
    0,
    &operand_data[750],
    3,
    3,
    2,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9870 */
  {
    "*lshrdi3_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_424 },
#else
    { 0, 0, output_424 },
#endif
    0,
    &operand_data[753],
    3,
    3,
    2,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9870 */
  {
    "*ashrdi3_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_425 },
#else
    { 0, 0, output_425 },
#endif
    0,
    &operand_data[753],
    3,
    3,
    2,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9934 */
  {
    "*lshrqi3_cconly",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_426 },
#else
    { 0, 0, output_426 },
#endif
    0,
    &operand_data[756],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9934 */
  {
    "*ashrqi3_cconly",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_427 },
#else
    { 0, 0, output_427 },
#endif
    0,
    &operand_data[756],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9934 */
  {
    "*lshrhi3_cconly",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_428 },
#else
    { 0, 0, output_428 },
#endif
    0,
    &operand_data[759],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9934 */
  {
    "*ashrhi3_cconly",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_429 },
#else
    { 0, 0, output_429 },
#endif
    0,
    &operand_data[759],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9934 */
  {
    "*lshrsi3_cconly",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_430 },
#else
    { 0, 0, output_430 },
#endif
    0,
    &operand_data[762],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9934 */
  {
    "*ashrsi3_cconly",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_431 },
#else
    { 0, 0, output_431 },
#endif
    0,
    &operand_data[762],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9934 */
  {
    "*lshrdi3_cconly",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_432 },
#else
    { 0, 0, output_432 },
#endif
    0,
    &operand_data[765],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:9934 */
  {
    "*ashrdi3_cconly",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_433 },
#else
    { 0, 0, output_433 },
#endif
    0,
    &operand_data[765],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10006 */
  {
    "*rotlsi3_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[719],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10006 */
  {
    "*rotrsi3_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[719],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10006 */
  {
    "*rotldi3_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[723],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10006 */
  {
    "*rotrdi3_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[723],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10035 */
  {
    "ix86_rotldi3_doubleword",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ix86_rotldi3_doubleword,
    &operand_data[786],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10063 */
  {
    "ix86_rotrdi3_doubleword",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ix86_rotrdi3_doubleword,
    &operand_data[786],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10091 */
  {
    "*bmi2_rorxsi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rorx\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[790],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10100 */
  {
    "*rotlsi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_441 },
#else
    { 0, 0, output_441 },
#endif
    0,
    &operand_data[793],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10100 */
  {
    "*rotrsi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_442 },
#else
    { 0, 0, output_442 },
#endif
    0,
    &operand_data[793],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10100 */
  {
    "*rotldi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_443 },
#else
    { 0, 0, output_443 },
#endif
    0,
    &operand_data[796],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10100 */
  {
    "*rotrdi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_444 },
#else
    { 0, 0, output_444 },
#endif
    0,
    &operand_data[796],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10224 */
  {
    "*rotlqi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_445 },
#else
    { 0, 0, output_445 },
#endif
    0,
    &operand_data[780],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10224 */
  {
    "*rotrqi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_446 },
#else
    { 0, 0, output_446 },
#endif
    0,
    &operand_data[780],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10224 */
  {
    "*rotlhi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_447 },
#else
    { 0, 0, output_447 },
#endif
    0,
    &operand_data[783],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10224 */
  {
    "*rotrhi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_448 },
#else
    { 0, 0, output_448 },
#endif
    0,
    &operand_data[783],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10247 */
  {
    "*rotlqi3_1_slp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_449 },
#else
    { 0, 0, output_449 },
#endif
    0,
    &operand_data[742],
    2,
    2,
    1,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10247 */
  {
    "*rotrqi3_1_slp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_450 },
#else
    { 0, 0, output_450 },
#endif
    0,
    &operand_data[742],
    2,
    2,
    1,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10495 */
  {
    "*btsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bt{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[799],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10495 */
  {
    "*btdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bt{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[801],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10528 */
  {
    "*setcc_si_1_and",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[803],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10545 */
  {
    "*setcc_si_1_movzbl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[803],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10560 */
  {
    "*setcc_qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "set%C1\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[805],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10569 */
  {
    "*setcc_qi_slp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "set%C1\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[807],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10649 */
  {
    "setcc_sf_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_457 },
#else
    { 0, output_457, 0 },
#endif
    (insn_gen_fn) gen_setcc_sf_sse,
    &operand_data[809],
    4,
    4,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10649 */
  {
    "setcc_df_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_458 },
#else
    { 0, output_458, 0 },
#endif
    (insn_gen_fn) gen_setcc_df_sse,
    &operand_data[813],
    4,
    4,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10667 */
  {
    "*jcc_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%+j%C1\t%l0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[817],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10685 */
  {
    "*jcc_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%+j%c1\t%l0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[817],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10755 */
  {
    "*jcc_btsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[819],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10755 */
  {
    "*jcc_btdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[823],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10789 */
  {
    "*jcc_btsi_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[827],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10789 */
  {
    "*jcc_btdi_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[832],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10823 */
  {
    "*jcc_btsi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[819],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10856 */
  {
    "*jcc_btsi_mask_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[827],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10892 */
  {
    "*fp_jcc_1_387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[837],
    4,
    5,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10910 */
  {
    "*fp_jcc_1r_387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[837],
    4,
    5,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10928 */
  {
    "*fp_jcc_2_387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[842],
    4,
    5,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10943 */
  {
    "*fp_jcc_2r_387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[842],
    4,
    5,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:10958 */
  {
    "*fp_jcc_3_387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[847],
    4,
    5,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11015 */
  {
    "*fp_jcc_4_hi_387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[852],
    5,
    6,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11015 */
  {
    "*fp_jcc_4_si_387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[858],
    5,
    6,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11084 */
  {
    "jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%l0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_jump,
    &operand_data[655],
    1,
    1,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11102 */
  {
    "*indirect_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[864],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11149 */
  {
    "*tablejump_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[864],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11237 */
  {
    "*call_vzeroupper",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[866],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11249 */
  {
    "*call",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_478 },
#else
    { 0, 0, output_478 },
#endif
    0,
    &operand_data[866],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11301 */
  {
    "*sibcall_vzeroupper",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[869],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11313 */
  {
    "*sibcall",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_480 },
#else
    { 0, 0, output_480 },
#endif
    0,
    &operand_data[869],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11333 */
  {
    "*call_pop_vzeroupper",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[872],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11348 */
  {
    "*call_pop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_482 },
#else
    { 0, 0, output_482 },
#endif
    0,
    &operand_data[876],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11358 */
  {
    "*sibcall_pop_vzeroupper",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[879],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11373 */
  {
    "*sibcall_pop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_484 },
#else
    { 0, 0, output_484 },
#endif
    0,
    &operand_data[879],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11409 */
  {
    "*call_value_vzeroupper",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[865],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11422 */
  {
    "*call_value",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_486 },
#else
    { 0, 0, output_486 },
#endif
    0,
    &operand_data[865],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11430 */
  {
    "*sibcall_value_vzeroupper",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[883],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11443 */
  {
    "*sibcall_value",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_488 },
#else
    { 0, 0, output_488 },
#endif
    0,
    &operand_data[883],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11512 */
  {
    "*call_value_pop_vzeroupper",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[887],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11528 */
  {
    "*call_value_pop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_490 },
#else
    { 0, 0, output_490 },
#endif
    0,
    &operand_data[887],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11539 */
  {
    "*sibcall_value_pop_vzeroupper",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[892],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11555 */
  {
    "*sibcall_value_pop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_492 },
#else
    { 0, 0, output_492 },
#endif
    0,
    &operand_data[892],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11616 */
  {
    "blockage",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_blockage,
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11633 */
  {
    "*memory_blockage",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[897],
    1,
    1,
    1,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11642 */
  {
    "prologue_use",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_prologue_use,
    &operand_data[655],
    1,
    1,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11682 */
  {
    "simple_return_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_simple_return_internal,
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11694 */
  {
    "simple_return_internal_long",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep\n\tret",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_simple_return_internal_long,
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11705 */
  {
    "simple_return_pop_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_simple_return_pop_internal,
    &operand_data[67],
    1,
    1,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11715 */
  {
    "simple_return_indirect_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_simple_return_indirect_internal,
    &operand_data[717],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11723 */
  {
    "nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11732 */
  {
    "nops",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_501 },
#else
    { 0, 0, output_501 },
#endif
    (insn_gen_fn) gen_nops,
    &operand_data[868],
    1,
    1,
    0,
    0,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11754 */
  {
    "pad",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_502 },
#else
    { 0, 0, output_502 },
#endif
    (insn_gen_fn) gen_pad,
    &operand_data[655],
    1,
    1,
    0,
    0,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11775 */
  {
    "set_got",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_503 },
#else
    { 0, 0, output_503 },
#endif
    (insn_gen_fn) gen_set_got,
    &operand_data[64],
    1,
    1,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11784 */
  {
    "set_got_labelled",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_504 },
#else
    { 0, 0, output_504 },
#endif
    (insn_gen_fn) gen_set_got_labelled,
    &operand_data[898],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11853 */
  {
    "eh_return_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eh_return_internal,
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11861 */
  {
    "leave",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "leave",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_leave,
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11889 */
  {
    "split_stack_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_507 },
#else
    { 0, 0, output_507 },
#endif
    (insn_gen_fn) gen_split_stack_return,
    &operand_data[67],
    1,
    1,
    0,
    0,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11961 */
  {
    "ffssi2_no_cmove",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ffssi2_no_cmove,
    &operand_data[900],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11985 */
  {
    "*ffssi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsf{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11997 */
  {
    "ctzhi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_510 },
#else
    { 0, 0, output_510 },
#endif
    (insn_gen_fn) gen_ctzhi2,
    &operand_data[903],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:11997 */
  {
    "ctzsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_511 },
#else
    { 0, 0, output_511 },
#endif
    (insn_gen_fn) gen_ctzsi2,
    &operand_data[727],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12033 */
  {
    "clzhi2_lzcnt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lzcnt{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzhi2_lzcnt,
    &operand_data[903],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12033 */
  {
    "clzsi2_lzcnt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lzcnt{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzsi2_lzcnt,
    &operand_data[727],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12044 */
  {
    "*bmi_andn_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "andn\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[905],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12056 */
  {
    "bmi_bextr_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bextr\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bmi_bextr_si,
    &operand_data[905],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12067 */
  {
    "*bmi_blsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blsi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12079 */
  {
    "*bmi_blsmsk_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blsmsk\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12092 */
  {
    "*bmi_blsr_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blsr\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12106 */
  {
    "bmi2_bzhi_si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bzhi\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bmi2_bzhi_si3,
    &operand_data[905],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12118 */
  {
    "bmi2_pdep_si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pdep\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bmi2_pdep_si3,
    &operand_data[905],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12129 */
  {
    "bmi2_pext_si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pext\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bmi2_pext_si3,
    &operand_data[905],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12141 */
  {
    "tbm_bextri_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_522 },
#else
    { 0, 0, output_522 },
#endif
    (insn_gen_fn) gen_tbm_bextri_si,
    &operand_data[908],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12156 */
  {
    "*tbm_blcfill_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blcfill\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12169 */
  {
    "*tbm_blci_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blci\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12183 */
  {
    "*tbm_blcic_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blcic\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12197 */
  {
    "*tbm_blcmsk_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blcmsk\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12210 */
  {
    "*tbm_blcs_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blcs\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12223 */
  {
    "*tbm_blsfill_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blsfill\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12236 */
  {
    "*tbm_blsic_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blsic\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12250 */
  {
    "*tbm_t1mskc_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "t1mskc\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12264 */
  {
    "*tbm_tzmsk_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "tzmsk\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12289 */
  {
    "bsr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsr{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bsr,
    &operand_data[727],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12300 */
  {
    "*bsrhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsr{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[903],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12311 */
  {
    "popcounthi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_534 },
#else
    { 0, 0, output_534 },
#endif
    (insn_gen_fn) gen_popcounthi2,
    &operand_data[903],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12311 */
  {
    "popcountsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_535 },
#else
    { 0, 0, output_535 },
#endif
    (insn_gen_fn) gen_popcountsi2,
    &operand_data[727],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12328 */
  {
    "*popcounthi2_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_536 },
#else
    { 0, 0, output_536 },
#endif
    0,
    &operand_data[903],
    2,
    2,
    1,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12328 */
  {
    "*popcountsi2_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_537 },
#else
    { 0, 0, output_537 },
#endif
    0,
    &operand_data[727],
    2,
    2,
    1,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12328 */
  {
    "*popcountdi2_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_538 },
#else
    { 0, 0, output_538 },
#endif
    0,
    &operand_data[912],
    2,
    2,
    1,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12384 */
  {
    "*bswapsi2_movbe",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_539 },
#else
    { 0, output_539, 0 },
#endif
    0,
    &operand_data[914],
    2,
    2,
    0,
    3,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12399 */
  {
    "*bswapsi2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bswap\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[916],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12408 */
  {
    "*bswaphi_lowpart_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_541 },
#else
    { 0, output_541, 0 },
#endif
    0,
    &operand_data[918],
    1,
    1,
    1,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12419 */
  {
    "bswaphi_lowpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{w}\t{$8, %0|%0, 8}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bswaphi_lowpart,
    &operand_data[94],
    1,
    1,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12475 */
  {
    "paritydi2_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_paritydi2_cmp,
    &operand_data[919],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12506 */
  {
    "paritysi2_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_paritysi2_cmp,
    &operand_data[923],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12530 */
  {
    "*parityhi2_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%h0, %b0|%b0, %h0}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[926],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12546 */
  {
    "*tls_global_dynamic_32_gnu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_546 },
#else
    { 0, 0, output_546 },
#endif
    0,
    &operand_data[928],
    4,
    6,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12614 */
  {
    "*tls_local_dynamic_base_32_gnu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_547 },
#else
    { 0, 0, output_547 },
#endif
    0,
    &operand_data[934],
    3,
    5,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12677 */
  {
    "*tls_local_dynamic_32_once",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[939],
    4,
    6,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12704 */
  {
    "*load_tp_x32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%%fs:0, %0|%0, DWORD PTR fs:0}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[64],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12715 */
  {
    "*load_tp_x32_zext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%%fs:0, %k0|%k0, DWORD PTR fs:0}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[768],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12726 */
  {
    "*load_tp_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%%gs:0, %0|%0, DWORD PTR gs:0}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[64],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12737 */
  {
    "*add_tp_x32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%%fs:0, %0|%0, DWORD PTR fs:0}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[916],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12750 */
  {
    "*add_tp_x32_zext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%%fs:0, %k0|%k0, DWORD PTR fs:0}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[945],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12764 */
  {
    "*add_tp_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%%gs:0, %0|%0, DWORD PTR gs:0}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[916],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12813 */
  {
    "*tls_dynamic_gnu2_lea_32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a2@TLSDESC(%1), %0|%0, %a2@TLSDESC[%1]}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[947],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12826 */
  {
    "*tls_dynamic_gnu2_call_32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t{*%a1@TLSCALL(%2)|[DWORD PTR [%2+%a1@TLSCALL]]}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[950],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12841 */
  {
    "*tls_dynamic_gnu2_combine_32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[954],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12932 */
  {
    "*fop_sf_comm_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_558 },
#else
    { 0, 0, output_558 },
#endif
    0,
    &operand_data[959],
    4,
    4,
    0,
    3,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12932 */
  {
    "*fop_df_comm_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_559 },
#else
    { 0, 0, output_559 },
#endif
    0,
    &operand_data[963],
    4,
    4,
    0,
    3,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12953 */
  {
    "*fop_sf_comm_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_560 },
#else
    { 0, 0, output_560 },
#endif
    0,
    &operand_data[967],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12953 */
  {
    "*fop_df_comm_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_561 },
#else
    { 0, 0, output_561 },
#endif
    0,
    &operand_data[971],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12970 */
  {
    "*fop_sf_comm_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_562 },
#else
    { 0, 0, output_562 },
#endif
    0,
    &operand_data[975],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12970 */
  {
    "*fop_df_comm_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_563 },
#else
    { 0, 0, output_563 },
#endif
    0,
    &operand_data[979],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12985 */
  {
    "*fop_sf_1_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_564 },
#else
    { 0, 0, output_564 },
#endif
    0,
    &operand_data[983],
    4,
    4,
    0,
    4,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:12985 */
  {
    "*fop_df_1_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_565 },
#else
    { 0, 0, output_565 },
#endif
    0,
    &operand_data[987],
    4,
    4,
    0,
    4,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13013 */
  {
    "*rcpsf2_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vrcpss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[991],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13024 */
  {
    "*fop_sf_1_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_567 },
#else
    { 0, 0, output_567 },
#endif
    0,
    &operand_data[993],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13024 */
  {
    "*fop_df_1_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_568 },
#else
    { 0, 0, output_568 },
#endif
    0,
    &operand_data[997],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13044 */
  {
    "*fop_sf_1_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_569 },
#else
    { 0, 0, output_569 },
#endif
    0,
    &operand_data[1001],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13044 */
  {
    "*fop_df_1_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_570 },
#else
    { 0, 0, output_570 },
#endif
    0,
    &operand_data[1005],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13064 */
  {
    "*fop_sf_2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_571 },
#else
    { 0, 0, output_571 },
#endif
    0,
    &operand_data[1009],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13064 */
  {
    "*fop_df_2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_572 },
#else
    { 0, 0, output_572 },
#endif
    0,
    &operand_data[1013],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13064 */
  {
    "*fop_sf_2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_573 },
#else
    { 0, 0, output_573 },
#endif
    0,
    &operand_data[1017],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13064 */
  {
    "*fop_df_2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_574 },
#else
    { 0, 0, output_574 },
#endif
    0,
    &operand_data[1021],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13084 */
  {
    "*fop_sf_3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_575 },
#else
    { 0, 0, output_575 },
#endif
    0,
    &operand_data[1025],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13084 */
  {
    "*fop_df_3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_576 },
#else
    { 0, 0, output_576 },
#endif
    0,
    &operand_data[1029],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13084 */
  {
    "*fop_sf_3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_577 },
#else
    { 0, 0, output_577 },
#endif
    0,
    &operand_data[1033],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13084 */
  {
    "*fop_df_3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_578 },
#else
    { 0, 0, output_578 },
#endif
    0,
    &operand_data[1037],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13104 */
  {
    "*fop_df_4_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_579 },
#else
    { 0, 0, output_579 },
#endif
    0,
    &operand_data[1041],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13123 */
  {
    "*fop_df_5_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_580 },
#else
    { 0, 0, output_580 },
#endif
    0,
    &operand_data[1045],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13141 */
  {
    "*fop_df_6_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_581 },
#else
    { 0, 0, output_581 },
#endif
    0,
    &operand_data[1049],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13160 */
  {
    "*fop_xf_comm_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_582 },
#else
    { 0, 0, output_582 },
#endif
    0,
    &operand_data[1053],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13174 */
  {
    "*fop_xf_1_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_583 },
#else
    { 0, 0, output_583 },
#endif
    0,
    &operand_data[1057],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13191 */
  {
    "*fop_xf_2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_584 },
#else
    { 0, 0, output_584 },
#endif
    0,
    &operand_data[1061],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13191 */
  {
    "*fop_xf_2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_585 },
#else
    { 0, 0, output_585 },
#endif
    0,
    &operand_data[1065],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13209 */
  {
    "*fop_xf_3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_586 },
#else
    { 0, 0, output_586 },
#endif
    0,
    &operand_data[1069],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13209 */
  {
    "*fop_xf_3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_587 },
#else
    { 0, 0, output_587 },
#endif
    0,
    &operand_data[1073],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13227 */
  {
    "*fop_xf_4_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_588 },
#else
    { 0, 0, output_588 },
#endif
    0,
    &operand_data[1077],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13227 */
  {
    "*fop_xf_4_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_589 },
#else
    { 0, 0, output_589 },
#endif
    0,
    &operand_data[1081],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13244 */
  {
    "*fop_xf_5_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_590 },
#else
    { 0, 0, output_590 },
#endif
    0,
    &operand_data[1085],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13244 */
  {
    "*fop_xf_5_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_591 },
#else
    { 0, 0, output_591 },
#endif
    0,
    &operand_data[1089],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13261 */
  {
    "*fop_xf_6_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_592 },
#else
    { 0, 0, output_592 },
#endif
    0,
    &operand_data[1093],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13261 */
  {
    "*fop_xf_6_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_593 },
#else
    { 0, 0, output_593 },
#endif
    0,
    &operand_data[1097],
    4,
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13326 */
  {
    "truncxfsf2_i387_noop_unspec",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_594 },
#else
    { 0, 0, output_594 },
#endif
    (insn_gen_fn) gen_truncxfsf2_i387_noop_unspec,
    &operand_data[187],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13326 */
  {
    "truncxfdf2_i387_noop_unspec",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_595 },
#else
    { 0, 0, output_595 },
#endif
    (insn_gen_fn) gen_truncxfdf2_i387_noop_unspec,
    &operand_data[189],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13335 */
  {
    "sqrtxf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtxf2,
    &operand_data[673],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13346 */
  {
    "sqrt_extendsfxf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrt_extendsfxf2_i387,
    &operand_data[677],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13346 */
  {
    "sqrt_extenddfxf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrt_extenddfxf2_i387,
    &operand_data[679],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13359 */
  {
    "*rsqrtsf2_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vrsqrtss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[991],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13380 */
  {
    "*sqrtsf2_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vsqrtss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[991],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13380 */
  {
    "*sqrtdf2_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vsqrtsd\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1101],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13423 */
  {
    "fpremxf4_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fprem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpremxf4_i387,
    &operand_data[1103],
    4,
    4,
    4,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13494 */
  {
    "fprem1xf4_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fprem1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fprem1xf4_i387,
    &operand_data[1103],
    4,
    4,
    4,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13566 */
  {
    "*sinxf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[673],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13575 */
  {
    "*sin_extendsfxf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[677],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13575 */
  {
    "*sin_extenddfxf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[679],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13588 */
  {
    "*cosxf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[673],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13597 */
  {
    "*cos_extendsfxf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[677],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13597 */
  {
    "*cos_extenddfxf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[679],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13616 */
  {
    "sincosxf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sincosxf3,
    &operand_data[1103],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13648 */
  {
    "sincos_extendsfxf3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sincos_extendsfxf3_i387,
    &operand_data[1107],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13648 */
  {
    "sincos_extenddfxf3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sincos_extenddfxf3_i387,
    &operand_data[1110],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13705 */
  {
    "fptanxf4_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fptan",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fptanxf4_i387,
    &operand_data[1113],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13718 */
  {
    "fptan_extendsfxf4_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fptan",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fptan_extendsfxf4_i387,
    &operand_data[1117],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13718 */
  {
    "fptan_extenddfxf4_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fptan",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fptan_extenddfxf4_i387,
    &operand_data[1121],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13766 */
  {
    "*fpatanxf3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpatan",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1125],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13778 */
  {
    "fpatan_extendsfxf3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpatan",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpatan_extendsfxf3_i387,
    &operand_data[1129],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13778 */
  {
    "fpatan_extenddfxf3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpatan",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpatan_extenddfxf3_i387,
    &operand_data[1133],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13938 */
  {
    "fyl2xxf3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2x",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2xxf3_i387,
    &operand_data[1125],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13950 */
  {
    "fyl2x_extendsfxf3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2x",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2x_extendsfxf3_i387,
    &operand_data[1137],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:13950 */
  {
    "fyl2x_extenddfxf3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2x",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2x_extenddfxf3_i387,
    &operand_data[1141],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14055 */
  {
    "fyl2xp1xf3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2xp1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2xp1xf3_i387,
    &operand_data[1125],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14067 */
  {
    "fyl2xp1_extendsfxf3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2xp1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2xp1_extendsfxf3_i387,
    &operand_data[1137],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14067 */
  {
    "fyl2xp1_extenddfxf3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2xp1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2xp1_extenddfxf3_i387,
    &operand_data[1141],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14117 */
  {
    "fxtractxf3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtract",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxtractxf3_i387,
    &operand_data[1103],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14129 */
  {
    "fxtract_extendsfxf3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtract",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxtract_extendsfxf3_i387,
    &operand_data[1107],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14129 */
  {
    "fxtract_extenddfxf3_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtract",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxtract_extenddfxf3_i387,
    &operand_data[1110],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14210 */
  {
    "*f2xm1xf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "f2xm1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[673],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14220 */
  {
    "*fscalexf4_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fscale",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1103],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14555 */
  {
    "sse4_1_roundsf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vroundss\t{%2, %1, %d0|%d0, %1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_roundsf2,
    &operand_data[1145],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14555 */
  {
    "sse4_1_rounddf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vroundsd\t{%2, %1, %d0|%d0, %1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_rounddf2,
    &operand_data[1148],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14567 */
  {
    "rintxf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frndint",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rintxf2,
    &operand_data[673],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14645 */
  {
    "*fistdi2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1151],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14668 */
  {
    "fistdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_634 },
#else
    { 0, 0, output_634 },
#endif
    (insn_gen_fn) gen_fistdi2,
    &operand_data[1153],
    2,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14678 */
  {
    "fistdi2_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistdi2_with_temp,
    &operand_data[1156],
    3,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14710 */
  {
    "*fisthi2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[268],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14710 */
  {
    "*fistsi2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[289],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14728 */
  {
    "fisthi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_638 },
#else
    { 0, 0, output_638 },
#endif
    (insn_gen_fn) gen_fisthi2,
    &operand_data[1160],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14728 */
  {
    "fistsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_639 },
#else
    { 0, 0, output_639 },
#endif
    (insn_gen_fn) gen_fistsi2,
    &operand_data[1162],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14737 */
  {
    "fisthi2_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fisthi2_with_temp,
    &operand_data[1164],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14737 */
  {
    "fistsi2_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistsi2_with_temp,
    &operand_data[1167],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14803 */
  {
    "frndintxf2_floor",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_floor,
    &operand_data[1170],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14828 */
  {
    "frndintxf2_floor_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfldcw\t%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_floor_i387,
    &operand_data[1172],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14893 */
  {
    "*fisthi2_floor_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1176],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14893 */
  {
    "*fistsi2_floor_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1178],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14893 */
  {
    "*fistdi2_floor_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1151],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14925 */
  {
    "fistdi2_floor",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_647 },
#else
    { 0, 0, output_647 },
#endif
    (insn_gen_fn) gen_fistdi2_floor,
    &operand_data[1180],
    4,
    5,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14939 */
  {
    "fistdi2_floor_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistdi2_floor_with_temp,
    &operand_data[1185],
    5,
    6,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14985 */
  {
    "fisthi2_floor",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_649 },
#else
    { 0, 0, output_649 },
#endif
    (insn_gen_fn) gen_fisthi2_floor,
    &operand_data[1191],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14985 */
  {
    "fistsi2_floor",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_650 },
#else
    { 0, 0, output_650 },
#endif
    (insn_gen_fn) gen_fistsi2_floor,
    &operand_data[1195],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14998 */
  {
    "fisthi2_floor_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fisthi2_floor_with_temp,
    &operand_data[1199],
    5,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:14998 */
  {
    "fistsi2_floor_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistsi2_floor_with_temp,
    &operand_data[1204],
    5,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15061 */
  {
    "frndintxf2_ceil",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_ceil,
    &operand_data[1170],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15086 */
  {
    "frndintxf2_ceil_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfldcw\t%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_ceil_i387,
    &operand_data[1172],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15151 */
  {
    "*fisthi2_ceil_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1176],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15151 */
  {
    "*fistsi2_ceil_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1178],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15151 */
  {
    "*fistdi2_ceil_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1151],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15183 */
  {
    "fistdi2_ceil",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_658 },
#else
    { 0, 0, output_658 },
#endif
    (insn_gen_fn) gen_fistdi2_ceil,
    &operand_data[1180],
    4,
    5,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15197 */
  {
    "fistdi2_ceil_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistdi2_ceil_with_temp,
    &operand_data[1185],
    5,
    6,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15243 */
  {
    "fisthi2_ceil",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_660 },
#else
    { 0, 0, output_660 },
#endif
    (insn_gen_fn) gen_fisthi2_ceil,
    &operand_data[1191],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15243 */
  {
    "fistsi2_ceil",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_661 },
#else
    { 0, 0, output_661 },
#endif
    (insn_gen_fn) gen_fistsi2_ceil,
    &operand_data[1195],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15256 */
  {
    "fisthi2_ceil_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fisthi2_ceil_with_temp,
    &operand_data[1199],
    5,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15256 */
  {
    "fistsi2_ceil_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistsi2_ceil_with_temp,
    &operand_data[1204],
    5,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15317 */
  {
    "frndintxf2_trunc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_trunc,
    &operand_data[1170],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15342 */
  {
    "frndintxf2_trunc_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfldcw\t%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_trunc_i387,
    &operand_data[1172],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15408 */
  {
    "frndintxf2_mask_pm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_mask_pm,
    &operand_data[1170],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15433 */
  {
    "frndintxf2_mask_pm_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfclex\n\tfldcw\t%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_mask_pm_i387,
    &operand_data[1172],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15474 */
  {
    "fxamsf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxam\n\tfnstsw\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxamsf2_i387,
    &operand_data[30],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15474 */
  {
    "fxamdf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxam\n\tfnstsw\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxamdf2_i387,
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15474 */
  {
    "fxamxf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxam\n\tfnstsw\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxamxf2_i387,
    &operand_data[27],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15486 */
  {
    "fxamsf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxamsf2_i387_with_temp,
    &operand_data[1209],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15486 */
  {
    "fxamdf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxamdf2_i387_with_temp,
    &operand_data[1211],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15585 */
  {
    "movmsk_df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovmskpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movmsk_df,
    &operand_data[1213],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15636 */
  {
    "cld",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cld",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cld,
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15718 */
  {
    "*strmovsi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{l|d}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1215],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15733 */
  {
    "*strmovhi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1215],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15748 */
  {
    "*strmovqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1215],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15800 */
  {
    "*rep_movsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep{%;} movs{l|d}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1219],
    6,
    6,
    4,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15819 */
  {
    "*rep_movqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep{%;} movsb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1219],
    6,
    6,
    4,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15903 */
  {
    "*strsetsi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stos{l|d}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1225],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15915 */
  {
    "*strsethi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stosw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1228],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15927 */
  {
    "*strsetqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stosb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1231],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15972 */
  {
    "*rep_stossi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep{%;} stos{l|d}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1234],
    5,
    5,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:15989 */
  {
    "*rep_stosqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep{%;} stosb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1239],
    5,
    5,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16110 */
  {
    "*cmpstrnqi_nz_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "repz{%;} cmpsb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1244],
    7,
    7,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16147 */
  {
    "*cmpstrnqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "repz{%;} cmpsb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1244],
    7,
    7,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16192 */
  {
    "*strlenqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "repnz{%;} scasb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1251],
    6,
    6,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16313 */
  {
    "*x86_movsicc_0_m1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t%0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1257],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16332 */
  {
    "*x86_movsicc_0_m1_se",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t%0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1257],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16349 */
  {
    "*x86_movsicc_0_m1_neg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t%0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1257],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16363 */
  {
    "*movhicc_noc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_691 },
#else
    { 0, output_691, 0 },
#endif
    0,
    &operand_data[1259],
    4,
    4,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16363 */
  {
    "*movsicc_noc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_692 },
#else
    { 0, output_692, 0 },
#endif
    0,
    &operand_data[1263],
    4,
    4,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16376 */
  {
    "*movqicc_noc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1267],
    5,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16406 */
  {
    "*movxfcc_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_694 },
#else
    { 0, output_694, 0 },
#endif
    0,
    &operand_data[1272],
    4,
    4,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16435 */
  {
    "*movdfcc_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_695 },
#else
    { 0, output_695, 0 },
#endif
    0,
    &operand_data[1276],
    4,
    4,
    0,
    4,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16472 */
  {
    "*movsfcc_1_387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_696 },
#else
    { 0, output_696, 0 },
#endif
    0,
    &operand_data[1280],
    4,
    4,
    0,
    4,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16492 */
  {
    "*xop_pcmov_sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmov\t{%1, %3, %2, %0|%0, %2, %3, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1284],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16492 */
  {
    "*xop_pcmov_df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmov\t{%1, %3, %2, %0|%0, %2, %3, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1288],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16507 */
  {
    "smaxsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_699 },
#else
    { 0, output_699, 0 },
#endif
    (insn_gen_fn) gen_smaxsf3,
    &operand_data[967],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16507 */
  {
    "sminsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_700 },
#else
    { 0, output_700, 0 },
#endif
    (insn_gen_fn) gen_sminsf3,
    &operand_data[967],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16507 */
  {
    "smaxdf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_701 },
#else
    { 0, output_701, 0 },
#endif
    (insn_gen_fn) gen_smaxdf3,
    &operand_data[971],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16507 */
  {
    "smindf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_702 },
#else
    { 0, output_702, 0 },
#endif
    (insn_gen_fn) gen_smindf3,
    &operand_data[971],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16527 */
  {
    "*ieee_sminsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_703 },
#else
    { 0, output_703, 0 },
#endif
    0,
    &operand_data[809],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16527 */
  {
    "*ieee_smindf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_704 },
#else
    { 0, output_704, 0 },
#endif
    0,
    &operand_data[813],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16542 */
  {
    "*ieee_smaxsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_705 },
#else
    { 0, output_705, 0 },
#endif
    0,
    &operand_data[809],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16542 */
  {
    "*ieee_smaxdf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_706 },
#else
    { 0, output_706, 0 },
#endif
    0,
    &operand_data[813],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16610 */
  {
    "pro_epilogue_adjust_stack_si_add",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_707 },
#else
    { 0, 0, output_707 },
#endif
    (insn_gen_fn) gen_pro_epilogue_adjust_stack_si_add,
    &operand_data[1292],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16653 */
  {
    "pro_epilogue_adjust_stack_si_sub",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_pro_epilogue_adjust_stack_si_sub,
    &operand_data[1295],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16664 */
  {
    "allocate_stack_worker_probe_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t___chkstk_ms",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_allocate_stack_worker_probe_si,
    &operand_data[1298],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16664 */
  {
    "allocate_stack_worker_probe_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t___chkstk_ms",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_allocate_stack_worker_probe_di,
    &operand_data[1300],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16724 */
  {
    "adjust_stack_and_probesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_711 },
#else
    { 0, 0, output_711 },
#endif
    (insn_gen_fn) gen_adjust_stack_and_probesi,
    &operand_data[1302],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:16736 */
  {
    "probe_stack_rangesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_712 },
#else
    { 0, 0, output_712 },
#endif
    (insn_gen_fn) gen_probe_stack_rangesi,
    &operand_data[1302],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17637 */
  {
    "trap",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_713 },
#else
    { 0, 0, output_713 },
#endif
    (insn_gen_fn) gen_trap,
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17667 */
  {
    "*prefetch_sse_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_714 },
#else
    { 0, 0, output_714 },
#endif
    0,
    &operand_data[1305],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17688 */
  {
    "*prefetch_3dnow_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_715 },
#else
    { 0, 0, output_715 },
#endif
    0,
    &operand_data[1307],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17726 */
  {
    "stack_protect_set_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%1, %2|%2, %1}\n\tmov{l}\t{%2, %0|%0, %2}\n\txor{l}\t%k2, %k2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_set_si,
    &operand_data[1309],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17726 */
  {
    "stack_protect_set_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{q}\t{%1, %2|%2, %1}\n\tmov{q}\t{%2, %0|%0, %2}\n\txor{l}\t%k2, %k2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_set_di,
    &operand_data[1312],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17736 */
  {
    "stack_tls_protect_set_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%@:%P1, %2|%2, DWORD PTR %@:%P1}\n\tmov{l}\t{%2, %0|%0, %2}\n\txor{l}\t%k2, %k2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_tls_protect_set_si,
    &operand_data[1315],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17736 */
  {
    "stack_tls_protect_set_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{q}\t{%@:%P1, %2|%2, QWORD PTR %@:%P1}\n\tmov{q}\t{%2, %0|%0, %2}\n\txor{l}\t%k2, %k2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_tls_protect_set_di,
    &operand_data[1318],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17774 */
  {
    "stack_protect_test_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%1, %3|%3, %1}\n\txor{l}\t{%2, %3|%3, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_test_si,
    &operand_data[1321],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17774 */
  {
    "stack_protect_test_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{q}\t{%1, %3|%3, %1}\n\txor{q}\t{%2, %3|%3, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_test_di,
    &operand_data[1325],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17784 */
  {
    "stack_tls_protect_test_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%1, %3|%3, %1}\n\txor{l}\t{%@:%P2, %3|%3, DWORD PTR %@:%P2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_tls_protect_test_si,
    &operand_data[1329],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17784 */
  {
    "stack_tls_protect_test_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{q}\t{%1, %3|%3, %1}\n\txor{q}\t{%@:%P2, %3|%3, QWORD PTR %@:%P2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_tls_protect_test_di,
    &operand_data[1333],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17794 */
  {
    "sse4_2_crc32qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_crc32qi,
    &operand_data[1337],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17794 */
  {
    "sse4_2_crc32hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_crc32hi,
    &operand_data[1340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17794 */
  {
    "sse4_2_crc32si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_crc32si,
    &operand_data[1343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17864 */
  {
    "*rdpmc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdpmc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1346],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17910 */
  {
    "*rdtsc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdtsc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[544],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:17969 */
  {
    "*rdtscp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdtscp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1348],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:18002 */
  {
    "*lwp_llwpcbsi1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "llwpcb\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[717],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:18026 */
  {
    "lwp_slwpcbsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slwpcb\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lwp_slwpcbsi,
    &operand_data[64],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:18044 */
  {
    "*lwp_lwpvalsi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwpval\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1350],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:18066 */
  {
    "*lwp_lwpinssi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwpins\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1350],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:18111 */
  {
    "rdrandhi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdrand\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rdrandhi_1,
    &operand_data[146],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:18111 */
  {
    "rdrandsi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdrand\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rdrandsi_1,
    &operand_data[64],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/i386.md:18132 */
  {
    "*pause",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep; nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[897],
    1,
    1,
    1,
    0,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:137 */
  {
    "*movv8qi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_737 },
#else
    { 0, output_737, 0 },
#endif
    0,
    &operand_data[1353],
    2,
    2,
    0,
    15,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:137 */
  {
    "*movv4hi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_738 },
#else
    { 0, output_738, 0 },
#endif
    0,
    &operand_data[1355],
    2,
    2,
    0,
    15,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:137 */
  {
    "*movv2si_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_739 },
#else
    { 0, output_739, 0 },
#endif
    0,
    &operand_data[1357],
    2,
    2,
    0,
    15,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:137 */
  {
    "*movv1di_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_740 },
#else
    { 0, output_740, 0 },
#endif
    0,
    &operand_data[1359],
    2,
    2,
    0,
    15,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:268 */
  {
    "*movv2sf_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_741 },
#else
    { 0, output_741, 0 },
#endif
    0,
    &operand_data[1361],
    2,
    2,
    0,
    12,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:346 */
  {
    "sse_movntq",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movntq,
    &operand_data[1363],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:369 */
  {
    "*mmx_addv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfadd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1365],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:391 */
  {
    "*mmx_subv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_744 },
#else
    { 0, output_744, 0 },
#endif
    0,
    &operand_data[1368],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:410 */
  {
    "*mmx_mulv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmul\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1365],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:436 */
  {
    "*mmx_smaxv2sf3_finite",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmax\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1365],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:436 */
  {
    "*mmx_sminv2sf3_finite",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmin\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1365],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:448 */
  {
    "*mmx_smaxv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmax\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1371],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:448 */
  {
    "*mmx_sminv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmin\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1371],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:459 */
  {
    "mmx_rcpv2sf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrcp\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rcpv2sf2,
    &operand_data[1374],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:469 */
  {
    "mmx_rcpit1v2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrcpit1\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rcpit1v2sf3,
    &operand_data[1371],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:480 */
  {
    "mmx_rcpit2v2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrcpit2\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rcpit2v2sf3,
    &operand_data[1371],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:491 */
  {
    "mmx_rsqrtv2sf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrsqrt\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rsqrtv2sf2,
    &operand_data[1374],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:501 */
  {
    "mmx_rsqit1v2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrsqit1\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rsqit1v2sf3,
    &operand_data[1371],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:512 */
  {
    "mmx_haddv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfacc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_haddv2sf3,
    &operand_data[1371],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:531 */
  {
    "mmx_hsubv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfnacc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_hsubv2sf3,
    &operand_data[1371],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:550 */
  {
    "mmx_addsubv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfpnacc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_addsubv2sf3,
    &operand_data[1371],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:577 */
  {
    "*mmx_eqv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfcmpeq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1376],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:587 */
  {
    "mmx_gtv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfcmpgt\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv2sf3,
    &operand_data[1379],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:597 */
  {
    "mmx_gev2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfcmpge\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gev2sf3,
    &operand_data[1379],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:613 */
  {
    "mmx_pf2id",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pf2id\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pf2id,
    &operand_data[1382],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:622 */
  {
    "mmx_pf2iw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pf2iw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pf2iw,
    &operand_data[1382],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:634 */
  {
    "mmx_pi2fw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pi2fw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pi2fw,
    &operand_data[1384],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:646 */
  {
    "mmx_floatv2si2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pi2fd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_floatv2si2,
    &operand_data[1384],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:661 */
  {
    "mmx_pswapdv2sf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pswapd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pswapdv2sf2,
    &operand_data[1374],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:671 */
  {
    "*vec_dupv2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t%0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1386],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:680 */
  {
    "*mmx_concatv2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_767 },
#else
    { 0, output_767, 0 },
#endif
    0,
    &operand_data[1388],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:705 */
  {
    "*vec_extractv2sf_0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1391],
    2,
    2,
    0,
    6,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:726 */
  {
    "*vec_extractv2sf_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_769 },
#else
    { 0, output_769, 0 },
#endif
    0,
    &operand_data[1393],
    2,
    2,
    0,
    6,
    2
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:789 */
  {
    "*mmx_addv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1395],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:789 */
  {
    "*mmx_subv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1398],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:789 */
  {
    "*mmx_addv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1401],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:789 */
  {
    "*mmx_subv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1404],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:789 */
  {
    "*mmx_addv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1407],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:789 */
  {
    "*mmx_subv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1410],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:789 */
  {
    "*mmx_addv1di3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1413],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:789 */
  {
    "*mmx_subv1di3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1416],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:808 */
  {
    "*mmx_ssaddv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1395],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:808 */
  {
    "*mmx_usaddv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1395],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:808 */
  {
    "*mmx_sssubv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1398],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:808 */
  {
    "*mmx_ussubv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1398],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:808 */
  {
    "*mmx_ssaddv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1401],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:808 */
  {
    "*mmx_usaddv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1401],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:808 */
  {
    "*mmx_sssubv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1404],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:808 */
  {
    "*mmx_ussubv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1404],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:825 */
  {
    "*mmx_mulv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmullw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1401],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:847 */
  {
    "*mmx_smulv4hi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1401],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:875 */
  {
    "*mmx_umulv4hi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhuw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1401],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:913 */
  {
    "*mmx_pmaddwd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1419],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:953 */
  {
    "*mmx_pmulhrwv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhrw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1401],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:986 */
  {
    "*sse2_umulv1siv1di3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmuludq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1422],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1010 */
  {
    "*mmx_smaxv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1401],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1010 */
  {
    "*mmx_sminv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1401],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1029 */
  {
    "*mmx_umaxv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1395],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1029 */
  {
    "*mmx_uminv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1395],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1040 */
  {
    "mmx_ashrv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psraw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashrv4hi3,
    &operand_data[1425],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1040 */
  {
    "mmx_ashrv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrad\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashrv2si3,
    &operand_data[1428],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1054 */
  {
    "mmx_ashlv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv4hi3,
    &operand_data[1425],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1054 */
  {
    "mmx_lshrv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv4hi3,
    &operand_data[1425],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1054 */
  {
    "mmx_ashlv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pslld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv2si3,
    &operand_data[1428],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1054 */
  {
    "mmx_lshrv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv2si3,
    &operand_data[1428],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1054 */
  {
    "mmx_ashlv1di3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv1di3,
    &operand_data[1431],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1054 */
  {
    "mmx_lshrv1di3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv1di3,
    &operand_data[1431],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1082 */
  {
    "*mmx_eqv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1395],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1082 */
  {
    "*mmx_eqv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1401],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1082 */
  {
    "*mmx_eqv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1407],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1092 */
  {
    "mmx_gtv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv8qi3,
    &operand_data[1434],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1092 */
  {
    "mmx_gtv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv4hi3,
    &operand_data[1437],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1092 */
  {
    "mmx_gtv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv2si3,
    &operand_data[1440],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1108 */
  {
    "mmx_andnotv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_andnotv8qi3,
    &operand_data[1434],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1108 */
  {
    "mmx_andnotv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_andnotv4hi3,
    &operand_data[1437],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1108 */
  {
    "mmx_andnotv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_andnotv2si3,
    &operand_data[1440],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1126 */
  {
    "*mmx_andv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1395],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1126 */
  {
    "*mmx_iorv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1395],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1126 */
  {
    "*mmx_xorv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1395],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1126 */
  {
    "*mmx_andv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1401],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1126 */
  {
    "*mmx_iorv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1401],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1126 */
  {
    "*mmx_xorv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1401],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1126 */
  {
    "*mmx_andv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1407],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1126 */
  {
    "*mmx_iorv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1407],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1126 */
  {
    "*mmx_xorv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1407],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1142 */
  {
    "mmx_packsswb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "packsswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_packsswb,
    &operand_data[1443],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1154 */
  {
    "mmx_packssdw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "packssdw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_packssdw,
    &operand_data[1446],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1166 */
  {
    "mmx_packuswb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "packuswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_packuswb,
    &operand_data[1443],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.7.0/gcc/config/i386/mmx.md:1178 */
  {
    "mmx_punpckhbw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    },
#else
    0, 0 },