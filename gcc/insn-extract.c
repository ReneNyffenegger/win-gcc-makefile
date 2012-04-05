/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 1790:  /* atomic_xorsi */
    case 1789:  /* atomic_iorsi */
    case 1788:  /* atomic_andsi */
    case 1787:  /* atomic_xorhi */
    case 1786:  /* atomic_iorhi */
    case 1785:  /* atomic_andhi */
    case 1784:  /* atomic_xorqi */
    case 1783:  /* atomic_iorqi */
    case 1782:  /* atomic_andqi */
    case 1781:  /* atomic_subsi */
    case 1780:  /* atomic_subhi */
    case 1779:  /* atomic_subqi */
    case 1778:  /* atomic_addsi */
    case 1777:  /* atomic_addhi */
    case 1776:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1775:  /* atomic_exchangesi */
    case 1774:  /* atomic_exchangehi */
    case 1773:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1772:  /* *atomic_fetch_add_cmpsi */
    case 1771:  /* *atomic_fetch_add_cmphi */
    case 1770:  /* *atomic_fetch_add_cmpqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 1769:  /* atomic_fetch_addsi */
    case 1768:  /* atomic_fetch_addhi */
    case 1767:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1766:  /* *atomic_compare_and_swap_doubledi_pic */
    case 1765:  /* atomic_compare_and_swap_doubledi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1764:  /* atomic_compare_and_swap_singlesi */
    case 1763:  /* atomic_compare_and_swap_singlehi */
    case 1762:  /* atomic_compare_and_swap_singleqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1757:  /* mfence_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1753:  /* *avx2_gatherdiv8sf_4 */
    case 1752:  /* *avx2_gatherdiv8si_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1751:  /* *avx2_gatherdiv8sf_3 */
    case 1750:  /* *avx2_gatherdiv8si_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1749:  /* *avx2_gatherdiv8sf_2 */
    case 1748:  /* *avx2_gatherdiv8si_2 */
    case 1747:  /* *avx2_gatherdiv4sf_2 */
    case 1746:  /* *avx2_gatherdiv4si_2 */
    case 1745:  /* *avx2_gatherdiv4df_2 */
    case 1744:  /* *avx2_gatherdiv4di_2 */
    case 1743:  /* *avx2_gatherdiv2df_2 */
    case 1742:  /* *avx2_gatherdiv2di_2 */
    case 1733:  /* *avx2_gathersiv8sf_2 */
    case 1732:  /* *avx2_gathersiv8si_2 */
    case 1731:  /* *avx2_gathersiv4sf_2 */
    case 1730:  /* *avx2_gathersiv4si_2 */
    case 1729:  /* *avx2_gathersiv4df_2 */
    case 1728:  /* *avx2_gathersiv4di_2 */
    case 1727:  /* *avx2_gathersiv2df_2 */
    case 1726:  /* *avx2_gathersiv2di_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 1741:  /* *avx2_gatherdiv8sf */
    case 1740:  /* *avx2_gatherdiv8si */
    case 1739:  /* *avx2_gatherdiv4sf */
    case 1738:  /* *avx2_gatherdiv4si */
    case 1737:  /* *avx2_gatherdiv4df */
    case 1736:  /* *avx2_gatherdiv4di */
    case 1735:  /* *avx2_gatherdiv2df */
    case 1734:  /* *avx2_gatherdiv2di */
    case 1725:  /* *avx2_gathersiv8sf */
    case 1724:  /* *avx2_gathersiv8si */
    case 1723:  /* *avx2_gathersiv4sf */
    case 1722:  /* *avx2_gathersiv4si */
    case 1721:  /* *avx2_gathersiv4df */
    case 1720:  /* *avx2_gathersiv4di */
    case 1719:  /* *avx2_gathersiv2df */
    case 1718:  /* *avx2_gathersiv2di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 1715:  /* *vcvtps2ph */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1692:  /* avx2_maskstoreq256 */
    case 1691:  /* avx2_maskstored256 */
    case 1690:  /* avx2_maskstoreq */
    case 1689:  /* avx2_maskstored */
    case 1688:  /* avx_maskstorepd256 */
    case 1687:  /* avx_maskstoreps256 */
    case 1686:  /* avx_maskstorepd */
    case 1685:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 1684:  /* avx2_maskloadq256 */
    case 1683:  /* avx2_maskloadd256 */
    case 1682:  /* avx2_maskloadq */
    case 1681:  /* avx2_maskloadd */
    case 1680:  /* avx_maskloadpd256 */
    case 1679:  /* avx_maskloadps256 */
    case 1678:  /* avx_maskloadpd */
    case 1677:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1662:  /* *avx_vperm2f128v4df_nozero */
    case 1661:  /* *avx_vperm2f128v8sf_nozero */
    case 1660:  /* *avx_vperm2f128v8si_nozero */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1652:  /* *avx_vpermilpv2df */
    case 1651:  /* *avx_vpermilpv4df */
    case 1650:  /* *avx_vpermilpv4sf */
    case 1649:  /* *avx_vpermilpv8sf */
    case 1648:  /* *avx_vperm_broadcast_v4df */
    case 1647:  /* *avx_vperm_broadcast_v8sf */
    case 1646:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1645:  /* avx_vbroadcastf128_v4df */
    case 1644:  /* avx_vbroadcastf128_v8sf */
    case 1643:  /* avx_vbroadcastf128_v4di */
    case 1642:  /* avx_vbroadcastf128_v8si */
    case 1641:  /* avx_vbroadcastf128_v16hi */
    case 1640:  /* avx_vbroadcastf128_v32qi */
    case 1639:  /* avx2_vbroadcasti128_v4di */
    case 1638:  /* avx2_vbroadcasti128_v8si */
    case 1637:  /* avx2_vbroadcasti128_v16hi */
    case 1636:  /* avx2_vbroadcasti128_v32qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1600:  /* xop_maskcmp_uns2v2di3 */
    case 1599:  /* xop_maskcmp_uns2v4si3 */
    case 1598:  /* xop_maskcmp_uns2v8hi3 */
    case 1597:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 1596:  /* xop_maskcmp_unsv2di3 */
    case 1595:  /* xop_maskcmp_unsv4si3 */
    case 1594:  /* xop_maskcmp_unsv8hi3 */
    case 1593:  /* xop_maskcmp_unsv16qi3 */
    case 1592:  /* xop_maskcmpv2di3 */
    case 1591:  /* xop_maskcmpv4si3 */
    case 1590:  /* xop_maskcmpv8hi3 */
    case 1589:  /* xop_maskcmpv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1580:  /* xop_shlv2di3 */
    case 1579:  /* xop_shlv4si3 */
    case 1578:  /* xop_shlv8hi3 */
    case 1577:  /* xop_shlv16qi3 */
    case 1576:  /* xop_shav2di3 */
    case 1575:  /* xop_shav4si3 */
    case 1574:  /* xop_shav8hi3 */
    case 1573:  /* xop_shav16qi3 */
    case 1572:  /* xop_vrotlv2di3 */
    case 1571:  /* xop_vrotlv4si3 */
    case 1570:  /* xop_vrotlv8hi3 */
    case 1569:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 1560:  /* xop_pperm_pack_v8hi_v16qi */
    case 1559:  /* xop_pperm_pack_v4si_v8hi */
    case 1558:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1550:  /* xop_phaddubq */
    case 1544:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 1552:  /* xop_phadduwq */
    case 1549:  /* xop_phaddubd */
    case 1546:  /* xop_phaddwq */
    case 1543:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 1556:  /* xop_phsubdq */
    case 1555:  /* xop_phsubwd */
    case 1554:  /* xop_phsubbw */
    case 1553:  /* xop_phaddudq */
    case 1551:  /* xop_phadduwd */
    case 1548:  /* xop_phaddubw */
    case 1547:  /* xop_phadddq */
    case 1545:  /* xop_phaddwd */
    case 1542:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1541:  /* xop_pcmov_v2df */
    case 1540:  /* xop_pcmov_v4df256 */
    case 1539:  /* xop_pcmov_v4sf */
    case 1538:  /* xop_pcmov_v8sf256 */
    case 1537:  /* xop_pcmov_v2di */
    case 1536:  /* xop_pcmov_v4di256 */
    case 1535:  /* xop_pcmov_v4si */
    case 1534:  /* xop_pcmov_v8si256 */
    case 1533:  /* xop_pcmov_v8hi */
    case 1532:  /* xop_pcmov_v16hi256 */
    case 1531:  /* xop_pcmov_v16qi */
    case 1530:  /* xop_pcmov_v32qi256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1529:  /* xop_pmadcswd */
    case 1528:  /* xop_pmadcsswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1527:  /* xop_pmacswd */
    case 1526:  /* xop_pmacsswd */
    case 1524:  /* xop_pmacsdqh */
    case 1522:  /* xop_pmacsdql */
    case 1521:  /* xop_pmacssdqh */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1520:  /* xop_pmacssdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1515:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 1514:  /* sse4_2_pcmpistrm */
    case 1513:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 1512:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1511:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 1510:  /* sse4_2_pcmpestrm */
    case 1509:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 1508:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 1507:  /* sse4_1_roundsd */
    case 1506:  /* sse4_1_roundss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 1501:  /* sse4_1_ptest */
    case 1500:  /* avx_ptest256 */
    case 1499:  /* avx_vtestpd */
    case 1498:  /* avx_vtestpd256 */
    case 1497:  /* avx_vtestps */
    case 1496:  /* avx_vtestps256 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1470:  /* avx2_pblenddv4si */
    case 1469:  /* avx2_pblenddv8si */
    case 1468:  /* *avx2_pblendw */
    case 1467:  /* sse4_1_pblendw */
    case 1450:  /* sse4_1_blendpd */
    case 1449:  /* avx_blendpd256 */
    case 1448:  /* sse4_1_blendps */
    case 1447:  /* avx_blendps256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1608:  /* xop_vpermil2v2df3 */
    case 1607:  /* xop_vpermil2v4df3 */
    case 1606:  /* xop_vpermil2v4sf3 */
    case 1605:  /* xop_vpermil2v8sf3 */
    case 1445:  /* sse4a_insertqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 1414:  /* *ssse3_pmulhrswv4hi3 */
    case 1413:  /* *ssse3_pmulhrswv8hi3 */
    case 1412:  /* *avx2_umulhrswv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 1407:  /* ssse3_phsubswv8hi3 */
    case 1403:  /* avx2_phsubdv8si3 */
    case 1401:  /* ssse3_phsubwv8hi3 */
    case 1398:  /* ssse3_phaddswv8hi3 */
    case 1394:  /* avx2_phadddv8si3 */
    case 1392:  /* ssse3_phaddwv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 2;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 2;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1406:  /* avx2_phsubswv16hi3 */
    case 1400:  /* avx2_phsubwv16hi3 */
    case 1397:  /* avx2_phaddswv16hi3 */
    case 1391:  /* avx2_phaddwv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 1), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 1), 0);
      recog_data.dup_num[10] = 1;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[11] = 1;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 1), 0);
      recog_data.dup_num[12] = 1;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[13] = 1;
      recog_data.dup_loc[14] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 1), 0);
      recog_data.dup_num[14] = 1;
      recog_data.dup_loc[15] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[15] = 2;
      recog_data.dup_loc[16] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[16] = 2;
      recog_data.dup_loc[17] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[17] = 2;
      recog_data.dup_loc[18] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[18] = 2;
      recog_data.dup_loc[19] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[19] = 2;
      recog_data.dup_loc[20] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[20] = 2;
      recog_data.dup_loc[21] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[21] = 2;
      recog_data.dup_loc[22] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[22] = 2;
      recog_data.dup_loc[23] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[23] = 2;
      recog_data.dup_loc[24] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[24] = 2;
      recog_data.dup_loc[25] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[25] = 2;
      recog_data.dup_loc[26] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[26] = 2;
      recog_data.dup_loc[27] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[27] = 2;
      recog_data.dup_loc[28] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[28] = 2;
      recog_data.dup_loc[29] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[29] = 2;
      break;

    case 1389:  /* sse3_mwait */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1360:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1359:  /* avx2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 1357:  /* avx2_pshuflw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      break;

    case 1355:  /* avx2_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1171:  /* sse2_shufpd_v2df */
    case 1170:  /* sse2_shufpd_v2di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 1363:  /* *vec_ext_v4si_mem */
    case 1354:  /* *sse4_1_pextrd */
    case 1353:  /* *sse4_1_pextrw_memory */
    case 1351:  /* *sse4_1_pextrb_memory */
    case 1148:  /* *vec_extract_v4sf_mem */
    case 1147:  /* *sse4_1_extractps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1145:  /* sse4_1_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1361:  /* sse2_loadld */
    case 1143:  /* vec_setv4sf_0 */
    case 1142:  /* vec_setv4si_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1178:  /* sse2_movsd */
    case 1135:  /* sse_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1675:  /* vec_set_lo_v32qi */
    case 1673:  /* vec_set_lo_v16hi */
    case 1670:  /* vec_set_lo_v8sf */
    case 1669:  /* vec_set_lo_v8si */
    case 1666:  /* vec_set_lo_v4df */
    case 1665:  /* vec_set_lo_v4di */
    case 1663:  /* avx2_vec_set_lo_v4di */
    case 1177:  /* sse2_loadlpd */
    case 1134:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1165:  /* avx_shufpd256_1 */
    case 1130:  /* sse_shufps_v4sf */
    case 1129:  /* sse_shufps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 1128:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1127:  /* sse3_movsldup */
    case 1126:  /* avx_movsldup256 */
    case 1125:  /* sse3_movshdup */
    case 1124:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1712:  /* vcvtph2ps */
    case 1083:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 1112:  /* sse2_cvtss2sd */
    case 1111:  /* sse2_cvtsd2ss */
    case 1098:  /* sse2_cvtsi2sd */
    case 1085:  /* sse_cvtsi2ss */
    case 1082:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1081:  /* *fma_fmsubadd_v2df */
    case 1080:  /* *fma_fmsubadd_v4df */
    case 1079:  /* *fma_fmsubadd_v4sf */
    case 1078:  /* *fma_fmsubadd_v8sf */
    case 1049:  /* *fma4_fmsubadd_v2df */
    case 1048:  /* *fma4_fmsubadd_v4df */
    case 1047:  /* *fma4_fmsubadd_v4sf */
    case 1046:  /* *fma4_fmsubadd_v8sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 1041:  /* *fma4i_vmfnmsub_v2df */
    case 1040:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1039:  /* *fma4i_vmfnmadd_v2df */
    case 1038:  /* *fma4i_vmfnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1037:  /* *fma4i_vmfmsub_v2df */
    case 1036:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1035:  /* *fma4i_vmfmadd_v2df */
    case 1034:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1033:  /* *fmai_fnmsub_v2df */
    case 1032:  /* *fmai_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 1031:  /* *fmai_fnmadd_v2df */
    case 1030:  /* *fmai_fnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 1029:  /* *fmai_fmsub_v2df */
    case 1028:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 1027:  /* *fmai_fmadd_v2df */
    case 1026:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 1073:  /* *fma_fnmsub_v4df */
    case 1072:  /* *fma_fnmsub_v8sf */
    case 1071:  /* *fma_fnmsub_v2df */
    case 1070:  /* *fma_fnmsub_v4sf */
    case 1069:  /* *fma_fnmsub_df */
    case 1068:  /* *fma_fnmsub_sf */
    case 1025:  /* *fma4i_fnmsub_v4df */
    case 1024:  /* *fma4i_fnmsub_v8sf */
    case 1023:  /* *fma4i_fnmsub_v2df */
    case 1022:  /* *fma4i_fnmsub_v4sf */
    case 1021:  /* *fma4i_fnmsub_df */
    case 1020:  /* *fma4i_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1067:  /* *fma_fnmadd_v4df */
    case 1066:  /* *fma_fnmadd_v8sf */
    case 1065:  /* *fma_fnmadd_v2df */
    case 1064:  /* *fma_fnmadd_v4sf */
    case 1063:  /* *fma_fnmadd_df */
    case 1062:  /* *fma_fnmadd_sf */
    case 1019:  /* *fma4i_fnmadd_v4df */
    case 1018:  /* *fma4i_fnmadd_v8sf */
    case 1017:  /* *fma4i_fnmadd_v2df */
    case 1016:  /* *fma4i_fnmadd_v4sf */
    case 1015:  /* *fma4i_fnmadd_df */
    case 1014:  /* *fma4i_fnmadd_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1061:  /* *fma_fmsub_v4df */
    case 1060:  /* *fma_fmsub_v8sf */
    case 1059:  /* *fma_fmsub_v2df */
    case 1058:  /* *fma_fmsub_v4sf */
    case 1057:  /* *fma_fmsub_df */
    case 1056:  /* *fma_fmsub_sf */
    case 1013:  /* *fma4i_fmsub_v4df */
    case 1012:  /* *fma4i_fmsub_v8sf */
    case 1011:  /* *fma4i_fmsub_v2df */
    case 1010:  /* *fma4i_fmsub_v4sf */
    case 1009:  /* *fma4i_fmsub_df */
    case 1008:  /* *fma4i_fmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 977:  /* sse2_ucomi */
    case 976:  /* sse_ucomi */
    case 975:  /* sse2_comi */
    case 974:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 973:  /* sse2_vmmaskcmpv2df3 */
    case 972:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 963:  /* avx_vmcmpv2df3 */
    case 962:  /* avx_vmcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 955:  /* avx_hsubv8sf3 */
    case 954:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1408:  /* ssse3_phsubswv4hi3 */
    case 1404:  /* ssse3_phsubdv4si3 */
    case 1402:  /* ssse3_phsubwv4hi3 */
    case 1399:  /* ssse3_phaddswv4hi3 */
    case 1395:  /* ssse3_phadddv4si3 */
    case 1393:  /* ssse3_phaddwv4hi3 */
    case 957:  /* sse3_hsubv4sf3 */
    case 956:  /* sse3_haddv4sf3 */
    case 951:  /* avx_hsubv4df3 */
    case 950:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1588:  /* *xop_vmfrcz_v2df */
    case 1587:  /* *xop_vmfrcz_v4sf */
    case 1107:  /* *sse2_cvtpd2dq */
    case 1106:  /* *avx_cvtpd2dq256_2 */
    case 917:  /* sse_vmrsqrtv4sf2 */
    case 908:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 937:  /* sse2_vmsminv2df3 */
    case 936:  /* sse2_vmsmaxv2df3 */
    case 935:  /* sse_vmsminv4sf3 */
    case 934:  /* sse_vmsmaxv4sf3 */
    case 905:  /* sse2_vmdivv2df3 */
    case 904:  /* sse_vmdivv4sf3 */
    case 899:  /* sse2_vmmulv2df3 */
    case 898:  /* sse_vmmulv4sf3 */
    case 893:  /* sse2_vmsubv2df3 */
    case 892:  /* sse2_vmaddv2df3 */
    case 891:  /* sse_vmsubv4sf3 */
    case 890:  /* sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1616:  /* *avx_vzeroall */
    case 846:  /* *mmx_femms */
    case 845:  /* *mmx_emms */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 1385:  /* *sse2_maskmovdqu */
    case 844:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1629:  /* avx2_permv4di_1 */
    case 1358:  /* sse2_pshuflw_1 */
    case 1356:  /* sse2_pshufd_1 */
    case 833:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 1352:  /* *sse2_pextrw_si */
    case 1350:  /* *sse4_1_pextrb_si */
    case 832:  /* mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 1349:  /* sse4_1_pinsrq */
    case 1348:  /* sse4_1_pinsrd */
    case 1347:  /* sse2_pinsrw */
    case 1346:  /* sse4_1_pinsrb */
    case 1144:  /* *vec_setv4sf_sse4_1 */
    case 831:  /* *mmx_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1345:  /* vec_interleave_lowv4si */
    case 1344:  /* avx2_interleave_lowv8si */
    case 1343:  /* vec_interleave_highv4si */
    case 1342:  /* avx2_interleave_highv8si */
    case 1341:  /* vec_interleave_lowv8hi */
    case 1340:  /* avx2_interleave_lowv16hi */
    case 1339:  /* vec_interleave_highv8hi */
    case 1338:  /* avx2_interleave_highv16hi */
    case 1337:  /* vec_interleave_lowv16qi */
    case 1336:  /* avx2_interleave_lowv32qi */
    case 1335:  /* vec_interleave_highv16qi */
    case 1334:  /* avx2_interleave_highv32qi */
    case 1169:  /* vec_interleave_lowv2di */
    case 1168:  /* avx2_interleave_lowv4di */
    case 1167:  /* vec_interleave_highv2di */
    case 1166:  /* avx2_interleave_highv4di */
    case 1164:  /* *vec_interleave_lowv2df */
    case 1163:  /* *avx_unpcklpd256 */
    case 1162:  /* *vec_interleave_highv2df */
    case 1161:  /* avx_unpckhpd256 */
    case 1123:  /* vec_interleave_lowv4sf */
    case 1122:  /* avx_unpcklps256 */
    case 1121:  /* vec_interleave_highv4sf */
    case 1120:  /* avx_unpckhps256 */
    case 1119:  /* sse_movlhps */
    case 1118:  /* sse_movhlps */
    case 830:  /* mmx_punpckldq */
    case 829:  /* mmx_punpckhdq */
    case 828:  /* mmx_punpcklwd */
    case 827:  /* mmx_punpckhwd */
    case 826:  /* mmx_punpcklbw */
    case 825:  /* mmx_punpckhbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1464:  /* sse4_1_packusdw */
    case 1463:  /* avx2_packusdw */
    case 1333:  /* sse2_packuswb */
    case 1332:  /* avx2_packuswb */
    case 1331:  /* sse2_packssdw */
    case 1330:  /* avx2_packssdw */
    case 1329:  /* sse2_packsswb */
    case 1328:  /* avx2_packsswb */
    case 824:  /* mmx_packuswb */
    case 823:  /* mmx_packssdw */
    case 822:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1525:  /* xop_mulv2div2di3_high */
    case 1523:  /* xop_mulv2div2di3_low */
    case 1224:  /* *sse4_1_mulv2siv2di3 */
    case 1223:  /* *avx2_mulv4siv4di3 */
    case 1222:  /* *sse2_umulv2siv2di3 */
    case 1221:  /* *avx_umulv4siv4di3 */
    case 791:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1376:  /* *sse2_uavgv8hi3 */
    case 1375:  /* *avx2_uavgv16hi3 */
    case 1374:  /* *sse2_uavgv16qi3 */
    case 1373:  /* *avx2_uavgv32qi3 */
    case 841:  /* *mmx_uavgv4hi3 */
    case 840:  /* *mmx_uavgv8qi3 */
    case 790:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 1411:  /* ssse3_pmaddubsw */
    case 1410:  /* ssse3_pmaddubsw128 */
    case 1409:  /* avx2_pmaddubsw256 */
    case 1226:  /* *sse2_pmaddwd */
    case 1225:  /* *avx2_pmaddwd */
    case 789:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1220:  /* *umulv8hi3_highpart */
    case 1219:  /* *smulv8hi3_highpart */
    case 1218:  /* *umulv16hi3_highpart */
    case 1217:  /* *smulv16hi3_highpart */
    case 788:  /* *mmx_umulv4hi3_highpart */
    case 787:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 763:  /* mmx_pi2fw */
    case 762:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 949:  /* sse3_addsubv4sf3 */
    case 948:  /* avx_addsubv8sf3 */
    case 947:  /* sse3_addsubv2df3 */
    case 946:  /* avx_addsubv4df3 */
    case 757:  /* mmx_addsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1405:  /* ssse3_phsubdv2si3 */
    case 1396:  /* ssse3_phadddv2si3 */
    case 953:  /* sse3_hsubv2df3 */
    case 952:  /* sse3_haddv2df3 */
    case 756:  /* mmx_hsubv2sf3 */
    case 755:  /* mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 733:  /* *lwp_lwpinssi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1390:  /* sse3_monitor */
    case 732:  /* *lwp_lwpvalsi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 729:  /* *rdtscp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 714:  /* *prefetch_sse_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 711:  /* adjust_stack_and_probesi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 693:  /* *movqicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1055:  /* *fma_fmadd_v4df */
    case 1054:  /* *fma_fmadd_v8sf */
    case 1053:  /* *fma_fmadd_v2df */
    case 1052:  /* *fma_fmadd_v4sf */
    case 1051:  /* *fma_fmadd_df */
    case 1050:  /* *fma_fmadd_sf */
    case 1007:  /* *fma4i_fmadd_v4df */
    case 1006:  /* *fma4i_fmadd_v8sf */
    case 1005:  /* *fma4i_fmadd_v2df */
    case 1004:  /* *fma4i_fmadd_v4sf */
    case 1003:  /* *fma4i_fmadd_df */
    case 1002:  /* *fma4i_fmadd_sf */
    case 698:  /* *xop_pcmov_df */
    case 697:  /* *xop_pcmov_sf */
    case 696:  /* *movsfcc_1_387 */
    case 695:  /* *movdfcc_1 */
    case 694:  /* *movxfcc_1 */
    case 692:  /* *movsicc_noc */
    case 691:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 687:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 686:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 685:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 684:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 683:  /* *rep_stossi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 682:  /* *strsetqi_1 */
    case 681:  /* *strsethi_1 */
    case 680:  /* *strsetsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 679:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 678:  /* *rep_movsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 677:  /* *strmovqi_1 */
    case 676:  /* *strmovhi_1 */
    case 675:  /* *strmovsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 659:  /* fistdi2_ceil_with_temp */
    case 648:  /* fistdi2_floor_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 663:  /* fistsi2_ceil_with_temp */
    case 662:  /* fisthi2_ceil_with_temp */
    case 658:  /* fistdi2_ceil */
    case 652:  /* fistsi2_floor_with_temp */
    case 651:  /* fisthi2_floor_with_temp */
    case 647:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 710:  /* allocate_stack_worker_probe_di */
    case 709:  /* allocate_stack_worker_probe_si */
    case 666:  /* frndintxf2_mask_pm */
    case 664:  /* frndintxf2_trunc */
    case 657:  /* *fistdi2_ceil_1 */
    case 656:  /* *fistsi2_ceil_1 */
    case 655:  /* *fisthi2_ceil_1 */
    case 653:  /* frndintxf2_ceil */
    case 646:  /* *fistdi2_floor_1 */
    case 645:  /* *fistsi2_floor_1 */
    case 644:  /* *fisthi2_floor_1 */
    case 642:  /* frndintxf2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1759:  /* atomic_storedi_fpu */
    case 1758:  /* atomic_loaddi_fpu */
    case 667:  /* frndintxf2_mask_pm_i387 */
    case 665:  /* frndintxf2_trunc_i387 */
    case 661:  /* fistsi2_ceil */
    case 660:  /* fisthi2_ceil */
    case 654:  /* frndintxf2_ceil_i387 */
    case 650:  /* fistsi2_floor */
    case 649:  /* fisthi2_floor */
    case 643:  /* frndintxf2_floor_i387 */
    case 635:  /* fistdi2_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 719:  /* stack_tls_protect_set_di */
    case 718:  /* stack_tls_protect_set_si */
    case 717:  /* stack_protect_set_di */
    case 716:  /* stack_protect_set_si */
    case 641:  /* fistsi2_with_temp */
    case 640:  /* fisthi2_with_temp */
    case 634:  /* fistdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 629:  /* *fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 624:  /* fyl2xp1_extenddfxf3_i387 */
    case 623:  /* fyl2xp1_extendsfxf3_i387 */
    case 621:  /* fyl2x_extenddfxf3_i387 */
    case 620:  /* fyl2x_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 618:  /* fpatan_extenddfxf3_i387 */
    case 617:  /* fpatan_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 723:  /* stack_tls_protect_test_di */
    case 722:  /* stack_tls_protect_test_si */
    case 721:  /* stack_protect_test_di */
    case 720:  /* stack_protect_test_si */
    case 622:  /* fyl2xp1xf3_i387 */
    case 619:  /* fyl2xxf3_i387 */
    case 616:  /* *fpatanxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 615:  /* fptan_extenddfxf4_i387 */
    case 614:  /* fptan_extendsfxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 613:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 627:  /* fxtract_extenddfxf3_i387 */
    case 626:  /* fxtract_extendsfxf3_i387 */
    case 612:  /* sincos_extenddfxf3_i387 */
    case 611:  /* sincos_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 625:  /* fxtractxf3_i387 */
    case 610:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1442:  /* sse4a_vmmovntv2df */
    case 1441:  /* sse4a_vmmovntv4sf */
    case 1099:  /* sse2_cvtsd2si */
    case 1086:  /* sse_cvtss2si */
    case 609:  /* *cos_extenddfxf2_i387 */
    case 608:  /* *cos_extendsfxf2_i387 */
    case 606:  /* *sin_extenddfxf2_i387 */
    case 605:  /* *sin_extendsfxf2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 603:  /* fprem1xf4_i387 */
    case 602:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 593:  /* *fop_xf_6_i387 */
    case 592:  /* *fop_xf_6_i387 */
    case 581:  /* *fop_df_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 591:  /* *fop_xf_5_i387 */
    case 590:  /* *fop_xf_5_i387 */
    case 587:  /* *fop_xf_3_i387 */
    case 586:  /* *fop_xf_3_i387 */
    case 580:  /* *fop_df_5_i387 */
    case 578:  /* *fop_df_3_i387 */
    case 577:  /* *fop_sf_3_i387 */
    case 576:  /* *fop_df_3_i387 */
    case 575:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 589:  /* *fop_xf_4_i387 */
    case 588:  /* *fop_xf_4_i387 */
    case 585:  /* *fop_xf_2_i387 */
    case 584:  /* *fop_xf_2_i387 */
    case 579:  /* *fop_df_4_i387 */
    case 574:  /* *fop_df_2_i387 */
    case 573:  /* *fop_sf_2_i387 */
    case 572:  /* *fop_df_2_i387 */
    case 571:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1761:  /* storedi_via_fpu */
    case 1760:  /* loaddi_via_fpu */
    case 1714:  /* vcvtph2ps256 */
    case 1713:  /* *vcvtph2ps_load */
    case 1695:  /* avx_pd256_pd */
    case 1694:  /* avx_ps256_ps */
    case 1693:  /* avx_si256_si */
    case 1613:  /* aesimc */
    case 1586:  /* xop_frczv4df2 */
    case 1585:  /* xop_frczv8sf2 */
    case 1584:  /* xop_frczv2df2 */
    case 1583:  /* xop_frczv4sf2 */
    case 1582:  /* xop_frczdf2 */
    case 1581:  /* xop_frczsf2 */
    case 1471:  /* sse4_1_phminposuw */
    case 1460:  /* sse4_1_movntdqa */
    case 1459:  /* avx2_movntdqa */
    case 1440:  /* sse4a_movntdf */
    case 1439:  /* sse4a_movntsf */
    case 1384:  /* sse2_pmovmskb */
    case 1383:  /* avx2_pmovmskb */
    case 1382:  /* sse2_movmskpd */
    case 1381:  /* avx_movmskpd256 */
    case 1380:  /* sse_movmskps */
    case 1379:  /* avx_movmskps256 */
    case 1105:  /* avx_cvtpd2dq256 */
    case 1100:  /* sse2_cvtsd2si_2 */
    case 1096:  /* sse2_cvtpd2pi */
    case 1092:  /* sse2_cvtps2dq */
    case 1091:  /* avx_cvtps2dq256 */
    case 1087:  /* sse_cvtss2si_2 */
    case 916:  /* sse_rsqrtv4sf2 */
    case 915:  /* avx_rsqrtv8sf2 */
    case 907:  /* sse_rcpv4sf2 */
    case 906:  /* avx_rcpv8sf2 */
    case 877:  /* sse2_movntv2di */
    case 876:  /* avx_movntv4di */
    case 875:  /* sse2_movntv2df */
    case 874:  /* avx_movntv4df */
    case 873:  /* sse_movntv4sf */
    case 872:  /* avx_movntv8sf */
    case 871:  /* sse2_movntisi */
    case 870:  /* sse3_lddqu */
    case 869:  /* avx_lddqu256 */
    case 868:  /* *sse2_movdqu */
    case 867:  /* *avx_movdqu256 */
    case 866:  /* *sse2_movupd */
    case 865:  /* *avx_movupd256 */
    case 864:  /* *sse_movups */
    case 863:  /* *avx_movups256 */
    case 843:  /* mmx_pmovmskb */
    case 753:  /* mmx_rsqrtv2sf2 */
    case 750:  /* mmx_rcpv2sf2 */
    case 742:  /* sse_movntq */
    case 727:  /* *rdpmc */
    case 673:  /* movmsk_df */
    case 672:  /* fxamdf2_i387_with_temp */
    case 671:  /* fxamsf2_i387_with_temp */
    case 670:  /* fxamxf2_i387 */
    case 669:  /* fxamdf2_i387 */
    case 668:  /* fxamsf2_i387 */
    case 639:  /* fistsi2 */
    case 638:  /* fisthi2 */
    case 637:  /* *fistsi2_1 */
    case 636:  /* *fisthi2_1 */
    case 633:  /* *fistdi2_1 */
    case 632:  /* rintxf2 */
    case 628:  /* *f2xm1xf2_i387 */
    case 607:  /* *cosxf2_i387 */
    case 604:  /* *sinxf2_i387 */
    case 599:  /* *rsqrtsf2_sse */
    case 595:  /* truncxfdf2_i387_noop_unspec */
    case 594:  /* truncxfsf2_i387_noop_unspec */
    case 566:  /* *rcpsf2_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 557:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 556:  /* *tls_dynamic_gnu2_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 555:  /* *tls_dynamic_gnu2_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 553:  /* *add_tp_x32_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 554:  /* *add_tp_si */
    case 552:  /* *add_tp_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 548:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 547:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 546:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 545:  /* *parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 544:  /* paritysi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 543:  /* paritydi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 542:  /* bswaphi_lowpart */
    case 541:  /* *bswaphi_lowpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 533:  /* *bsrhi */
    case 532:  /* bsr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 531:  /* *tbm_tzmsk_si */
    case 530:  /* *tbm_t1mskc_si */
    case 529:  /* *tbm_blsic_si */
    case 525:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 524:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 522:  /* tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 1717:  /* vcvtps2ph256 */
    case 1716:  /* *vcvtps2ph_store */
    case 1656:  /* avx_vpermilvarv2df3 */
    case 1655:  /* avx_vpermilvarv4df3 */
    case 1654:  /* avx_vpermilvarv4sf3 */
    case 1653:  /* avx_vpermilvarv8sf3 */
    case 1628:  /* avx2_permvarv8sf */
    case 1627:  /* avx2_permv4df */
    case 1626:  /* avx2_permvarv8si */
    case 1614:  /* aeskeygenassist */
    case 1612:  /* aesdeclast */
    case 1611:  /* aesdec */
    case 1610:  /* aesenclast */
    case 1609:  /* aesenc */
    case 1505:  /* sse4_1_roundpd */
    case 1504:  /* avx_roundpd256 */
    case 1503:  /* sse4_1_roundps */
    case 1502:  /* avx_roundps256 */
    case 1446:  /* sse4a_insertq */
    case 1444:  /* sse4a_extrq */
    case 1426:  /* ssse3_psignv2si3 */
    case 1425:  /* ssse3_psignv4hi3 */
    case 1424:  /* ssse3_psignv8qi3 */
    case 1423:  /* ssse3_psignv4si3 */
    case 1422:  /* avx2_psignv8si3 */
    case 1421:  /* ssse3_psignv8hi3 */
    case 1420:  /* avx2_psignv16hi3 */
    case 1419:  /* ssse3_psignv16qi3 */
    case 1418:  /* avx2_psignv32qi3 */
    case 1417:  /* ssse3_pshufbv8qi3 */
    case 1416:  /* ssse3_pshufbv16qi3 */
    case 1415:  /* avx2_pshufbv32qi3 */
    case 1378:  /* sse2_psadbw */
    case 1377:  /* avx2_psadbw */
    case 945:  /* *ieee_smaxv2df3 */
    case 944:  /* *ieee_smaxv4df3 */
    case 943:  /* *ieee_smaxv4sf3 */
    case 942:  /* *ieee_smaxv8sf3 */
    case 941:  /* *ieee_sminv2df3 */
    case 940:  /* *ieee_sminv4df3 */
    case 939:  /* *ieee_sminv4sf3 */
    case 938:  /* *ieee_sminv8sf3 */
    case 842:  /* mmx_psadbw */
    case 754:  /* mmx_rsqit1v2sf3 */
    case 752:  /* mmx_rcpit2v2sf3 */
    case 751:  /* mmx_rcpit1v2sf3 */
    case 726:  /* sse4_2_crc32si */
    case 725:  /* sse4_2_crc32hi */
    case 724:  /* sse4_2_crc32qi */
    case 706:  /* *ieee_smaxdf3 */
    case 705:  /* *ieee_smaxsf3 */
    case 704:  /* *ieee_smindf3 */
    case 703:  /* *ieee_sminsf3 */
    case 631:  /* sse4_1_rounddf2 */
    case 630:  /* sse4_1_roundsf2 */
    case 521:  /* bmi2_pext_si3 */
    case 520:  /* bmi2_pdep_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 519:  /* bmi2_bzhi_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 528:  /* *tbm_blsfill_si */
    case 527:  /* *tbm_blcs_si */
    case 526:  /* *tbm_blcmsk_si */
    case 523:  /* *tbm_blcfill_si */
    case 518:  /* *bmi_blsr_si */
    case 517:  /* *bmi_blsmsk_si */
    case 516:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 712:  /* probe_stack_rangesi */
    case 515:  /* bmi_bextr_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 514:  /* *bmi_andn_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 509:  /* *ffssi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 504:  /* set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 735:  /* rdrandsi_1 */
    case 734:  /* rdrandhi_1 */
    case 503:  /* set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 499:  /* simple_return_indirect_internal */
    case 498:  /* simple_return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1617:  /* avx_vzeroupper */
    case 1388:  /* sse2_clflush */
    case 1386:  /* sse_ldmxcsr */
    case 730:  /* *lwp_llwpcbsi1 */
    case 507:  /* split_stack_return */
    case 502:  /* pad */
    case 501:  /* nops */
    case 495:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 1756:  /* mfence_sse2 */
    case 1755:  /* *sse_sfence */
    case 1754:  /* *sse2_lfence */
    case 736:  /* *pause */
    case 494:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 713:  /* trap */
    case 674:  /* cld */
    case 506:  /* leave */
    case 505:  /* eh_return_internal */
    case 500:  /* nop */
    case 497:  /* simple_return_internal_long */
    case 496:  /* simple_return_internal */
    case 493:  /* blockage */
      break;

    case 492:  /* *sibcall_value_pop */
    case 490:  /* *call_value_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 491:  /* *sibcall_value_pop_vzeroupper */
    case 489:  /* *call_value_pop_vzeroupper */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      break;

    case 1676:  /* vec_set_hi_v32qi */
    case 1674:  /* vec_set_hi_v16hi */
    case 1672:  /* vec_set_hi_v8sf */
    case 1671:  /* vec_set_hi_v8si */
    case 1668:  /* vec_set_hi_v4df */
    case 1667:  /* vec_set_hi_v4di */
    case 1664:  /* avx2_vec_set_hi_v4di */
    case 1324:  /* *andnottf3 */
    case 1299:  /* *andnotv2di3 */
    case 1298:  /* *andnotv4di3 */
    case 1297:  /* *andnotv4si3 */
    case 1296:  /* *andnotv8si3 */
    case 1295:  /* *andnotv8hi3 */
    case 1294:  /* *andnotv16hi3 */
    case 1293:  /* *andnotv16qi3 */
    case 1292:  /* *andnotv32qi3 */
    case 1176:  /* sse2_loadhpd */
    case 1132:  /* sse_loadhps */
    case 1114:  /* *sse2_cvtpd2ps */
    case 1110:  /* *sse2_cvttpd2dq */
    case 1109:  /* *avx_cvttpd2dq256_2 */
    case 995:  /* *andnotdf3 */
    case 994:  /* *andnotsf3 */
    case 981:  /* sse2_andnotv2df3 */
    case 980:  /* avx_andnotv4df3 */
    case 979:  /* sse_andnotv4sf3 */
    case 978:  /* avx_andnotv8sf3 */
    case 914:  /* sse2_vmsqrtv2df2 */
    case 913:  /* sse_vmsqrtv4sf2 */
    case 812:  /* mmx_andnotv2si3 */
    case 811:  /* mmx_andnotv4hi3 */
    case 810:  /* mmx_andnotv8qi3 */
    case 488:  /* *sibcall_value */
    case 486:  /* *call_value */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 487:  /* *sibcall_value_vzeroupper */
    case 485:  /* *call_value_vzeroupper */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 484:  /* *sibcall_pop */
    case 482:  /* *call_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 483:  /* *sibcall_pop_vzeroupper */
    case 481:  /* *call_pop_vzeroupper */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      break;

    case 479:  /* *sibcall_vzeroupper */
    case 477:  /* *call_vzeroupper */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 476:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 475:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 474:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 473:  /* *fp_jcc_4_si_387 */
    case 472:  /* *fp_jcc_4_hi_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 470:  /* *fp_jcc_2r_387 */
    case 468:  /* *fp_jcc_1r_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 471:  /* *fp_jcc_3_387 */
    case 469:  /* *fp_jcc_2_387 */
    case 467:  /* *fp_jcc_1_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 466:  /* *jcc_btsi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 465:  /* *jcc_btsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 464:  /* *jcc_btdi_mask */
    case 463:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 462:  /* *jcc_btdi */
    case 461:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 460:  /* *jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 459:  /* *jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 971:  /* sse2_maskcmpv2df3 */
    case 970:  /* avx_maskcmpv4df3 */
    case 969:  /* sse_maskcmpv4sf3 */
    case 968:  /* avx_maskcmpv8sf3 */
    case 967:  /* *sse2_maskcmpv2df3_comm */
    case 966:  /* *avx_maskcmpv4df3_comm */
    case 965:  /* *sse_maskcmpv4sf3_comm */
    case 964:  /* *avx_maskcmpv8sf3_comm */
    case 583:  /* *fop_xf_1_i387 */
    case 582:  /* *fop_xf_comm_i387 */
    case 570:  /* *fop_df_1_i387 */
    case 569:  /* *fop_sf_1_i387 */
    case 568:  /* *fop_df_1_sse */
    case 567:  /* *fop_sf_1_sse */
    case 565:  /* *fop_df_1_mixed */
    case 564:  /* *fop_sf_1_mixed */
    case 563:  /* *fop_df_comm_i387 */
    case 562:  /* *fop_sf_comm_i387 */
    case 561:  /* *fop_df_comm_sse */
    case 560:  /* *fop_sf_comm_sse */
    case 559:  /* *fop_df_comm_mixed */
    case 558:  /* *fop_sf_comm_mixed */
    case 458:  /* setcc_df_sse */
    case 457:  /* setcc_sf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 452:  /* *btdi */
    case 451:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 439:  /* ix86_rotrdi3_doubleword */
    case 438:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1711:  /* avx_vec_concatv4df */
    case 1710:  /* avx_vec_concatv8sf */
    case 1709:  /* avx_vec_concatv4di */
    case 1708:  /* avx_vec_concatv8si */
    case 1707:  /* avx_vec_concatv16hi */
    case 1706:  /* avx_vec_concatv32qi */
    case 1705:  /* avx2_lshrvv2di */
    case 1704:  /* avx2_ashlvv2di */
    case 1703:  /* avx2_lshrvv4di */
    case 1702:  /* avx2_ashlvv4di */
    case 1701:  /* avx2_lshrvv4si */
    case 1700:  /* avx2_ashlvv4si */
    case 1699:  /* avx2_lshrvv8si */
    case 1698:  /* avx2_ashlvv8si */
    case 1697:  /* avx2_ashrvv4si */
    case 1696:  /* avx2_ashrvv8si */
    case 1568:  /* xop_rotrv2di3 */
    case 1567:  /* xop_rotrv4si3 */
    case 1566:  /* xop_rotrv8hi3 */
    case 1565:  /* xop_rotrv16qi3 */
    case 1564:  /* xop_rotlv2di3 */
    case 1563:  /* xop_rotlv4si3 */
    case 1562:  /* xop_rotlv8hi3 */
    case 1561:  /* xop_rotlv16qi3 */
    case 1372:  /* vec_concatv2di */
    case 1371:  /* *vec_concatv4si */
    case 1370:  /* *vec_concatv2si_sse */
    case 1369:  /* *vec_concatv2si_sse2 */
    case 1368:  /* *vec_concatv2si_sse4_1 */
    case 1327:  /* *xortf3 */
    case 1326:  /* *iortf3 */
    case 1325:  /* *andtf3 */
    case 1323:  /* *xorv2di3 */
    case 1322:  /* *iorv2di3 */
    case 1321:  /* *andv2di3 */
    case 1320:  /* *xorv4di3 */
    case 1319:  /* *iorv4di3 */
    case 1318:  /* *andv4di3 */
    case 1317:  /* *xorv4si3 */
    case 1316:  /* *iorv4si3 */
    case 1315:  /* *andv4si3 */
    case 1314:  /* *xorv8si3 */
    case 1313:  /* *iorv8si3 */
    case 1312:  /* *andv8si3 */
    case 1311:  /* *xorv8hi3 */
    case 1310:  /* *iorv8hi3 */
    case 1309:  /* *andv8hi3 */
    case 1308:  /* *xorv16hi3 */
    case 1307:  /* *iorv16hi3 */
    case 1306:  /* *andv16hi3 */
    case 1305:  /* *xorv16qi3 */
    case 1304:  /* *iorv16qi3 */
    case 1303:  /* *andv16qi3 */
    case 1302:  /* *xorv32qi3 */
    case 1301:  /* *iorv32qi3 */
    case 1300:  /* *andv32qi3 */
    case 1291:  /* sse2_gtv4si3 */
    case 1290:  /* sse2_gtv8hi3 */
    case 1289:  /* sse2_gtv16qi3 */
    case 1288:  /* avx2_gtv4di3 */
    case 1287:  /* avx2_gtv8si3 */
    case 1286:  /* avx2_gtv16hi3 */
    case 1285:  /* avx2_gtv32qi3 */
    case 1284:  /* sse4_2_gtv2di3 */
    case 1283:  /* *sse2_eqv4si3 */
    case 1282:  /* *sse2_eqv8hi3 */
    case 1281:  /* *sse2_eqv16qi3 */
    case 1280:  /* *sse4_1_eqv2di3 */
    case 1279:  /* *avx2_eqv4di3 */
    case 1278:  /* *avx2_eqv8si3 */
    case 1277:  /* *avx2_eqv16hi3 */
    case 1276:  /* *avx2_eqv32qi3 */
    case 1275:  /* *uminv16qi3 */
    case 1274:  /* *umaxv16qi3 */
    case 1273:  /* *sse4_1_uminv4si3 */
    case 1272:  /* *sse4_1_umaxv4si3 */
    case 1271:  /* *sse4_1_uminv8hi3 */
    case 1270:  /* *sse4_1_umaxv8hi3 */
    case 1269:  /* *sminv8hi3 */
    case 1268:  /* *smaxv8hi3 */
    case 1267:  /* *sse4_1_sminv4si3 */
    case 1266:  /* *sse4_1_smaxv4si3 */
    case 1265:  /* *sse4_1_sminv16qi3 */
    case 1264:  /* *sse4_1_smaxv16qi3 */
    case 1263:  /* *avx2_uminv8si3 */
    case 1262:  /* *avx2_umaxv8si3 */
    case 1261:  /* *avx2_sminv8si3 */
    case 1260:  /* *avx2_smaxv8si3 */
    case 1259:  /* *avx2_uminv16hi3 */
    case 1258:  /* *avx2_umaxv16hi3 */
    case 1257:  /* *avx2_sminv16hi3 */
    case 1256:  /* *avx2_smaxv16hi3 */
    case 1255:  /* *avx2_uminv32qi3 */
    case 1254:  /* *avx2_umaxv32qi3 */
    case 1253:  /* *avx2_sminv32qi3 */
    case 1252:  /* *avx2_smaxv32qi3 */
    case 1251:  /* sse2_lshrv1ti3 */
    case 1250:  /* avx2_lshrv2ti3 */
    case 1249:  /* sse2_ashlv1ti3 */
    case 1248:  /* avx2_ashlv2ti3 */
    case 1247:  /* lshrv2di3 */
    case 1246:  /* ashlv2di3 */
    case 1245:  /* lshrv4di3 */
    case 1244:  /* ashlv4di3 */
    case 1243:  /* lshrv4si3 */
    case 1242:  /* ashlv4si3 */
    case 1241:  /* lshrv8si3 */
    case 1240:  /* ashlv8si3 */
    case 1239:  /* lshrv8hi3 */
    case 1238:  /* ashlv8hi3 */
    case 1237:  /* lshrv16hi3 */
    case 1236:  /* ashlv16hi3 */
    case 1235:  /* ashrv4si3 */
    case 1234:  /* ashrv8si3 */
    case 1233:  /* ashrv8hi3 */
    case 1232:  /* ashrv16hi3 */
    case 1231:  /* mulv2di3 */
    case 1230:  /* mulv4di3 */
    case 1229:  /* *sse2_mulv4si3 */
    case 1228:  /* *sse4_1_mulv4si3 */
    case 1227:  /* *avx2_mulv8si3 */
    case 1216:  /* *mulv8hi3 */
    case 1215:  /* *mulv16hi3 */
    case 1214:  /* mulv16qi3 */
    case 1213:  /* mulv32qi3 */
    case 1212:  /* *sse2_ussubv8hi3 */
    case 1211:  /* *sse2_sssubv8hi3 */
    case 1210:  /* *sse2_usaddv8hi3 */
    case 1209:  /* *sse2_ssaddv8hi3 */
    case 1208:  /* *avx2_ussubv16hi3 */
    case 1207:  /* *avx2_sssubv16hi3 */
    case 1206:  /* *avx2_usaddv16hi3 */
    case 1205:  /* *avx2_ssaddv16hi3 */
    case 1204:  /* *sse2_ussubv16qi3 */
    case 1203:  /* *sse2_sssubv16qi3 */
    case 1202:  /* *sse2_usaddv16qi3 */
    case 1201:  /* *sse2_ssaddv16qi3 */
    case 1200:  /* *avx2_ussubv32qi3 */
    case 1199:  /* *avx2_sssubv32qi3 */
    case 1198:  /* *avx2_usaddv32qi3 */
    case 1197:  /* *avx2_ssaddv32qi3 */
    case 1196:  /* *subv2di3 */
    case 1195:  /* *addv2di3 */
    case 1194:  /* *subv4di3 */
    case 1193:  /* *addv4di3 */
    case 1192:  /* *subv4si3 */
    case 1191:  /* *addv4si3 */
    case 1190:  /* *subv8si3 */
    case 1189:  /* *addv8si3 */
    case 1188:  /* *subv8hi3 */
    case 1187:  /* *addv8hi3 */
    case 1186:  /* *subv16hi3 */
    case 1185:  /* *addv16hi3 */
    case 1184:  /* *subv16qi3 */
    case 1183:  /* *addv16qi3 */
    case 1182:  /* *subv32qi3 */
    case 1181:  /* *addv32qi3 */
    case 1180:  /* *vec_concatv2df */
    case 1141:  /* *vec_concatv4sf */
    case 1140:  /* *vec_concatv2sf_sse */
    case 1139:  /* *vec_concatv2sf_sse4_1 */
    case 1001:  /* *xordf3 */
    case 1000:  /* *iordf3 */
    case 999:  /* *anddf3 */
    case 998:  /* *xorsf3 */
    case 997:  /* *iorsf3 */
    case 996:  /* *andsf3 */
    case 993:  /* *xorv2df3 */
    case 992:  /* *iorv2df3 */
    case 991:  /* *andv2df3 */
    case 990:  /* *xorv4df3 */
    case 989:  /* *iorv4df3 */
    case 988:  /* *andv4df3 */
    case 987:  /* *xorv4sf3 */
    case 986:  /* *iorv4sf3 */
    case 985:  /* *andv4sf3 */
    case 984:  /* *xorv8sf3 */
    case 983:  /* *iorv8sf3 */
    case 982:  /* *andv8sf3 */
    case 933:  /* *sminv2df3 */
    case 932:  /* *smaxv2df3 */
    case 931:  /* *sminv4df3 */
    case 930:  /* *smaxv4df3 */
    case 929:  /* *sminv4sf3 */
    case 928:  /* *smaxv4sf3 */
    case 927:  /* *sminv8sf3 */
    case 926:  /* *smaxv8sf3 */
    case 925:  /* *sminv2df3_finite */
    case 924:  /* *smaxv2df3_finite */
    case 923:  /* *sminv4df3_finite */
    case 922:  /* *smaxv4df3_finite */
    case 921:  /* *sminv4sf3_finite */
    case 920:  /* *smaxv4sf3_finite */
    case 919:  /* *sminv8sf3_finite */
    case 918:  /* *smaxv8sf3_finite */
    case 903:  /* sse2_divv2df3 */
    case 902:  /* avx_divv4df3 */
    case 901:  /* sse_divv4sf3 */
    case 900:  /* avx_divv8sf3 */
    case 897:  /* *mulv2df3 */
    case 896:  /* *mulv4df3 */
    case 895:  /* *mulv4sf3 */
    case 894:  /* *mulv8sf3 */
    case 889:  /* *subv2df3 */
    case 888:  /* *addv2df3 */
    case 887:  /* *subv4df3 */
    case 886:  /* *addv4df3 */
    case 885:  /* *subv4sf3 */
    case 884:  /* *addv4sf3 */
    case 883:  /* *subv8sf3 */
    case 882:  /* *addv8sf3 */
    case 837:  /* *mmx_concatv2si */
    case 821:  /* *mmx_xorv2si3 */
    case 820:  /* *mmx_iorv2si3 */
    case 819:  /* *mmx_andv2si3 */
    case 818:  /* *mmx_xorv4hi3 */
    case 817:  /* *mmx_iorv4hi3 */
    case 816:  /* *mmx_andv4hi3 */
    case 815:  /* *mmx_xorv8qi3 */
    case 814:  /* *mmx_iorv8qi3 */
    case 813:  /* *mmx_andv8qi3 */
    case 809:  /* mmx_gtv2si3 */
    case 808:  /* mmx_gtv4hi3 */
    case 807:  /* mmx_gtv8qi3 */
    case 806:  /* *mmx_eqv2si3 */
    case 805:  /* *mmx_eqv4hi3 */
    case 804:  /* *mmx_eqv8qi3 */
    case 803:  /* mmx_lshrv1di3 */
    case 802:  /* mmx_ashlv1di3 */
    case 801:  /* mmx_lshrv2si3 */
    case 800:  /* mmx_ashlv2si3 */
    case 799:  /* mmx_lshrv4hi3 */
    case 798:  /* mmx_ashlv4hi3 */
    case 797:  /* mmx_ashrv2si3 */
    case 796:  /* mmx_ashrv4hi3 */
    case 795:  /* *mmx_uminv8qi3 */
    case 794:  /* *mmx_umaxv8qi3 */
    case 793:  /* *mmx_sminv4hi3 */
    case 792:  /* *mmx_smaxv4hi3 */
    case 786:  /* *mmx_mulv4hi3 */
    case 785:  /* *mmx_ussubv4hi3 */
    case 784:  /* *mmx_sssubv4hi3 */
    case 783:  /* *mmx_usaddv4hi3 */
    case 782:  /* *mmx_ssaddv4hi3 */
    case 781:  /* *mmx_ussubv8qi3 */
    case 780:  /* *mmx_sssubv8qi3 */
    case 779:  /* *mmx_usaddv8qi3 */
    case 778:  /* *mmx_ssaddv8qi3 */
    case 777:  /* *mmx_subv1di3 */
    case 776:  /* *mmx_addv1di3 */
    case 775:  /* *mmx_subv2si3 */
    case 774:  /* *mmx_addv2si3 */
    case 773:  /* *mmx_subv4hi3 */
    case 772:  /* *mmx_addv4hi3 */
    case 771:  /* *mmx_subv8qi3 */
    case 770:  /* *mmx_addv8qi3 */
    case 767:  /* *mmx_concatv2sf */
    case 760:  /* mmx_gev2sf3 */
    case 759:  /* mmx_gtv2sf3 */
    case 758:  /* *mmx_eqv2sf3 */
    case 749:  /* *mmx_sminv2sf3 */
    case 748:  /* *mmx_smaxv2sf3 */
    case 747:  /* *mmx_sminv2sf3_finite */
    case 746:  /* *mmx_smaxv2sf3_finite */
    case 745:  /* *mmx_mulv2sf3 */
    case 744:  /* *mmx_subv2sf3 */
    case 743:  /* *mmx_addv2sf3 */
    case 702:  /* smindf3 */
    case 701:  /* smaxdf3 */
    case 700:  /* sminsf3 */
    case 699:  /* smaxsf3 */
    case 440:  /* *bmi2_rorxsi3_1 */
    case 407:  /* *bmi2_ashrsi3_1 */
    case 406:  /* *bmi2_lshrsi3_1 */
    case 384:  /* *bmi2_ashlsi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 437:  /* *rotrdi3_mask */
    case 436:  /* *rotldi3_mask */
    case 435:  /* *rotrsi3_mask */
    case 434:  /* *rotlsi3_mask */
    case 401:  /* *ashrdi3_mask */
    case 400:  /* *lshrdi3_mask */
    case 399:  /* *ashrsi3_mask */
    case 398:  /* *lshrsi3_mask */
    case 383:  /* *ashldi3_mask */
    case 382:  /* *ashlsi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 404:  /* x86_shrd */
    case 381:  /* x86_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 371:  /* copysigntf3_var */
    case 370:  /* copysigndf3_var */
    case 369:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 1659:  /* *avx_vperm2f128v4df_full */
    case 1658:  /* *avx_vperm2f128v8sf_full */
    case 1657:  /* *avx_vperm2f128v8si_full */
    case 1630:  /* avx2_permv2ti */
    case 1615:  /* pclmulqdq */
    case 1604:  /* xop_pcom_tfv2di3 */
    case 1603:  /* xop_pcom_tfv4si3 */
    case 1602:  /* xop_pcom_tfv8hi3 */
    case 1601:  /* xop_pcom_tfv16qi3 */
    case 1557:  /* xop_pperm */
    case 1466:  /* sse4_1_pblendvb */
    case 1465:  /* avx2_pblendvb */
    case 1462:  /* sse4_1_mpsadbw */
    case 1461:  /* avx2_mpsadbw */
    case 1458:  /* sse4_1_dppd */
    case 1457:  /* avx_dppd256 */
    case 1456:  /* sse4_1_dpps */
    case 1455:  /* avx_dpps256 */
    case 1454:  /* sse4_1_blendvpd */
    case 1453:  /* avx_blendvpd256 */
    case 1452:  /* sse4_1_blendvps */
    case 1451:  /* avx_blendvps256 */
    case 1443:  /* sse4a_extrqi */
    case 1429:  /* ssse3_palignrdi */
    case 1428:  /* ssse3_palignrti */
    case 1427:  /* avx2_palignrv2ti */
    case 1077:  /* *fma_fmaddsub_v2df */
    case 1076:  /* *fma_fmaddsub_v4df */
    case 1075:  /* *fma_fmaddsub_v4sf */
    case 1074:  /* *fma_fmaddsub_v8sf */
    case 1045:  /* *fma4_fmaddsub_v2df */
    case 1044:  /* *fma4_fmaddsub_v4df */
    case 1043:  /* *fma4_fmaddsub_v4sf */
    case 1042:  /* *fma4_fmaddsub_v8sf */
    case 961:  /* avx_cmpv2df3 */
    case 960:  /* avx_cmpv4df3 */
    case 959:  /* avx_cmpv4sf3 */
    case 958:  /* avx_cmpv8sf3 */
    case 368:  /* copysigntf3_const */
    case 367:  /* copysigndf3_const */
    case 366:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 881:  /* *absnegv2df2 */
    case 880:  /* *absnegv4df2 */
    case 879:  /* *absnegv4sf2 */
    case 878:  /* *absnegv8sf2 */
    case 353:  /* *absnegtf2_sse */
    case 352:  /* *absnegxf2_i387 */
    case 351:  /* *absnegdf2_i387 */
    case 350:  /* *absnegsf2_i387 */
    case 349:  /* *absnegdf2_sse */
    case 348:  /* *absnegsf2_sse */
    case 347:  /* *absnegdf2_mixed */
    case 346:  /* *absnegsf2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 538:  /* *popcountdi2_cmp */
    case 537:  /* *popcountsi2_cmp */
    case 536:  /* *popcounthi2_cmp */
    case 379:  /* *one_cmpldi2_2 */
    case 378:  /* *one_cmplsi2_2 */
    case 377:  /* *one_cmplhi2_2 */
    case 376:  /* *one_cmplqi2_2 */
    case 345:  /* *negdi2_cmpz */
    case 344:  /* *negsi2_cmpz */
    case 343:  /* *neghi2_cmpz */
    case 342:  /* *negqi2_cmpz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 335:  /* *xorqi_cc_ext_1 */
    case 298:  /* *andqi_ext_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 320:  /* *xorqi_2_slp */
    case 319:  /* *iorqi_2_slp */
    case 296:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 287:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 286:  /* *testqi_ext_2 */
    case 285:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 284:  /* *testqi_ext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 279:  /* udivmodhiqi3 */
    case 273:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 278:  /* *udivmodsi4_noext */
    case 277:  /* *udivmodhi4_noext */
    case 272:  /* *divmodsi4_noext */
    case 271:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 276:  /* *udivmodsi4 */
    case 275:  /* *udivmodhi4 */
    case 274:  /* udivmodsi4_1 */
    case 270:  /* *divmodsi4 */
    case 269:  /* *divmodhi4 */
    case 268:  /* divmodsi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 267:  /* *umulsi3_highpart_1 */
    case 266:  /* *smulsi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 265:  /* *umulqihi3_1 */
    case 264:  /* *mulqihi3_1 */
    case 263:  /* *mulsidi3_1 */
    case 262:  /* *umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 261:  /* *bmi2_umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 257:  /* *subdi3_cc_overflow */
    case 256:  /* *adddi3_cc_overflow */
    case 255:  /* *subsi3_cc_overflow */
    case 254:  /* *addsi3_cc_overflow */
    case 253:  /* *subhi3_cc_overflow */
    case 252:  /* *addhi3_cc_overflow */
    case 251:  /* *subqi3_cc_overflow */
    case 250:  /* *addqi3_cc_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 249:  /* *subsi3_cconly_overflow */
    case 248:  /* *subhi3_cconly_overflow */
    case 247:  /* *subqi3_cconly_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 246:  /* *addsi3_cconly_overflow */
    case 245:  /* *addhi3_cconly_overflow */
    case 244:  /* *addqi3_cconly_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 243:  /* *subdi3_carry */
    case 242:  /* *adddi3_carry */
    case 241:  /* *subsi3_carry */
    case 240:  /* *addsi3_carry */
    case 239:  /* *subhi3_carry */
    case 238:  /* *addhi3_carry */
    case 237:  /* *subqi3_carry */
    case 236:  /* *addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 235:  /* *subdi_3 */
    case 234:  /* *subsi_3 */
    case 233:  /* *subhi_3 */
    case 232:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 218:  /* *lea_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1519:  /* xop_pmacssdd */
    case 1518:  /* xop_pmacsdd */
    case 1517:  /* xop_pmacssww */
    case 1516:  /* xop_pmacsww */
    case 220:  /* *lea_general_4 */
    case 219:  /* *lea_general_4 */
    case 217:  /* *lea_general_2 */
    case 216:  /* *lea_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 334:  /* *xorqi_ext_2 */
    case 333:  /* *iorqi_ext_2 */
    case 332:  /* *xorqi_ext_1 */
    case 331:  /* *iorqi_ext_1 */
    case 300:  /* *andqi_ext_2 */
    case 299:  /* *andqi_ext_1 */
    case 215:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 330:  /* *xorqi_ext_0 */
    case 329:  /* *iorqi_ext_0 */
    case 297:  /* andqi_ext_0 */
    case 214:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 433:  /* *ashrdi3_cconly */
    case 432:  /* *lshrdi3_cconly */
    case 431:  /* *ashrsi3_cconly */
    case 430:  /* *lshrsi3_cconly */
    case 429:  /* *ashrhi3_cconly */
    case 428:  /* *lshrhi3_cconly */
    case 427:  /* *ashrqi3_cconly */
    case 426:  /* *lshrqi3_cconly */
    case 397:  /* *ashldi3_cconly */
    case 396:  /* *ashlsi3_cconly */
    case 395:  /* *ashlhi3_cconly */
    case 394:  /* *ashlqi3_cconly */
    case 328:  /* *xordi_3 */
    case 327:  /* *iordi_3 */
    case 326:  /* *xorsi_3 */
    case 325:  /* *iorsi_3 */
    case 324:  /* *xorhi_3 */
    case 323:  /* *iorhi_3 */
    case 322:  /* *xorqi_3 */
    case 321:  /* *iorqi_3 */
    case 213:  /* *adddi_5 */
    case 212:  /* *addsi_5 */
    case 211:  /* *addhi_5 */
    case 210:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 206:  /* *adddi_3 */
    case 205:  /* *addsi_3 */
    case 204:  /* *addhi_3 */
    case 203:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 425:  /* *ashrdi3_cmp */
    case 424:  /* *lshrdi3_cmp */
    case 423:  /* *ashrsi3_cmp */
    case 422:  /* *lshrsi3_cmp */
    case 421:  /* *ashrhi3_cmp */
    case 420:  /* *lshrhi3_cmp */
    case 419:  /* *ashrqi3_cmp */
    case 418:  /* *lshrqi3_cmp */
    case 393:  /* *ashldi3_cmp */
    case 392:  /* *ashlsi3_cmp */
    case 391:  /* *ashlhi3_cmp */
    case 390:  /* *ashlqi3_cmp */
    case 318:  /* *xordi_2 */
    case 317:  /* *iordi_2 */
    case 316:  /* *xorsi_2 */
    case 315:  /* *iorsi_2 */
    case 314:  /* *xorhi_2 */
    case 313:  /* *iorhi_2 */
    case 312:  /* *xorqi_2 */
    case 311:  /* *iorqi_2 */
    case 295:  /* *andsi_2 */
    case 294:  /* *andhi_2 */
    case 293:  /* *andqi_2 */
    case 292:  /* *andqi_2_maybe_si */
    case 231:  /* *subdi_2 */
    case 230:  /* *subsi_2 */
    case 229:  /* *subhi_2 */
    case 228:  /* *subqi_2 */
    case 202:  /* *adddi_2 */
    case 201:  /* *addsi_2 */
    case 200:  /* *addhi_2 */
    case 199:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 450:  /* *rotrqi3_1_slp */
    case 449:  /* *rotlqi3_1_slp */
    case 417:  /* *ashrqi3_1_slp */
    case 416:  /* *lshrqi3_1_slp */
    case 389:  /* *ashlqi3_1_slp */
    case 310:  /* *xorqi_1_slp */
    case 309:  /* *iorqi_1_slp */
    case 291:  /* *andqi_1_slp */
    case 227:  /* *subqi_1_slp */
    case 198:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 192:  /* addqi3_cc */
    case 191:  /* *adddi3_cc */
    case 190:  /* *addsi3_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 708:  /* pro_epilogue_adjust_stack_si_sub */
    case 707:  /* pro_epilogue_adjust_stack_si_add */
    case 448:  /* *rotrhi3_1 */
    case 447:  /* *rotlhi3_1 */
    case 446:  /* *rotrqi3_1 */
    case 445:  /* *rotlqi3_1 */
    case 444:  /* *rotrdi3_1 */
    case 443:  /* *rotldi3_1 */
    case 442:  /* *rotrsi3_1 */
    case 441:  /* *rotlsi3_1 */
    case 415:  /* *ashrhi3_1 */
    case 414:  /* *lshrhi3_1 */
    case 413:  /* *ashrqi3_1 */
    case 412:  /* *lshrqi3_1 */
    case 411:  /* *ashrdi3_1 */
    case 410:  /* *lshrdi3_1 */
    case 409:  /* *ashrsi3_1 */
    case 408:  /* *lshrsi3_1 */
    case 405:  /* ashrsi3_cvt */
    case 403:  /* *ashrdi3_doubleword */
    case 402:  /* *lshrdi3_doubleword */
    case 388:  /* *ashlqi3_1 */
    case 387:  /* *ashlhi3_1 */
    case 386:  /* *ashldi3_1 */
    case 385:  /* *ashlsi3_1 */
    case 380:  /* *ashldi3_doubleword */
    case 308:  /* *xorqi_1 */
    case 307:  /* *iorqi_1 */
    case 306:  /* *xordi_1 */
    case 305:  /* *iordi_1 */
    case 304:  /* *xorsi_1 */
    case 303:  /* *iorsi_1 */
    case 302:  /* *xorhi_1 */
    case 301:  /* *iorhi_1 */
    case 290:  /* *andqi_1 */
    case 289:  /* *andhi_1 */
    case 288:  /* *andsi_1 */
    case 260:  /* *mulqi3_1 */
    case 259:  /* *mulhi3_1 */
    case 258:  /* *mulsi3_1 */
    case 226:  /* *subdi_1 */
    case 225:  /* *subsi_1 */
    case 224:  /* *subhi_1 */
    case 223:  /* *subqi_1 */
    case 222:  /* *subti3_doubleword */
    case 221:  /* *subdi3_doubleword */
    case 197:  /* *addqi_1 */
    case 196:  /* *addhi_1 */
    case 195:  /* *adddi_1 */
    case 194:  /* *addsi_1 */
    case 189:  /* *addti3_doubleword */
    case 188:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 184:  /* floatdixf2_i387_with_xmm */
    case 183:  /* floatdidf2_i387_with_xmm */
    case 182:  /* floatdisf2_i387_with_xmm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 128:  /* fix_truncdi_i387_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 132:  /* fix_truncsi_i387_with_temp */
    case 131:  /* fix_trunchi_i387_with_temp */
    case 127:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 187:  /* *floatunssixf2_1 */
    case 186:  /* *floatunssidf2_1 */
    case 185:  /* *floatunssisf2_1 */
    case 130:  /* fix_truncsi_i387 */
    case 129:  /* fix_trunchi_i387 */
    case 123:  /* fix_truncdi_i387_fisttp_with_temp */
    case 122:  /* fix_truncsi_i387_fisttp_with_temp */
    case 121:  /* fix_trunchi_i387_fisttp_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 112:  /* *fixuns_truncdf_1 */
    case 111:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 862:  /* movdi_to_sse */
    case 508:  /* ffssi2_no_cmove */
    case 175:  /* *floatdixf2_i387_with_temp */
    case 174:  /* *floatdidf2_i387_with_temp */
    case 173:  /* *floatdisf2_i387_with_temp */
    case 172:  /* *floatsixf2_i387_with_temp */
    case 171:  /* *floatsidf2_i387_with_temp */
    case 170:  /* *floatsisf2_i387_with_temp */
    case 165:  /* *floatsidf2_sse_with_temp */
    case 164:  /* *floatsisf2_sse_with_temp */
    case 161:  /* *floatsidf2_vector_sse_with_temp */
    case 160:  /* *floatsisf2_vector_sse_with_temp */
    case 155:  /* *floatsidf2_mixed_with_temp */
    case 154:  /* *floatsisf2_mixed_with_temp */
    case 151:  /* *floatsidf2_vector_mixed_with_temp */
    case 150:  /* *floatsisf2_vector_mixed_with_temp */
    case 140:  /* *floathixf2_i387_with_temp */
    case 139:  /* *floathidf2_i387_with_temp */
    case 138:  /* *floathisf2_i387_with_temp */
    case 120:  /* fix_truncdi_i387_fisttp */
    case 119:  /* fix_truncsi_i387_fisttp */
    case 118:  /* fix_trunchi_i387_fisttp */
    case 106:  /* *truncxfdf2_mixed */
    case 105:  /* *truncxfsf2_mixed */
    case 103:  /* *truncdfsf_i387 */
    case 102:  /* *truncdfsf_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 90:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 689:  /* *x86_movsicc_0_m1_se */
    case 688:  /* *x86_movsicc_0_m1 */
    case 535:  /* popcountsi2 */
    case 534:  /* popcounthi2 */
    case 513:  /* clzsi2_lzcnt */
    case 512:  /* clzhi2_lzcnt */
    case 511:  /* ctzsi2 */
    case 510:  /* ctzhi2 */
    case 341:  /* *negdi2_1 */
    case 340:  /* *negsi2_1 */
    case 339:  /* *neghi2_1 */
    case 338:  /* *negqi2_1 */
    case 337:  /* *negti2_doubleword */
    case 336:  /* *negdi2_doubleword */
    case 126:  /* *fix_truncdi_i387_1 */
    case 125:  /* *fix_truncsi_i387_1 */
    case 124:  /* *fix_trunchi_i387_1 */
    case 87:  /* *zero_extendqisi2_movzbl_and */
    case 86:  /* *zero_extendqihi2_movzbl_and */
    case 85:  /* *zero_extendqisi2_and */
    case 84:  /* *zero_extendqihi2_and */
    case 82:  /* zero_extendhisi2_and */
    case 81:  /* zero_extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 68:  /* *movqi_insv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1631:  /* avx2_vec_dupv4df */
    case 1625:  /* avx2_pbroadcastv2di */
    case 1624:  /* avx2_pbroadcastv4di */
    case 1623:  /* avx2_pbroadcastv4si */
    case 1622:  /* avx2_pbroadcastv8si */
    case 1621:  /* avx2_pbroadcastv8hi */
    case 1620:  /* avx2_pbroadcastv16hi */
    case 1619:  /* avx2_pbroadcastv16qi */
    case 1618:  /* avx2_pbroadcastv32qi */
    case 1495:  /* sse4_1_zero_extendv2siv2di2 */
    case 1494:  /* sse4_1_sign_extendv2siv2di2 */
    case 1491:  /* sse4_1_zero_extendv2hiv2di2 */
    case 1490:  /* sse4_1_sign_extendv2hiv2di2 */
    case 1489:  /* avx2_zero_extendv4hiv4di2 */
    case 1488:  /* avx2_sign_extendv4hiv4di2 */
    case 1487:  /* sse4_1_zero_extendv2qiv2di2 */
    case 1486:  /* sse4_1_sign_extendv2qiv2di2 */
    case 1485:  /* avx2_zero_extendv4qiv4di2 */
    case 1484:  /* avx2_sign_extendv4qiv4di2 */
    case 1483:  /* sse4_1_zero_extendv4hiv4si2 */
    case 1482:  /* sse4_1_sign_extendv4hiv4si2 */
    case 1479:  /* sse4_1_zero_extendv4qiv4si2 */
    case 1478:  /* sse4_1_sign_extendv4qiv4si2 */
    case 1477:  /* avx2_zero_extendv8qiv8si2 */
    case 1476:  /* avx2_sign_extendv8qiv8si2 */
    case 1475:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 1474:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 1137:  /* avx2_vec_dupv4sf */
    case 1136:  /* avx2_vec_dupv8sf */
    case 1117:  /* sse2_cvtps2pd */
    case 1116:  /* *avx_cvtps2pd256_2 */
    case 1104:  /* sse2_cvtdq2pd */
    case 1103:  /* avx_cvtdq2pd256_2 */
    case 1101:  /* sse2_cvttsd2si */
    case 1088:  /* sse_cvttss2si */
    case 1084:  /* sse_cvttps2pi */
    case 861:  /* sse2_movq128 */
    case 835:  /* *vec_dupv4hi */
    case 598:  /* sqrt_extenddfxf2_i387 */
    case 597:  /* sqrt_extendsfxf2_i387 */
    case 365:  /* *negextenddfxf2 */
    case 364:  /* *absextenddfxf2 */
    case 363:  /* *negextendsfxf2 */
    case 362:  /* *absextendsfxf2 */
    case 361:  /* *negextendsfdf2 */
    case 360:  /* *absextendsfdf2 */
    case 66:  /* *movqi_extzv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1635:  /* vec_dupv4df */
    case 1634:  /* vec_dupv4di */
    case 1633:  /* vec_dupv8sf */
    case 1632:  /* vec_dupv8si */
    case 1493:  /* avx2_zero_extendv4siv4di2 */
    case 1492:  /* avx2_sign_extendv4siv4di2 */
    case 1481:  /* avx2_zero_extendv8hiv8si2 */
    case 1480:  /* avx2_sign_extendv8hiv8si2 */
    case 1473:  /* avx2_zero_extendv16qiv16hi2 */
    case 1472:  /* avx2_sign_extendv16qiv16hi2 */
    case 1438:  /* absv2si2 */
    case 1437:  /* absv4hi2 */
    case 1436:  /* absv8qi2 */
    case 1435:  /* absv4si2 */
    case 1434:  /* absv8si2 */
    case 1433:  /* absv8hi2 */
    case 1432:  /* absv16hi2 */
    case 1431:  /* absv16qi2 */
    case 1430:  /* absv32qi2 */
    case 1367:  /* *vec_dupv2di */
    case 1366:  /* *vec_dupv4si */
    case 1365:  /* *vec_extractv2di_1 */
    case 1364:  /* *sse2_storeq */
    case 1362:  /* sse2_stored */
    case 1179:  /* vec_dupv2df */
    case 1175:  /* *vec_extractv2df_0_sse */
    case 1174:  /* sse2_storelpd */
    case 1173:  /* *vec_extractv2df_1_sse */
    case 1172:  /* sse2_storehpd */
    case 1160:  /* vec_extract_hi_v32qi */
    case 1159:  /* vec_extract_lo_v32qi */
    case 1158:  /* vec_extract_hi_v16hi */
    case 1157:  /* vec_extract_lo_v16hi */
    case 1156:  /* vec_extract_hi_v8sf */
    case 1155:  /* vec_extract_hi_v8si */
    case 1154:  /* vec_extract_lo_v8sf */
    case 1153:  /* vec_extract_lo_v8si */
    case 1152:  /* vec_extract_hi_v4df */
    case 1151:  /* vec_extract_hi_v4di */
    case 1150:  /* vec_extract_lo_v4df */
    case 1149:  /* vec_extract_lo_v4di */
    case 1146:  /* *vec_extractv4sf_0 */
    case 1138:  /* vec_dupv4sf */
    case 1133:  /* sse_storelps */
    case 1131:  /* sse_storehps */
    case 1115:  /* avx_cvtps2pd256 */
    case 1113:  /* avx_cvtpd2ps256 */
    case 1108:  /* fix_truncv4dfv4si2 */
    case 1102:  /* floatv4siv4df2 */
    case 1097:  /* sse2_cvttpd2pi */
    case 1095:  /* sse2_cvtpi2pd */
    case 1094:  /* fix_truncv4sfv4si2 */
    case 1093:  /* fix_truncv8sfv8si2 */
    case 1090:  /* floatv4siv4sf2 */
    case 1089:  /* floatv8siv8sf2 */
    case 912:  /* sse2_sqrtv2df2 */
    case 911:  /* avx_sqrtv4df2 */
    case 910:  /* sse_sqrtv4sf2 */
    case 909:  /* avx_sqrtv8sf2 */
    case 839:  /* *vec_extractv2si_1 */
    case 838:  /* *vec_extractv2si_0 */
    case 836:  /* *vec_dupv2si */
    case 834:  /* mmx_pswapdv2si2 */
    case 769:  /* *vec_extractv2sf_1 */
    case 768:  /* *vec_extractv2sf_0 */
    case 766:  /* *vec_dupv2sf */
    case 765:  /* mmx_pswapdv2sf2 */
    case 764:  /* mmx_floatv2si2 */
    case 761:  /* mmx_pf2id */
    case 690:  /* *x86_movsicc_0_m1_neg */
    case 601:  /* *sqrtdf2_sse */
    case 600:  /* *sqrtsf2_sse */
    case 596:  /* sqrtxf2 */
    case 540:  /* *bswapsi2_1 */
    case 539:  /* *bswapsi2_movbe */
    case 375:  /* *one_cmplqi2_1 */
    case 374:  /* *one_cmpldi2_1 */
    case 373:  /* *one_cmplsi2_1 */
    case 372:  /* *one_cmplhi2_1 */
    case 359:  /* *negxf2_1 */
    case 358:  /* *absxf2_1 */
    case 357:  /* *negdf2_1 */
    case 356:  /* *absdf2_1 */
    case 355:  /* *negsf2_1 */
    case 354:  /* *abssf2_1 */
    case 181:  /* *floatdixf2_i387 */
    case 180:  /* *floatdidf2_i387 */
    case 179:  /* *floatdisf2_i387 */
    case 178:  /* *floatsixf2_i387 */
    case 177:  /* *floatsidf2_i387 */
    case 176:  /* *floatsisf2_i387 */
    case 169:  /* *floatsidf2_sse_nointerunit */
    case 168:  /* *floatsisf2_sse_nointerunit */
    case 167:  /* *floatsidf2_sse_interunit */
    case 166:  /* *floatsisf2_sse_interunit */
    case 163:  /* *floatsidf2_vector_sse */
    case 162:  /* *floatsisf2_vector_sse */
    case 159:  /* *floatsidf2_mixed_nointerunit */
    case 158:  /* *floatsisf2_mixed_nointerunit */
    case 157:  /* *floatsidf2_mixed_interunit */
    case 156:  /* *floatsisf2_mixed_interunit */
    case 153:  /* *floatsidf2_vector_mixed */
    case 152:  /* *floatsisf2_vector_mixed */
    case 149:  /* *floatdixf2_1 */
    case 148:  /* *floatdidf2_1 */
    case 147:  /* *floatdisf2_1 */
    case 146:  /* *floatsixf2_1 */
    case 145:  /* *floatsidf2_1 */
    case 144:  /* *floatsisf2_1 */
    case 143:  /* *floathixf2_i387 */
    case 142:  /* *floathidf2_i387 */
    case 141:  /* *floathisf2_i387 */
    case 137:  /* *floathixf2_1 */
    case 136:  /* *floathidf2_1 */
    case 135:  /* *floathisf2_1 */
    case 117:  /* fix_truncdi_fisttp_i387_1 */
    case 116:  /* fix_truncsi_fisttp_i387_1 */
    case 115:  /* fix_trunchi_fisttp_i387_1 */
    case 114:  /* fix_truncdfsi_sse */
    case 113:  /* fix_truncsfsi_sse */
    case 110:  /* *truncxfdf2_i387 */
    case 109:  /* *truncxfsf2_i387 */
    case 108:  /* truncxfdf2_i387_noop */
    case 107:  /* truncxfsf2_i387_noop */
    case 104:  /* *truncdfsf2_i387_1 */
    case 101:  /* *truncdfsf_fast_i387 */
    case 100:  /* *truncdfsf_fast_sse */
    case 99:  /* *truncdfsf_fast_mixed */
    case 98:  /* *extenddfxf2_i387 */
    case 97:  /* *extendsfxf2_i387 */
    case 96:  /* *extendsfdf2_i387 */
    case 95:  /* *extendsfdf2_sse */
    case 94:  /* *extendsfdf2_mixed */
    case 93:  /* extendqihi2 */
    case 92:  /* extendqisi2 */
    case 91:  /* extendhisi2 */
    case 89:  /* *zero_extendqisi2_movzbl */
    case 88:  /* *zero_extendqihi2_movzbl */
    case 83:  /* *zero_extendhisi2_movzwl */
    case 65:  /* *movsi_extzv_1 */
    case 64:  /* *movqi_extv_1 */
    case 63:  /* *movsi_extv_1 */
    case 62:  /* *movhi_extv_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 61:  /* *movstricthi_xor */
    case 60:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 480:  /* *sibcall */
    case 478:  /* *call */
    case 456:  /* *setcc_qi_slp */
    case 67:  /* *movsi_insv_1 */
    case 59:  /* *movstricthi_1 */
    case 58:  /* *movstrictqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 80:  /* *swapdf */
    case 79:  /* *swapsf */
    case 78:  /* swapxf */
    case 57:  /* *swaphi_2 */
    case 56:  /* *swapqi_2 */
    case 55:  /* *swaphi_1 */
    case 54:  /* *swapqi_1 */
    case 53:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 453:  /* *setcc_si_1_and */
    case 46:  /* *movsi_or */
    case 45:  /* *movsi_xor */
    case 44:  /* *popsi1_epilogue */
    case 42:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 860:  /* *movv2df_internal */
    case 859:  /* *movv4df_internal */
    case 858:  /* *movv4sf_internal */
    case 857:  /* *movv8sf_internal */
    case 856:  /* *movv1ti_internal */
    case 855:  /* *movv2ti_internal */
    case 854:  /* *movv2di_internal */
    case 853:  /* *movv4di_internal */
    case 852:  /* *movv4si_internal */
    case 851:  /* *movv8si_internal */
    case 850:  /* *movv8hi_internal */
    case 849:  /* *movv16hi_internal */
    case 848:  /* *movv16qi_internal */
    case 847:  /* *movv32qi_internal */
    case 741:  /* *movv2sf_internal */
    case 740:  /* *movv1di_internal */
    case 739:  /* *movv2si_internal */
    case 738:  /* *movv4hi_internal */
    case 737:  /* *movv8qi_internal */
    case 715:  /* *prefetch_3dnow_si */
    case 455:  /* *setcc_qi */
    case 454:  /* *setcc_si_1_movzbl */
    case 193:  /* *leasi_2 */
    case 77:  /* *movsf_internal */
    case 76:  /* *movdf_internal */
    case 75:  /* *movxf_internal */
    case 74:  /* *movtf_internal */
    case 73:  /* *pushsf */
    case 72:  /* *pushdf */
    case 71:  /* *pushxf_nointeger */
    case 70:  /* *pushxf */
    case 69:  /* *pushtf */
    case 52:  /* *movqi_internal */
    case 51:  /* *movhi_internal */
    case 50:  /* *movsi_internal */
    case 49:  /* *movdi_internal */
    case 48:  /* *movti_internal_sse */
    case 47:  /* *movoi_internal_avx */
    case 43:  /* *popsi1 */
    case 41:  /* *pushhi2 */
    case 40:  /* *pushqi2 */
    case 39:  /* *pushsi2 */
    case 38:  /* *pushdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 134:  /* x86_fldcw_1 */
    case 31:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1387:  /* sse_stmxcsr */
    case 731:  /* lwp_slwpcbsi */
    case 728:  /* *rdtsc */
    case 551:  /* *load_tp_si */
    case 550:  /* *load_tp_x32_zext */
    case 549:  /* *load_tp_x32 */
    case 133:  /* x86_fnstcw_1 */
    case 30:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 29:  /* *cmpfp_si_cc */
    case 28:  /* *cmpfp_hi_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 27:  /* *cmpfp_si */
    case 26:  /* *cmpfp_hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 209:  /* *addsi_4 */
    case 208:  /* *addhi_4 */
    case 207:  /* *addqi_4 */
    case 25:  /* *cmpfp_u_cc */
    case 23:  /* *cmpfp_df_cc */
    case 22:  /* *cmpfp_sf_cc */
    case 19:  /* *cmpfp_xf_cc */
    case 17:  /* *cmpfp_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 24:  /* *cmpfp_u */
    case 21:  /* *cmpfp_df */
    case 20:  /* *cmpfp_sf */
    case 18:  /* *cmpfp_xf */
    case 16:  /* *cmpfp_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 15:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 14:  /* *cmpqi_ext_3_insn */
    case 13:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 12:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 283:  /* *testsi_1 */
    case 282:  /* *testhi_1 */
    case 281:  /* *testqi_1 */
    case 280:  /* *testqi_1_maybe_si */
    case 11:  /* *cmpdi_minus_1 */
    case 10:  /* *cmpsi_minus_1 */
    case 9:  /* *cmphi_minus_1 */
    case 8:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 37:  /* *cmpfp_iu_387 */
    case 36:  /* *cmpfp_iu_sse */
    case 35:  /* *cmpfp_iu_mixed */
    case 34:  /* *cmpfp_i_i387 */
    case 33:  /* *cmpfp_i_sse */
    case 32:  /* *cmpfp_i_mixed */
    case 7:  /* *cmpdi_1 */
    case 6:  /* *cmpsi_1 */
    case 5:  /* *cmphi_1 */
    case 4:  /* *cmpqi_1 */
    case 3:  /* *cmpdi_ccno_1 */
    case 2:  /* *cmpsi_ccno_1 */
    case 1:  /* *cmphi_ccno_1 */
    case 0:  /* *cmpqi_ccno_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
