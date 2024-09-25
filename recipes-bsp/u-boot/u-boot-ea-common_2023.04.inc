# Copyright (C) 2023 Embedded Artists

DESCRIPTION = "U-Boot for Embedded Artists i.MX based boards."

DEPENDS += "flex-native bison-native"

LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://Licenses/gpl-2.0.txt;md5=b234ee4d69f5fce4486a80fdaf4a4263"

SRCBRANCH = "ea_v2023.04"
SRC_URI = "git://github.com/embeddedartists/uboot-imx.git;protocol=https;branch=${SRCBRANCH}"
SRCREV = "68c8cf9fcd9ff2674b616ffe8d5eeacdd4c8d18d"

S = "${WORKDIR}/git"

inherit fsl-u-boot-localversion

LOCALVERSION ?= "-${SRCBRANCH}"

PACKAGE_ARCH = "${MACHINE_ARCH}"

