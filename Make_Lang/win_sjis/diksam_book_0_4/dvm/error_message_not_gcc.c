#include <string.h>
#include "dvm_pri.h"

DVM_ErrorDefinition dvm_error_message_format[] = {
    {"dummy"},
    {"�s���ȃ}���`�o�C�g�����ł��B"},
    {"�֐�$(name)�����t����܂���B"},
    {"�֐�$(package)#$(name)���d����`����Ă��܂��B"},
    {"�z��͈̔̓G���[�B�T�C�Y$(size)�̔z���$(index)���A�N�Z�X���Ă��܂��B"},
    {"�����l���[���ŏ��Z���Ă��܂��B"},
    {"null���Q�Ƃ��Ă��܂��B"},
    {"���[�h����t�@�C�������t����܂���$(file)"},
    {"�t�@�C���̃��[�h�ŃG���[���������܂���($(status))�B"},
    {"�N���X$(package)#$(name)���d����`����Ă��܂��B"},
    {"�N���X$(name)�����t����܂���B"},
    {"���̃I�u�W�F�N�g�̃N���X��$(org)�ł��B"
     "$(target)�Ƀ_�E���L���X�g�͂ł��܂���B"},
    {"�񋓌^$(package)#$(name)���d����`����Ă��܂��B"},
    {"�萔$(package)#$(name)���d����`����Ă��܂��B"},
    {"�֐�$(name)�ɂ̓p�b�P�[�W�w�肪�Ȃ��̂Ń_�C�i�~�b�N���[�h�ł��܂���B"},
    {"dummy"}
};

DVM_ErrorDefinition dvm_native_error_message_format[] = {
    {"�z��͈̔̓G���[�B�T�C�Y$(size)�̔z���$(pos)��"
     "insert���悤�Ƃ��Ă��܂��B"},
    {"�z��͈̔̓G���[�B�T�C�Y$(size)�̔z���$(pos)��"
     "remove���悤�Ƃ��Ă��܂��B"},
    {"�����񒆂̈ʒu�w�肪�͈͊O�ł��B"
     "����$(len)�̕�����ɑ΂�$(pos)���w�肵�Ă��܂��B"},
    {"�������substr()�̑�2����(�؂�o��������)���͈͊O($(len))�ł��B"},
    {"fopen�̑�1������null���n����Ă��܂��B"},
    {"fopen�̑�2������null���n����Ă��܂��B"},
    {"fgets�ɓn����Ă���t�@�C���|�C���^��null�ł��B"},
    {"fgets�̈����̌^���s���ł��B"},
    {"fgets�ɓn����Ă���t�@�C���|�C���^�������ł��B"
     "���Ԃ�close()����Ă��܂��B"},
    {"fgets�œǂݍ��񂾃}���`�o�C�g�����������\���ɕϊ��ł��܂���B"},
    {"fputs�̑�2�����ɓn����Ă���t�@�C���|�C���^��null�ł��B"},
    {"fputs�̈����̌^���s���ł��B"},
    {"fputs�ɓn����Ă���t�@�C���|�C���^�������ł��B"
     "���Ԃ�close()����Ă��܂��B"},
    {"fclose�̈�����null���n����Ă��܂��B"},
    {"fclose�̈����̌^���s���ł��B"},
    {"fclose�ɓn����Ă���t�@�C���|�C���^�������ł��B"
     "���Ԃ����close()����Ă��܂��B"},
    {"parse_int()�̈�����null�ł��B"},
    {"parse_int()�̃t�H�[�}�b�g�G���[�B���̕�����:�u$(str)�v"},
    {"parse_double()�̈�����null�ł��B"},
    {"parse_double()�̃t�H�[�}�b�g�G���[�B���̕�����:�u$(str)�v"},
};
