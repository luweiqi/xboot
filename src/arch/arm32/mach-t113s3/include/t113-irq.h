#ifndef __T113_IRQ_H__
#define __T113_IRQ_H__

#ifdef __cplusplus
extern "C" {
#endif

#define T113_IRQ_UART0				(34)
#define T113_IRQ_UART1				(35)
#define T113_IRQ_UART2				(36)
#define T113_IRQ_UART3				(37)
#define T113_IRQ_UART4				(38)
#define T113_IRQ_UART5				(39)
#define T113_IRQ_TWI0				(41)
#define T113_IRQ_TWI1				(42)
#define T113_IRQ_TWI2				(43)
#define T113_IRQ_TWI3				(44)
#define T113_IRQ_SPI0				(47)
#define T113_IRQ_SPI1				(48)
#define T113_IRQ_PWM				(50)
#define T113_IRQ_IR_TX				(51)
#define T113_IRQ_LEDC				(52)
#define T113_IRQ_OWA				(55)
#define T113_IRQ_DMIC				(56)
#define T113_IRQ_AUDIO_CODEC		(57)
#define T113_IRQ_I2S0				(58)
#define T113_IRQ_I2S1				(59)
#define T113_IRQ_I2S2				(60)
#define T113_IRQ_USB0_DEVICE		(61)
#define T113_IRQ_USB0_EHCI			(62)
#define T113_IRQ_USB0_OHCI			(63)
#define T113_IRQ_USB1_EHCI			(65)
#define T113_IRQ_USB1_OHCI			(66)
#define T113_IRQ_SMHC0				(72)
#define T113_IRQ_SMHC1				(73)
#define T113_IRQ_SMHC2				(74)
#define T113_IRQ_MSI				(75)
#define T113_IRQ_SMC				(76)
#define T113_IRQ_EMAC				(78)
#define T113_IRQ_TZMA_ERR			(79)
#define T113_IRQ_ECCU_FERR			(80)
#define T113_IRQ_AHB_TIMEOUT		(81)
#define T113_IRQ_DMAC_NS			(82)
#define T113_IRQ_DMAC_S				(83)
#define T113_IRQ_CE_NS				(84)
#define T113_IRQ_CE_S				(85)
#define T113_IRQ_SPINLOCK			(86)
#define T113_IRQ_HSTIME0			(87)
#define T113_IRQ_HSTIME1			(88)
#define T113_IRQ_GPADC				(89)
#define T113_IRQ_THS				(90)
#define T113_IRQ_TIMER0				(91)
#define T113_IRQ_TIMER1				(92)
#define T113_IRQ_LRADC				(93)
#define T113_IRQ_TPADC				(94)
#define T113_IRQ_WATCHDOG			(95)
#define T113_IRQ_IOMMU				(96)
#define T113_IRQ_VE					(98)
#define T113_IRQ_GPIOB_NS			(101)
#define T113_IRQ_GPIOB_S			(102)
#define T113_IRQ_GPIOC_NS			(103)
#define T113_IRQ_GPIOC_S			(104)
#define T113_IRQ_GPIOD_NS			(105)
#define T113_IRQ_GPIOD_S			(106)
#define T113_IRQ_GPIOE_NS			(107)
#define T113_IRQ_GPIOE_S			(108)
#define T113_IRQ_GPIOF_NS			(109)
#define T113_IRQ_GPIOF_S			(110)
#define T113_IRQ_GPIOG_NS			(111)
#define T113_IRQ_DE					(119)
#define T113_IRQ_DI					(120)
#define T113_IRQ_G2D				(121)
#define T113_IRQ_LCD				(122)
#define T113_IRQ_TV					(123)
#define T113_IRQ_DSI				(124)
#define T113_IRQ_CSI_DMA0			(127)
#define T113_IRQ_CSI_DMA1			(128)
#define T113_IRQ_CSI_PARSER0		(132)
#define T113_IRQ_CSI_TOP_PKT		(138)
#define T113_IRQ_TVD				(139)
#define T113_IRQ_DSP_DFE			(152)
#define T113_IRQ_DSP_PFE			(153)
#define T113_IRQ_DSP_WDG			(154)
#define T113_IRQ_DSP_MBOX_RISCV_W	(155)
#define T113_IRQ_DSP_TZMA			(157)
#define T113_IRQ_NMI				(168)
#define T113_IRQ_PPU				(169)
#define T113_IRQ_TWD				(170)
#define T113_IRQ_TIMER0				(172)
#define T113_IRQ_TIMER1				(173)
#define T113_IRQ_TIMER2				(174)
#define T113_IRQ_TIMER3				(175)
#define T113_IRQ_ALARM0				(176)
#define T113_IRQ_IRRX				(183)
#define T113_IRQ_C0_CTI0			(192)
#define T113_IRQ_C0_CTI1			(193)
#define T113_IRQ_C0_COMMTX0			(196)
#define T113_IRQ_C0_COMMTX1			(197)
#define T113_IRQ_C0_COMMRX0			(200)
#define T113_IRQ_C0_COMMRX1			(201)
#define T113_IRQ_C0_PMU0			(204)
#define T113_IRQ_C0_PMU1			(205)
#define T113_IRQ_C0_AXI_ERROR		(208)
#define T113_IRQ_AXI_WR_IRQ			(210)
#define T113_IRQ_AXI_RD_IRQ			(211)
#define T113_IRQ_DBGWRUPREQ_OUT0	(212)
#define T113_IRQ_DBGWRUPREQ_OUT1	(213)

#define T113_IRQ_GPIOB2				(256 + 2)
#define T113_IRQ_GPIOB3				(256 + 3)
#define T113_IRQ_GPIOB4				(256 + 4)
#define T113_IRQ_GPIOB5				(256 + 5)
#define T113_IRQ_GPIOB6				(256 + 6)
#define T113_IRQ_GPIOB7				(256 + 7)

#define T113_IRQ_GPIOC2				(288 + 2)
#define T113_IRQ_GPIOC3				(288 + 3)
#define T113_IRQ_GPIOC4				(288 + 4)
#define T113_IRQ_GPIOC5				(288 + 5)
#define T113_IRQ_GPIOC6				(288 + 6)
#define T113_IRQ_GPIOC7				(288 + 7)

#define T113_IRQ_GPIOD0				(320 + 0)
#define T113_IRQ_GPIOD1				(320 + 1)
#define T113_IRQ_GPIOD2				(320 + 2)
#define T113_IRQ_GPIOD3				(320 + 3)
#define T113_IRQ_GPIOD4				(320 + 4)
#define T113_IRQ_GPIOD5				(320 + 5)
#define T113_IRQ_GPIOD6				(320 + 6)
#define T113_IRQ_GPIOD7				(320 + 7)
#define T113_IRQ_GPIOD8				(320 + 8)
#define T113_IRQ_GPIOD9				(320 + 9)
#define T113_IRQ_GPIOD10			(320 + 10)
#define T113_IRQ_GPIOD11			(320 + 11)
#define T113_IRQ_GPIOD12			(320 + 12)
#define T113_IRQ_GPIOD13			(320 + 13)
#define T113_IRQ_GPIOD14			(320 + 14)
#define T113_IRQ_GPIOD15			(320 + 15)
#define T113_IRQ_GPIOD16			(320 + 16)
#define T113_IRQ_GPIOD17			(320 + 17)
#define T113_IRQ_GPIOD18			(320 + 18)
#define T113_IRQ_GPIOD19			(320 + 19)
#define T113_IRQ_GPIOD20			(320 + 20)
#define T113_IRQ_GPIOD21			(320 + 21)
#define T113_IRQ_GPIOD22			(320 + 22)

#define T113_IRQ_GPIOE0				(352 + 0)
#define T113_IRQ_GPIOE1				(352 + 1)
#define T113_IRQ_GPIOE2				(352 + 2)
#define T113_IRQ_GPIOE3				(352 + 3)
#define T113_IRQ_GPIOE4				(352 + 4)
#define T113_IRQ_GPIOE5				(352 + 5)
#define T113_IRQ_GPIOE6				(352 + 6)
#define T113_IRQ_GPIOE7				(352 + 7)
#define T113_IRQ_GPIOE8				(352 + 8)
#define T113_IRQ_GPIOE9				(352 + 9)
#define T113_IRQ_GPIOE10			(352 + 10)
#define T113_IRQ_GPIOE11			(352 + 11)
#define T113_IRQ_GPIOE12			(352 + 12)
#define T113_IRQ_GPIOE13			(352 + 13)

#define T113_IRQ_GPIOF0				(384 + 0)
#define T113_IRQ_GPIOF1				(384 + 1)
#define T113_IRQ_GPIOF2				(384 + 2)
#define T113_IRQ_GPIOF3				(384 + 3)
#define T113_IRQ_GPIOF4				(384 + 4)
#define T113_IRQ_GPIOF5				(384 + 5)
#define T113_IRQ_GPIOF6				(384 + 6)

#define T113_IRQ_GPIOG0				(416 + 0)
#define T113_IRQ_GPIOG1				(416 + 1)
#define T113_IRQ_GPIOG2				(416 + 2)
#define T113_IRQ_GPIOG3				(416 + 3)
#define T113_IRQ_GPIOG4				(416 + 4)
#define T113_IRQ_GPIOG5				(416 + 5)
#define T113_IRQ_GPIOG6				(416 + 6)
#define T113_IRQ_GPIOG7				(416 + 7)
#define T113_IRQ_GPIOG8				(416 + 8)
#define T113_IRQ_GPIOG9				(416 + 9)
#define T113_IRQ_GPIOG10			(416 + 10)
#define T113_IRQ_GPIOG11			(416 + 11)
#define T113_IRQ_GPIOG12			(416 + 12)
#define T113_IRQ_GPIOG13			(416 + 13)
#define T113_IRQ_GPIOG14			(416 + 14)
#define T113_IRQ_GPIOG15			(416 + 15)

#ifdef __cplusplus
}
#endif

#endif /* __T113_IRQ_H__ */
