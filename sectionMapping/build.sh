gcc -static sectionMapping.c -o SectionMapping.elf
readelf -S SectionMapping.elf
readelf -l SectionMapping.elf
