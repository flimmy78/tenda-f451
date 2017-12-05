/*
 *  Template MIB group interface - ipv6.h
 *
 */

#ifndef _MIBGROUP_IPV6_H
#define _MIBGROUP_IPV6_H

#ifdef linux
struct ip6_mib {
    unsigned long   Ipv6DefaultHopLimit;
    unsigned long   Ipv6Forwarding;
};
#endif

config_require(mibII/interfaces mibII/at mibII/var_route mibII/route_write)
config_add_mib(IPV6-ICMP-MIB:IPV6-MIB:IPV6-TCP-MIB:IPV6-UDP-MIB)
config_arch_require(solaris2, kernel_sunos5)
#include "var_route.h"
#include "route_write.h"
extern void     init_ipv6(void);
extern FindVarMethod var_ipv6;
extern FindVarMethod var_ifv6Entry;
extern FindVarMethod var_icmpv6Entry;
extern FindVarMethod var_udp6;
extern FindVarMethod var_tcp6;

#include "at.h"                 /* for var_atEntry() */

#define IPV6FORWARDING		1
#define IPV6DEFAULTHOPLIMIT	2
#define IPV6INTERFACES		3
#define IPV6IFTBLLASTCHG	4

#define IPV6IFDESCR		2
#define IPV6IFLOWLAYER		3
#define IPV6IFEFFECTMTU		4
#define IPV6IFREASMMAXSIZE	5
#define IPV6IFTOKEN		6
#define IPV6IFTOKENLEN		7
#define IPV6IFPHYSADDRESS	8
#define IPV6IFADMSTATUS		9
#define IPV6IFOPERSTATUS	10
#define IPV6IFLASTCHANGE	11

#define IPV6IFSTATSINRCVS	12
#define IPV6IFSTATSINHDRERRS	13
#define IPV6IFSTATSTOOBIGERRS	14
#define IPV6IFSTATSINNOROUTES	15
#define IPV6IFSTATSINADDRERRS	16
#define IPV6IFSTATSINUNKNOWPROTS	17
#define IPV6IFSTATSINTRUNCATPKTS	18
#define IPV6IFSTATSINDISCARDS	19
#define IPV6IFSTATSINDELIVERS	20
#define IPV6IFSTATSOUTFORWDATAS	21
#define IPV6IFSTATSOUTREQS	22
#define IPV6IFSTATSOUTDISCARDS	23
#define IPV6IFSTATSOUTFRAGOKS	24
#define IPV6IFSTATSOUTFRAGFAILS	25
#define IPV6IFSTATSOUTFRAGCREATS	26
#define IPV6IFSTATSOUTREASMREQS	27
#define IPV6IFSTATSOUTREASMOKS	28
#define IPV6IFSTATSOUTREASMFAILS	29
#define IPV6IFSTATSINMCASTPKTS	30
#define IPV6IFSTATSOUTMCASTPKTS	31

#define IPV6ADDRPREFIXONLINKFLG	3
#define IPV6ADDRPREFIXAUTONOMOUSFLAG	4
#define IPV6ADDRPREFIXADVPREFERLIFE	5
#define IPV6ADDRPREFIXVALIDLIFE	6

#define IPV6ADDRPFXLEN		7
#define IPV6ADDRTYPE		8
#define IPV6ADDRANYCASTFLAG	9
#define IPV6ADDRSTATUS		10

#define IPV6INSTALLEDROUTES	5
#define IPV6DISCARDEDROUTES	6

#define IPV6ROUTEIFINDEX	4
#define IPV6ROUTENEXTHOP	5
#define IPV6ROUTETYPE		6
#define IPV6ROUTEPROTOCOL	7
#define IPV6ROUTEPOLICY		8
#define IPV6ROUTEAGE		9
#define IPV6ROUTENEXTHOPRDI	10
#define IPV6ROUTEMETRIC		11
#define IPV6ROUTEWEIGHT		12
#define IPV6ROUTEINFO		13
#define IPV6ROUTEVALID		14

#define IPV6NETTOMEDIAPHYADDR	2
#define IPV6NETTOMEDIATYPE	3
#define IPV6NETTOMEDIASTATE	4
#define IPV6NETTOMEDIALASTUPDATE	5
#define IPV6NETTOMEDIAVALID	6

#define IPV6IFICMPINMSG		1
#define IPV6IFICMPINERRORS	2
#define IPV6IFICMPINDSTUNRCHS	3
#define IPV6IFICMPINADMPROHS	4
#define IPV6IFICMPINTIMEXCDS	5
#define IPV6IFICMPINPARMPROBS	6
#define IPV6IFICMPINPKTTOOBIGS	7
#define IPV6IFICMPINECHOS	8
#define IPV6IFICMPINECHOREPS	9
#define IPV6IFICMPINRTRSLICITS	10
#define IPV6IFICMPINRTRADVS	11
#define IPV6IFICMPINNBRSLICITS	12
#define IPV6IFICMPINNBRADVS	13
#define IPV6IFICMPINREDIRECTS	14
#define IPV6IFICMPINGRPMEQERYS	15
#define IPV6IFICMPINGRPMERSPS	16
#define IPV6IFICMPINGRPMEREDCS	17
#define IPV6IFICMPOUTMSG	18
#define IPV6IFICMPOUTERRORS	19
#define IPV6IFICMPOUTDSTUNRCHS	20
#define IPV6IFICMPOUTADMPROHS	21
#define IPV6IFICMPOUTTIMEXCDS	22
#define IPV6IFICMPOUTPARMPROBS	23
#define IPV6IFICMPOUTPKTTOOBIGS	24
#define IPV6IFICMPOUTECHOS	25
#define IPV6IFICMPOUTECHOREPS	26
#define IPV6IFICMPOUTRTRSLICITS	27
#define IPV6IFICMPOUTRTRADVS	28
#define IPV6IFICMPOUTNBRSLICITS	29
#define IPV6IFICMPOUTNBRADVS	30
#define IPV6IFICMPOUTREDIRECTS	31
#define IPV6IFICMPOUTGRPMEQERYS	32
#define IPV6IFICMPOUTGRPMERSPS	33
#define IPV6IFICMPOUTGRPMEREDCS	34

#define IPV6UDPLOCALADDRESS	1
#define IPV6UDPLOCALPORT	2
#define IPV6UDPIFINDEX		3

#define IPV6TCPLOCALADDR	1
#define IPV6TCPLOCALPORT	2
#define IPV6TCPREMOTEADDR	3
#define IPV6TCPREMOTEPORT	4
#define IPV6TCPIFINDEX		5
#define IPV6TCPCONNSTATE	6

#endif                          /* _MIBGROUP_IPV6_H */