#include <stdio.h>

// Web meta generator for SEO
// �� ��Ÿ �ۼ� ���α׷��Դϴ�. �˻����� ����ȭ (SEO)�� ������ �ݴϴ�.
// ������ : jiwonrom (https://jiwonrom.org)
// ����   : 1.0.0

int main(void)
{
	FILE *f;
	char title[30];
	char subtitle[30];
	char author[30];
	char url[100];
	char image[300];
	char keyword[300];
	char description[300];

	f = fopen("result.txt", "w");

	printf("������ �Է��ϼ���: ");
	gets(title);
	printf("�������� �Է��ϼ���: ");
	gets(subtitle);
	printf("���ڸ� �Է��ϼ���: ");
	gets(author);
	printf("url�� �Է��ϼ���: ");
	gets(url);
	printf("�̹��� ��θ� �Է��ϼ���: ");
	gets(image);
	printf("Ű���带 �Է��ϼ���: ");
	gets(keyword);
	printf("������ �Է��ϼ���: ");
	gets(description);

	fprintf(f, "<title>%s | %s</title>\n", title, subtitle);
	fprintf(f, "<meta name = \"description\"content = \"%s,%s,%s\">\n", description, title, subtitle);
	fprintf(f, "<meta name = \"keywords\" content = \"%s,%s,%s\">\n", keyword, title, subtitle);
	fprintf(f, "<meta name = \"author\" content = \"%s\">\n", author);
	fprintf(f, "<meta property = \"og:title\" content = \"%s | %s\"\n", title, subtitle);
	fprintf(f, "<meta property = \"og:url\" content = \"%s\"\n", url);
	fprintf(f, "<meta property = \"og:image\" content = \"%s\"\n", image);
	fprintf(f, "<meta property = \"og:description\" content = \"%s,%s,%s\"\n", description, title, subtitle);
	fprintf(f, "<meta property = \"og:locale\" content = \"ko_KR\"\n");
	fprintf(f, "<meta property = \"og:site_name\" content = \"%s\"", title);
	fprintf(f, "<meta name = \"twitter:card\" content = \"summary\">\n");
	fprintf(f, "<meta name = \"twitter:site\" content = \"%s\">\n", title);
	fprintf(f, "<meta name = \"twitter:title\" content = \"%s | %s\"\n", title, subtitle);
	fprintf(f, "<meta name = \"twitter:description\" content = \"%s,%s,%s\"\n", description, title, subtitle);
	fprintf(f, "<meta name = \"twitter:image\" content = \"%s\"\n", image);
	fprintf(f, "<link rel = \"canonical\" href = \"%s\">\n", url);

	fclose(f);
}