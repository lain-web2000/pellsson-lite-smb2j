MMC3_BankSelect		  = $8000
MMC3_BankData		  = $8001
MMC3_Mirroring		  = $a000
MMC3_PRGRAMProtect    = $a001

MMC3_IRQLatch		  = $c000
MMC3_IRQReload		  = $c001
MMC3_IRQDisable		  = $e000
MMC3_IRQEnable		  = $e001

.macro lsr_by n
	.repeat n, i
		lsr
	.endrep
.endmacro

.macro DoUpdateSockHash
		.local @dont_render
		lda WRAM_PracticeFlags
		and #PF_SockMode
		beq @dont_render
		lda IntervalTimerControl
		and #3
		cmp #2
		bne @dont_render
		jsr Enter_ForceUpdateSockHash
	@dont_render:
.endmacro
