DEVICE_READ32(PCOUNTER)
{
	DEVICE_READ32_SWITCH() {
	default:
		DEBUG_READ32_UNHANDLED(PCOUNTER); // TODO : DEVICE_READ32_REG(pcounter);
		break;
	}

	DEVICE_READ32_END(PCOUNTER);
}

DEVICE_WRITE32(PCOUNTER)
{
	switch (addr) {
	default:
		DEBUG_WRITE32_UNHANDLED(PCOUNTER); // TODO : DEVICE_WRITE32_REG(pcounter);
		break;
	}

	DEVICE_WRITE32_END(PCOUNTER);
}
