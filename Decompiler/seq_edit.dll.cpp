/** 
*  Generator: vscode-decompiler@0.0.8 (https://marketplace.visualstudio.com/items?itemName=tintinweb.vscode-decompiler)
*  Target:    d:\Github\superstar-auto-notes-generator\SuperStarResource\SEQEditor-1.1.7\seq_edit.dll
**/

/* Function: seq_open */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 seq_open(int param_1,int param_2,undefined *param_3,undefined8 param_4)

{
  void *pvVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
                    /* 0x1030  119  seq_open */
  iVar8 = (int)param_3;
  if (DAT_1800390b0 == '\0') {
    _DAT_1800390b0 = 0x100;
    if (param_1 < 1) {
      param_1 = 1;
    }
    if (param_2 < 1) {
      param_2 = 1;
    }
    lVar5 = (longlong)param_1;
    if (iVar8 < 4) {
      iVar8 = 4;
    }
    lVar9 = 0;
    DAT_1800390b8 = 0;
    DAT_1800390cc = 0;
    DAT_1800390e4 = 0;
    DAT_1800390b4 = param_1;
    DAT_1800390c8 = param_2;
    DAT_1800390e0 = iVar8;
    pvVar1 = malloc(lVar5 * 0x180);
    lVar4 = (longlong)param_2;
    DAT_1800390c0 = pvVar1;
    DAT_1800390d0 = malloc(lVar4 * 0x98);
    lVar6 = (longlong)iVar8;
    DAT_1800390e8 = malloc(lVar6 * 0x128);
    lVar2 = lVar5;
    lVar7 = lVar9;
    if (0 < lVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)pvVar1) = 0xffffffff;
        lVar7 = lVar7 + 0x180;
        lVar2 = lVar2 + -1;
        pvVar1 = DAT_1800390c0;
      } while (lVar2 != 0);
    }
    lVar7 = lVar9;
    lVar2 = lVar4;
    if (0 < lVar4) {
      do {
        *(undefined4 *)(lVar7 + (longlong)DAT_1800390d0) = 0xffffffff;
        lVar2 = lVar2 + -1;
        lVar7 = lVar7 + 0x98;
      } while (lVar2 != 0);
    }
    lVar7 = lVar9;
    if (0 < lVar6) {
      do {
        *(undefined4 *)(lVar7 + (longlong)DAT_1800390e8) = 0xffffffff;
        lVar6 = lVar6 + -1;
        lVar7 = lVar7 + 0x128;
      } while (lVar6 != 0);
    }
    DAT_1800390d8 = malloc(lVar5 << 4);
    if (0 < lVar5) {
      lVar7 = lVar9;
      do {
        pvVar1 = DAT_1800390d8;
        *(undefined4 *)(lVar7 + (longlong)DAT_1800390d8) = 0;
        pvVar3 = malloc(lVar4 * 4);
        *(void **)(lVar7 + 8 + (longlong)pvVar1) = pvVar3;
        lVar2 = lVar9;
        if (0 < lVar4) {
          do {
            lVar2 = lVar2 + 1;
            *(undefined4 *)(*(longlong *)(lVar7 + 8 + (longlong)pvVar1) + -4 + lVar2 * 4) =
                 0xffffffff;
          } while (lVar2 < lVar4);
        }
        lVar7 = lVar7 + 0x10;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    DAT_1800390f0 = 0;
    DAT_1800390f8 = 0;
    _DAT_180039100 = 0;
    _DAT_180039108 = 0;
    _DAT_1800390b0 = 1;
    FUN_180007890(0,(longlong)&PTR_FUN_180037a20,param_3,param_4);
    FUN_180007890(1,(longlong)&PTR_FUN_180037a70,param_3,param_4);
    timeBeginPeriod(1);
    timeGetTime();
    return 0;
  }
  DAT_180039110 = 0xffffff9a;
  return 0xffffff9a;
}

/* Function: seq_close */
void seq_close(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
                    /* 0x1280  46  seq_close */
  if (DAT_1800390b0 != '\0') {
    uVar3 = 0;
    DAT_1800390b1 = 1;
    uVar4 = uVar3;
    uVar6 = uVar3;
    iVar1 = DAT_1800390e0;
    if (0 < DAT_1800390e0) {
      do {
        if (*(int *)(uVar4 + (longlong)DAT_1800390e8) != -1) {
          seq_stream_close((int)uVar6);
          iVar1 = DAT_1800390e0;
        }
        uVar5 = (int)uVar6 + 1;
        uVar4 = uVar4 + 0x128;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < iVar1);
    }
    uVar4 = uVar3;
    uVar6 = uVar3;
    iVar1 = DAT_1800390c8;
    if (0 < DAT_1800390c8) {
      do {
        if (*(int *)(uVar4 + (longlong)DAT_1800390d0) != -1) {
          seq_sequencer_close((int)uVar6);
          iVar1 = DAT_1800390c8;
        }
        uVar5 = (int)uVar6 + 1;
        uVar4 = uVar4 + 0x98;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < iVar1);
    }
    uVar2 = (ulonglong)DAT_1800390b4;
    uVar4 = uVar3;
    uVar6 = uVar3;
    if (0 < (int)DAT_1800390b4) {
      do {
        if (*(int *)(uVar4 + (longlong)DAT_1800390c0) != -1) {
          seq_context_close((int)uVar6);
          uVar2 = (ulonglong)DAT_1800390b4;
        }
        uVar5 = (int)uVar6 + 1;
        uVar4 = uVar4 + 0x180;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < (int)uVar2);
    }
    FUN_180002680(uVar2,param_2,param_3,param_4);
    uVar4 = uVar3;
    if (0 < (int)DAT_1800390b4) {
      do {
        free(*(void **)(uVar4 + 8 + (longlong)DAT_1800390d8));
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
        uVar4 = uVar4 + 0x10;
      } while ((int)uVar5 < (int)DAT_1800390b4);
    }
    free(DAT_1800390e8);
    free(DAT_1800390d0);
    free(DAT_1800390c0);
    free(DAT_1800390d8);
    FUN_180012b90((undefined (*) [16])&DAT_1800390b0,0,0x68);
    return;
  }
  DAT_180039110 = 0xffffff9b;
  return;
}

/* Function: seq_is_opened */
undefined seq_is_opened(void)

{
                    /* 0x13f0  118  seq_is_opened */
  return DAT_1800390b0;
}

/* Function: seq_error */
undefined4 seq_error(void)

{
                    /* 0x1400  116  seq_error */
  return DAT_180039110;
}

/* Function: seq_error_clear */
void seq_error_clear(void)

{
  DAT_180039110 = 0;
                    /* 0x1410  117  seq_error_clear */
  return;
}

/* Function: seq_sys */
undefined1 * seq_sys(void)

{
                    /* 0x1420  179  seq_sys */
  return &DAT_1800390b0;
}

/* Function: seq_array_create */
undefined8 seq_array_create(int *param_1,undefined8 param_2,uint param_3)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar4;
  
                    /* 0x1430  15  seq_array_create */
  iVar3 = (int)param_2;
  *param_1 = iVar3;
  if ((int)param_3 < 8) {
    param_3 = 8;
LAB_180001455:
    if ((param_3 & param_3 - 1) == 0) goto LAB_1800014ae;
  }
  else if (0 < (int)param_3) goto LAB_180001455;
  piVar2 = param_1;
  FUN_180024bb0(param_1,param_2);
  fVar4 = extraout_XMM0_Da;
  FUN_180024bb0(piVar2,param_2);
  FUN_180024a0c(fVar4 / extraout_XMM0_Da_00);
  FUN_180024fc0();
  param_3 = (uint)extraout_XMM0_Da_01;
LAB_1800014ae:
  param_1[1] = param_3;
  param_1[2] = 0;
  pvVar1 = malloc((longlong)(int)(iVar3 * param_3));
  *(void **)(param_1 + 4) = pvVar1;
  return 0;
}

/* Function: seq_array_destroy */
void seq_array_destroy(undefined8 *param_1)

{
                    /* 0x14e0  16  seq_array_destroy */
  if (((void *)param_1[2] != (void *)0x0) && (0 < *(int *)((longlong)param_1 + 4))) {
    free((void *)param_1[2]);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

/* Function: seq_array_link */
undefined8
seq_array_link(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
                    /* 0x1510  23  seq_array_link */
  *(undefined8 *)(param_1 + 4) = param_2;
  *param_1 = param_3;
  param_1[2] = param_5;
  param_1[1] = param_4;
  return 0;
}

/* Function: seq_array_unlink */
void seq_array_unlink(undefined8 *param_1)

{
                    /* 0x1530  28  seq_array_unlink */
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

/* Function: seq_array_increase */
void seq_array_increase(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar6;
  
                    /* 0x1540  17  seq_array_increase */
  iVar1 = param_1[1];
  if (iVar1 < 8) {
    param_1[1] = 8;
  }
  uVar2 = param_1[1];
  uVar4 = (ulonglong)uVar2;
  if ((((int)uVar2 < (int)param_2) || (uVar2 == 0)) || ((uVar2 & uVar2 - 1) != 0)) {
    uVar5 = (ulonglong)param_2;
    if ((int)param_2 < (int)uVar2) {
      uVar5 = (ulonglong)uVar2;
    }
    FUN_180024bb0(uVar4,uVar5);
    fVar6 = extraout_XMM0_Da;
    FUN_180024bb0(uVar4,uVar5);
    FUN_180024a0c(fVar6 / extraout_XMM0_Da_00);
    FUN_180024fc0();
    param_1[1] = (int)extraout_XMM0_Da_01;
  }
  if (iVar1 < param_1[1]) {
    puVar3 = (undefined8 *)malloc((longlong)(*param_1 * param_1[1]));
    if (*(undefined8 **)(param_1 + 4) != (undefined8 *)0x0) {
      if (0 < param_1[2]) {
        FUN_18000f860(puVar3,*(undefined8 **)(param_1 + 4),(longlong)(param_1[2] * *param_1));
      }
      free(*(void **)(param_1 + 4));
    }
    *(undefined8 **)(param_1 + 4) = puVar3;
  }
  return;
}

/* Function: seq_array_is_can_insert */
undefined8 seq_array_is_can_insert(longlong param_1,int param_2)

{
                    /* 0x1610  20  seq_array_is_can_insert */
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 8))) {
    return 0;
  }
  DAT_180039110 = 0xfffffcdc;
  return 0xfffffcdc;
}

/* Function: seq_array_is_can_remove */
undefined8 seq_array_is_can_remove(longlong param_1,int param_2,int param_3)

{
                    /* 0x1630  22  seq_array_is_can_remove */
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 8))) {
    if (*(int *)(param_1 + 8) < param_2 + param_3) {
      DAT_180039110 = 0xfffffcdb;
      return 0xfffffcdb;
    }
    return 0;
  }
  DAT_180039110 = 0xfffffcdc;
  return 0xfffffcdc;
}

/* Function: seq_array_is_can_pop */
undefined8 seq_array_is_can_pop(longlong param_1,int param_2)

{
                    /* 0x1670  21  seq_array_is_can_pop */
  if (*(int *)(param_1 + 8) < param_2) {
    DAT_180039110 = 0xfffffcdb;
    return 0xfffffcdb;
  }
  return 0;
}

/* Function: seq_array_insert */
undefined8 seq_array_insert(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar8;
  
                    /* 0x1690  18  seq_array_insert */
  iVar7 = (int)param_2;
  if (iVar7 < 0) {
    DAT_180039110 = 0xfffffcdc;
    return 0xfffffcdc;
  }
  iVar2 = param_1[2];
  if (iVar2 < iVar7) {
    DAT_180039110 = 0xfffffcdc;
    return 0xfffffcdc;
  }
  iVar3 = param_1[1];
  iVar1 = iVar2 + param_3;
  if (iVar3 < iVar1) {
    if (iVar3 < 8) {
      param_1[1] = 8;
    }
    uVar4 = param_1[1];
    uVar6 = (ulonglong)uVar4;
    if ((((int)uVar4 < iVar1) || (uVar4 == 0)) || ((uVar4 & uVar4 - 1) != 0)) {
      FUN_180024bb0(uVar6,param_2);
      fVar8 = extraout_XMM0_Da;
      FUN_180024bb0(uVar6,param_2);
      FUN_180024a0c(fVar8 / extraout_XMM0_Da_00);
      FUN_180024fc0();
      param_1[1] = (int)extraout_XMM0_Da_01;
    }
    if (iVar3 < param_1[1]) {
      iVar3 = *param_1;
      puVar5 = (undefined8 *)malloc((longlong)(iVar3 * param_1[1]));
      if (*(undefined8 **)(param_1 + 4) != (undefined8 *)0x0) {
        if (0 < iVar2) {
          FUN_18000f860(puVar5,*(undefined8 **)(param_1 + 4),(longlong)(iVar3 * iVar2));
        }
        free(*(void **)(param_1 + 4));
      }
      *(undefined8 **)(param_1 + 4) = puVar5;
    }
  }
  iVar2 = *param_1;
  puVar5 = (undefined8 *)((longlong)(iVar2 * iVar7) + *(longlong *)(param_1 + 4));
  if (iVar7 != param_1[2]) {
    FUN_18000f860((undefined8 *)((longlong)(iVar2 * param_3) + (longlong)puVar5),puVar5,
                  (longlong)((param_1[2] - iVar7) * iVar2));
  }
  param_1[2] = iVar1;
  return 0;
}

/* Function: seq_array_insert_copy */
undefined8
seq_array_insert_copy(int *param_1,undefined8 param_2,int param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar8;
  
                    /* 0x1810  19  seq_array_insert_copy */
  iVar7 = (int)param_2;
  if (iVar7 < 0) {
    DAT_180039110 = 0xfffffcdc;
    return 0xfffffcdc;
  }
  iVar2 = param_1[2];
  if (iVar2 < iVar7) {
    DAT_180039110 = 0xfffffcdc;
    return 0xfffffcdc;
  }
  iVar3 = param_1[1];
  iVar1 = iVar2 + param_3;
  if (iVar3 < iVar1) {
    if (iVar3 < 8) {
      param_1[1] = 8;
    }
    uVar4 = param_1[1];
    uVar6 = (ulonglong)uVar4;
    if ((((int)uVar4 < iVar1) || (uVar4 == 0)) || ((uVar4 & uVar4 - 1) != 0)) {
      FUN_180024bb0(uVar6,param_2);
      fVar8 = extraout_XMM0_Da;
      FUN_180024bb0(uVar6,param_2);
      FUN_180024a0c(fVar8 / extraout_XMM0_Da_00);
      FUN_180024fc0();
      param_1[1] = (int)extraout_XMM0_Da_01;
    }
    if (iVar3 < param_1[1]) {
      iVar3 = *param_1;
      puVar5 = (undefined8 *)malloc((longlong)(iVar3 * param_1[1]));
      if (*(undefined8 **)(param_1 + 4) != (undefined8 *)0x0) {
        if (0 < iVar2) {
          FUN_18000f860(puVar5,*(undefined8 **)(param_1 + 4),(longlong)(iVar3 * iVar2));
        }
        free(*(void **)(param_1 + 4));
      }
      *(undefined8 **)(param_1 + 4) = puVar5;
    }
  }
  iVar2 = *param_1;
  puVar5 = (undefined8 *)((longlong)(iVar2 * iVar7) + *(longlong *)(param_1 + 4));
  if (iVar7 != param_1[2]) {
    FUN_18000f860((undefined8 *)((longlong)(iVar2 * param_3) + (longlong)puVar5),puVar5,
                  (longlong)((param_1[2] - iVar7) * iVar2));
  }
  iVar2 = *param_1;
  param_1[2] = iVar1;
  FUN_18000f860((undefined8 *)((longlong)(iVar2 * iVar7) + *(longlong *)(param_1 + 4)),
                (undefined8 *)(iVar2 * param_5 + param_4),(longlong)(iVar2 * param_3));
  return 0;
}

/* Function: seq_array_push */
undefined8 seq_array_push(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar7;
  
                    /* 0x19c0  25  seq_array_push */
  iVar1 = param_1[2];
  iVar2 = param_1[1];
  iVar6 = iVar1 + (int)param_2;
  if (iVar2 < iVar6) {
    if (iVar2 < 8) {
      param_1[1] = 8;
    }
    uVar3 = param_1[1];
    uVar5 = (ulonglong)uVar3;
    if ((((int)uVar3 < iVar6) || (uVar3 == 0)) || ((uVar3 & uVar3 - 1) != 0)) {
      FUN_180024bb0(uVar5,param_2);
      fVar7 = extraout_XMM0_Da;
      FUN_180024bb0(uVar5,param_2);
      FUN_180024a0c(fVar7 / extraout_XMM0_Da_00);
      FUN_180024fc0();
      param_1[1] = (int)extraout_XMM0_Da_01;
    }
    if (iVar2 < param_1[1]) {
      iVar2 = *param_1;
      puVar4 = (undefined8 *)malloc((longlong)(iVar2 * param_1[1]));
      if (*(undefined8 **)(param_1 + 4) != (undefined8 *)0x0) {
        if (0 < iVar1) {
          FUN_18000f860(puVar4,*(undefined8 **)(param_1 + 4),(longlong)(iVar2 * iVar1));
        }
        free(*(void **)(param_1 + 4));
      }
      *(undefined8 **)(param_1 + 4) = puVar4;
      param_1[2] = iVar6;
    }
    else {
      param_1[2] = iVar6;
    }
  }
  else {
    param_1[2] = iVar6;
  }
  return 0;
}

/* Function: seq_array_push_copy */
undefined8 seq_array_push_copy(int *param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar8;
  
                    /* 0x1ad0  26  seq_array_push_copy */
  iVar1 = param_1[2];
  iVar2 = param_1[1];
  iVar4 = (int)param_2;
  iVar7 = iVar1 + iVar4;
  if (iVar2 < iVar7) {
    if (iVar2 < 8) {
      param_1[1] = 8;
    }
    uVar3 = param_1[1];
    uVar6 = (ulonglong)uVar3;
    if ((((int)uVar3 < iVar7) || (uVar3 == 0)) || ((uVar3 & uVar3 - 1) != 0)) {
      FUN_180024bb0(uVar6,param_2);
      fVar8 = extraout_XMM0_Da;
      FUN_180024bb0(uVar6,param_2);
      FUN_180024a0c(fVar8 / extraout_XMM0_Da_00);
      FUN_180024fc0();
      param_1[1] = (int)extraout_XMM0_Da_01;
    }
    if (iVar2 < param_1[1]) {
      iVar2 = *param_1;
      puVar5 = (undefined8 *)malloc((longlong)(iVar2 * param_1[1]));
      if (*(undefined8 **)(param_1 + 4) != (undefined8 *)0x0) {
        if (0 < iVar1) {
          FUN_18000f860(puVar5,*(undefined8 **)(param_1 + 4),(longlong)(iVar2 * iVar1));
        }
        free(*(void **)(param_1 + 4));
      }
      *(undefined8 **)(param_1 + 4) = puVar5;
    }
  }
  iVar2 = *param_1;
  param_1[2] = iVar7;
  FUN_18000f860((undefined8 *)((longlong)(iVar2 * iVar1) + *(longlong *)(param_1 + 4)),
                (undefined8 *)(iVar2 * param_4 + param_3),(longlong)(iVar2 * iVar4));
  return 0;
}

/* Function: seq_array_remove */
undefined8 seq_array_remove(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x1c00  27  seq_array_remove */
  if ((param_2 < 0) || (iVar1 = param_1[2], iVar1 <= param_2)) {
    DAT_180039110 = 0xfffffcdc;
    return 0xfffffcdc;
  }
  iVar3 = param_2 + param_3;
  if (iVar1 < iVar3) {
    DAT_180039110 = 0xfffffcdb;
    return 0xfffffcdb;
  }
  if ((param_2 == 0) && (iVar1 == param_3)) {
    param_1[2] = 0;
    return 0;
  }
  if (iVar3 != iVar1) {
    iVar2 = *param_1;
    FUN_18000f860((undefined8 *)((longlong)(iVar2 * param_2) + *(longlong *)(param_1 + 4)),
                  (undefined8 *)((longlong)(iVar2 * iVar3) + *(longlong *)(param_1 + 4)),
                  (longlong)((iVar1 - iVar3) * iVar2));
  }
  param_1[2] = param_1[2] - param_3;
  return 0;
}

/* Function: seq_array_pop */
undefined8 seq_array_pop(longlong param_1,int param_2)

{
                    /* 0x1cb0  24  seq_array_pop */
  if (*(int *)(param_1 + 8) < param_2) {
    DAT_180039110 = 0xfffffcdb;
    return 0xfffffcdb;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - param_2;
  return 0;
}

/* Function: seq_array_clear */
undefined8 seq_array_clear(longlong param_1)

{
                    /* 0x1cd0  14  seq_array_clear */
  *(undefined4 *)(param_1 + 8) = 0;
  return 0;
}

/* Function: seq_array_algorithm_increase_capacity */
void seq_array_algorithm_increase_capacity(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar4;
  
                    /* 0x1ce0  3  seq_array_algorithm_increase_capacity */
  if ((int)*param_1 < (int)param_2) {
    *param_1 = param_2;
  }
  uVar1 = *param_1;
  uVar3 = (ulonglong)uVar1;
  if ((((int)uVar1 < param_3) || (uVar1 == 0)) || ((uVar1 & uVar1 - 1) != 0)) {
    puVar2 = param_1;
    FUN_180024bb0(param_1,uVar3);
    fVar4 = extraout_XMM0_Da;
    FUN_180024bb0(puVar2,uVar3);
    FUN_180024a0c(fVar4 / extraout_XMM0_Da_00);
    FUN_180024fc0();
    *param_1 = (int)extraout_XMM0_Da_01;
  }
  return;
}

/* Function: seq_array_algorithm_realloc */
void seq_array_algorithm_realloc(void **param_1,int param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  
                    /* 0x1d60  12  seq_array_algorithm_realloc */
  puVar1 = (undefined8 *)malloc((longlong)(param_2 * param_4));
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    *param_1 = puVar1;
  }
  else {
    if (0 < param_3) {
      FUN_18000f860(puVar1,(undefined8 *)*param_1,(longlong)(param_2 * param_3));
    }
    free(*param_1);
    *param_1 = puVar1;
  }
  return;
}

/* Function: seq_array_algorithm_increase */
void seq_array_algorithm_increase
               (void **param_1,undefined8 param_2,uint *param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar6;
  
                    /* 0x1dd0  2  seq_array_algorithm_increase */
  uVar1 = *param_3;
  iVar3 = (int)param_2;
  if ((int)uVar1 < 8) {
    *param_3 = 8;
  }
  uVar2 = *param_3;
  if ((((int)uVar2 < (int)param_5) || (uVar2 == 0)) || ((uVar2 & uVar2 - 1) != 0)) {
    if ((int)param_5 < (int)uVar2) {
      param_5 = uVar2;
    }
    uVar5 = (ulonglong)param_5;
    FUN_180024bb0(uVar5,param_2);
    fVar6 = extraout_XMM0_Da;
    FUN_180024bb0(uVar5,param_2);
    FUN_180024a0c(fVar6 / extraout_XMM0_Da_00);
    FUN_180024fc0();
    *param_3 = (int)extraout_XMM0_Da_01;
  }
  if ((int)uVar1 < (int)*param_3) {
    puVar4 = (undefined8 *)malloc((longlong)(int)(*param_3 * iVar3));
    if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
      if (0 < param_4) {
        FUN_18000f860(puVar4,(undefined8 *)*param_1,(longlong)(iVar3 * param_4));
      }
      free(*param_1);
    }
    *param_1 = puVar4;
  }
  return;
}

/* Function: seq_array_algorithm_is_can_insert */
undefined8 seq_array_algorithm_is_can_insert(int param_1,int param_2)

{
                    /* 0x1ed0  6  seq_array_algorithm_is_can_insert */
  if ((-1 < param_2) && (param_2 <= param_1)) {
    return 0;
  }
  DAT_180039110 = 0xfffffcdc;
  return 0xfffffcdc;
}

/* Function: seq_array_algorithm_is_can_remove */
undefined8 seq_array_algorithm_is_can_remove(int param_1,int param_2,int param_3)

{
                    /* 0x1ef0  8  seq_array_algorithm_is_can_remove */
  if ((-1 < param_2) && (param_2 < param_1)) {
    if (param_1 < param_2 + param_3) {
      DAT_180039110 = 0xfffffcdb;
      return 0xfffffcdb;
    }
    return 0;
  }
  DAT_180039110 = 0xfffffcdc;
  return 0xfffffcdc;
}

/* Function: seq_array_algorithm_is_can_pop */
undefined8 seq_array_algorithm_is_can_pop(int param_1,int param_2)

{
                    /* 0x1f30  7  seq_array_algorithm_is_can_pop */
  if (param_1 < param_2) {
    DAT_180039110 = 0xfffffcdb;
    return 0xfffffcdb;
  }
  return 0;
}

/* Function: seq_array_algorithm_insert */
undefined8
seq_array_algorithm_insert
          (void **param_1,undefined8 param_2,uint *param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar7;
  
  iVar4 = (int)param_2;
                    /* 0x1f50  4  seq_array_algorithm_insert */
  if ((-1 < param_5) && (param_5 <= *param_4)) {
    uVar2 = *param_3;
    iVar1 = *param_4 + param_6;
    if ((int)uVar2 < iVar1) {
      if ((int)uVar2 < 8) {
        *param_3 = 8;
      }
      uVar3 = *param_3;
      uVar6 = (ulonglong)uVar3;
      if ((((int)uVar3 < iVar1) || (uVar3 == 0)) || ((uVar3 & uVar3 - 1) != 0)) {
        FUN_180024bb0(uVar6,param_2);
        fVar7 = extraout_XMM0_Da;
        FUN_180024bb0(uVar6,param_2);
        FUN_180024a0c(fVar7 / extraout_XMM0_Da_00);
        FUN_180024fc0();
        *param_3 = (int)extraout_XMM0_Da_01;
      }
      if ((int)uVar2 < (int)*param_3) {
        puVar5 = (undefined8 *)malloc((longlong)(int)(*param_3 * iVar4));
        if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
          if (0 < *param_4) {
            FUN_18000f860(puVar5,(undefined8 *)*param_1,(longlong)(*param_4 * iVar4));
          }
          free(*param_1);
        }
        *param_1 = puVar5;
      }
    }
    puVar5 = (undefined8 *)((longlong)(iVar4 * param_5) + (longlong)*param_1);
    if (param_5 != *param_4) {
      FUN_18000f860((undefined8 *)((longlong)(iVar4 * param_6) + (longlong)puVar5),puVar5,
                    (longlong)((*param_4 - param_5) * iVar4));
    }
    *param_4 = iVar1;
    return 0;
  }
  DAT_180039110 = 0xfffffcdc;
  return 0xfffffcdc;
}

/* Function: seq_array_algorithm_insert_copy */
undefined8
seq_array_algorithm_insert_copy
          (void **param_1,undefined8 param_2,uint *param_3,int *param_4,int param_5,int param_6,
          longlong param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar7;
  
  iVar4 = (int)param_2;
                    /* 0x20b0  5  seq_array_algorithm_insert_copy */
  if ((-1 < param_5) && (param_5 <= *param_4)) {
    uVar2 = *param_3;
    iVar1 = *param_4 + param_6;
    if ((int)uVar2 < iVar1) {
      if ((int)uVar2 < 8) {
        *param_3 = 8;
      }
      uVar3 = *param_3;
      uVar6 = (ulonglong)uVar3;
      if ((((int)uVar3 < iVar1) || (uVar3 == 0)) || ((uVar3 & uVar3 - 1) != 0)) {
        FUN_180024bb0(uVar6,param_2);
        fVar7 = extraout_XMM0_Da;
        FUN_180024bb0(uVar6,param_2);
        FUN_180024a0c(fVar7 / extraout_XMM0_Da_00);
        FUN_180024fc0();
        *param_3 = (int)extraout_XMM0_Da_01;
      }
      if ((int)uVar2 < (int)*param_3) {
        puVar5 = (undefined8 *)malloc((longlong)(int)(*param_3 * iVar4));
        if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
          if (0 < *param_4) {
            FUN_18000f860(puVar5,(undefined8 *)*param_1,(longlong)(*param_4 * iVar4));
          }
          free(*param_1);
        }
        *param_1 = puVar5;
      }
    }
    puVar5 = (undefined8 *)((longlong)*param_1 + (longlong)(iVar4 * param_5));
    if (param_5 != *param_4) {
      FUN_18000f860((undefined8 *)((longlong)(iVar4 * param_6) + (longlong)puVar5),puVar5,
                    (longlong)((*param_4 - param_5) * iVar4));
    }
    *param_4 = iVar1;
    FUN_18000f860((undefined8 *)((longlong)*param_1 + (longlong)(iVar4 * param_5)),
                  (undefined8 *)(iVar4 * param_8 + param_7),(longlong)(iVar4 * param_6));
    return 0;
  }
  DAT_180039110 = 0xfffffcdc;
  return 0xfffffcdc;
}

/* Function: seq_array_algorithm_push */
undefined8
seq_array_algorithm_push(void **param_1,undefined8 param_2,uint *param_3,int *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar7;
  
                    /* 0x2240  10  seq_array_algorithm_push */
  uVar1 = *param_3;
  iVar6 = param_5 + *param_4;
  iVar3 = (int)param_2;
  if ((int)uVar1 < iVar6) {
    if ((int)uVar1 < 8) {
      *param_3 = 8;
    }
    uVar2 = *param_3;
    uVar5 = (ulonglong)uVar2;
    if ((((int)uVar2 < iVar6) || (uVar2 == 0)) || ((uVar2 & uVar2 - 1) != 0)) {
      FUN_180024bb0(uVar5,param_2);
      fVar7 = extraout_XMM0_Da;
      FUN_180024bb0(uVar5,param_2);
      FUN_180024a0c(fVar7 / extraout_XMM0_Da_00);
      FUN_180024fc0();
      *param_3 = (int)extraout_XMM0_Da_01;
    }
    if ((int)uVar1 < (int)*param_3) {
      puVar4 = (undefined8 *)malloc((longlong)(int)(*param_3 * iVar3));
      if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
        if (0 < *param_4) {
          FUN_18000f860(puVar4,(undefined8 *)*param_1,(longlong)(*param_4 * iVar3));
        }
        free(*param_1);
      }
      *param_1 = puVar4;
    }
    *param_4 = iVar6;
  }
  else {
    *param_4 = iVar6;
  }
  return 0;
}

/* Function: seq_array_algorithm_push_copy */
undefined8
seq_array_algorithm_push_copy
          (void **param_1,undefined8 param_2,uint *param_3,int *param_4,int param_5,longlong param_6
          ,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar8;
  
                    /* 0x2350  11  seq_array_algorithm_push_copy */
  iVar2 = *param_4;
  uVar3 = *param_3;
  iVar1 = iVar2 + param_5;
  iVar5 = (int)param_2;
  if ((int)uVar3 < iVar1) {
    if ((int)uVar3 < 8) {
      *param_3 = 8;
    }
    uVar4 = *param_3;
    uVar7 = (ulonglong)uVar4;
    if ((((int)uVar4 < iVar1) || (uVar4 == 0)) || ((uVar4 & uVar4 - 1) != 0)) {
      FUN_180024bb0(uVar7,param_2);
      fVar8 = extraout_XMM0_Da;
      FUN_180024bb0(uVar7,param_2);
      FUN_180024a0c(fVar8 / extraout_XMM0_Da_00);
      FUN_180024fc0();
      *param_3 = (int)extraout_XMM0_Da_01;
    }
    if ((int)uVar3 < (int)*param_3) {
      puVar6 = (undefined8 *)malloc((longlong)(int)(*param_3 * iVar5));
      if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
        if (0 < *param_4) {
          FUN_18000f860(puVar6,(undefined8 *)*param_1,(longlong)(*param_4 * iVar5));
        }
        free(*param_1);
      }
      *param_1 = puVar6;
    }
  }
  *param_4 = iVar1;
  FUN_18000f860((undefined8 *)((longlong)(iVar2 * iVar5) + (longlong)*param_1),
                (undefined8 *)(iVar5 * param_7 + param_6),(longlong)(iVar5 * param_5));
  return 0;
}

/* Function: seq_array_algorithm_remove */
undefined8
seq_array_algorithm_remove(longlong *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
                    /* 0x2490  13  seq_array_algorithm_remove */
  if ((param_4 < 0) || (iVar2 = *param_3, iVar2 <= param_4)) {
    DAT_180039110 = 0xfffffcdc;
    return 0xfffffcdc;
  }
  iVar1 = param_4 + param_5;
  if (iVar2 < iVar1) {
    DAT_180039110 = 0xfffffcdb;
    return 0xfffffcdb;
  }
  if ((param_4 == 0) && (iVar2 == param_5)) {
    *param_3 = 0;
    return 0;
  }
  if (iVar1 != iVar2) {
    FUN_18000f860((undefined8 *)((longlong)(param_2 * param_4) + *param_1),
                  (undefined8 *)((longlong)(iVar1 * param_2) + *param_1),
                  (longlong)((iVar2 - iVar1) * param_2));
  }
  *param_3 = *param_3 - param_5;
  return 0;
}

/* Function: seq_array_algorithm_pop */
undefined8 seq_array_algorithm_pop(int *param_1,int param_2)

{
                    /* 0x2540  9  seq_array_algorithm_pop */
  if (*param_1 < param_2) {
    DAT_180039110 = 0xfffffcdb;
    return 0xfffffcdb;
  }
  *param_1 = *param_1 - param_2;
  return 0;
}

/* Function: seq_array_algorithm_clear */
undefined8 seq_array_algorithm_clear(undefined4 *param_1)

{
                    /* 0x2560  1  seq_array_algorithm_clear */
  *param_1 = 0;
  return 0;
}

/* Function: seq_stream_backend_mount_file */
void seq_stream_backend_mount_file
               (undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
                    /* 0x2570  157  seq_stream_backend_mount_file */
  FUN_180007890(0,(longlong)&PTR_FUN_180037a20,param_3,param_4);
  return;
}

/* Function: seq_stream_backend_unmount_file */
undefined8
seq_stream_backend_unmount_file
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
                    /* 0x2580  159  seq_stream_backend_unmount_file */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  if (DAT_1800390f0 != 0) {
    if (0 < *(int *)(DAT_1800390f0 + 0x48)) {
      seq_stream_close_all_by_type(0);
    }
    uVar1 = (**(code **)(DAT_1800390f0 + 8))();
    if ((int)uVar1 < 0) {
      FUN_180005d70((longlong)"ERR! = %d",(ulonglong)uVar1,param_3,param_4);
    }
  }
  DAT_1800390f0 = 0;
  return 0;
}

/* Function: seq_stream_backend_mount_mem */
void seq_stream_backend_mount_mem
               (undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
                    /* 0x25f0  158  seq_stream_backend_mount_mem */
  FUN_180007890(1,(longlong)&PTR_FUN_180037a70,param_3,param_4);
  return;
}

/* Function: seq_stream_backend_unmount_mem */
undefined8
seq_stream_backend_unmount_mem
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
                    /* 0x2610  160  seq_stream_backend_unmount_mem */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  if (DAT_1800390f8 != 0) {
    if (0 < *(int *)(DAT_1800390f8 + 0x48)) {
      seq_stream_close_all_by_type(1);
    }
    uVar1 = (**(code **)(DAT_1800390f8 + 8))();
    if ((int)uVar1 < 0) {
      FUN_180005d70((longlong)"ERR! = %d",(ulonglong)uVar1,param_3,param_4);
    }
  }
  DAT_1800390f8 = 0;
  return 0;
}

/* Function: FUN_180002680 */
void FUN_180002680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  if (DAT_1800390b0 != '\0') {
    if (DAT_1800390f0 != 0) {
      if (0 < *(int *)(DAT_1800390f0 + 0x48)) {
        seq_stream_close_all_by_type(0);
      }
      uVar1 = (**(code **)(DAT_1800390f0 + 8))();
      if ((int)uVar1 < 0) {
        FUN_180005d70((longlong)"ERR! = %d",(ulonglong)uVar1,param_3,param_4);
      }
    }
    DAT_1800390f0 = 0;
    if (DAT_1800390b0 != '\0') {
      if (DAT_1800390f8 != 0) {
        if (0 < *(int *)(DAT_1800390f8 + 0x48)) {
          seq_stream_close_all_by_type(1);
        }
        uVar1 = (**(code **)(DAT_1800390f8 + 8))();
        if ((int)uVar1 < 0) {
          FUN_180005d70((longlong)"ERR! = %d",(ulonglong)uVar1,param_3,param_4);
        }
      }
      DAT_1800390f8 = 0;
      return;
    }
  }
  DAT_180039110 = 0xffffff9b;
  return;
}

/* Function: seq_calc_round_usec */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int seq_calc_round_usec(double param_1)

{
                    /* 0x2740  35  seq_calc_round_usec */
  return (int)(param_1 * _DAT_18002e7e0 + _DAT_18002e7b0);
}

/* Function: seq_calc_round_usec_f */
int seq_calc_round_usec_f(float param_1)

{
                    /* 0x2770  36  seq_calc_round_usec_f */
  return (int)(param_1 * DAT_18002e7fc + DAT_18002e794);
}

/* Function: seq_calc_is_power_of_2 */
ulonglong seq_calc_is_power_of_2(uint param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  
                    /* 0x27a0  33  seq_calc_is_power_of_2 */
  if (param_1 != 0) {
    uVar1 = param_1 - 1;
    in_RAX = (ulonglong)uVar1;
    if ((param_1 & uVar1) == 0) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

/* Function: seq_calc_upper_power_fo_2 */
ulonglong seq_calc_upper_power_fo_2(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float extraout_XMM0_Da;
  
                    /* 0x27c0  45  seq_calc_upper_power_fo_2 */
  fVar2 = (float)FUN_180024bb0(param_1,param_2);
  fVar3 = (float)FUN_180024bb0(param_1,param_2);
  FUN_180024a0c(fVar2 / fVar3);
  uVar1 = FUN_180024fc0();
  return uVar1 & 0xffffffff00000000 | (ulonglong)(uint)(int)extraout_XMM0_Da;
}

/* Function: seq_calc_lower_power_fo_2 */
ulonglong seq_calc_lower_power_fo_2(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float extraout_XMM0_Da;
  
                    /* 0x2810  34  seq_calc_lower_power_fo_2 */
  fVar2 = (float)FUN_180024bb0(param_1,param_2);
  fVar3 = (float)FUN_180024bb0(param_1,param_2);
  FUN_180024ae0(fVar2 / fVar3);
  uVar1 = FUN_180024fc0();
  return uVar1 & 0xffffffff00000000 | (ulonglong)(uint)(int)extraout_XMM0_Da;
}

/* Function: seq_calc_tick_in_tempo */
int seq_calc_tick_in_tempo(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
                    /* 0x2860  43  seq_calc_tick_in_tempo */
  piVar1 = (int *)seq_context_get_tempo(param_1,param_2);
  if (piVar1 == (int *)0x0) {
    return DAT_180039110;
  }
  if (*piVar1 < param_3) {
    return param_3 - *piVar1;
  }
  return 0;
}

/* Function: seq_calc_sec_in_tempo */
undefined8
seq_calc_sec_in_tempo
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  longlong lVar1;
  
                    /* 0x28a0  39  seq_calc_sec_in_tempo */
  lVar1 = seq_context_get_tempo(param_4,param_5);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(float *)(lVar1 + 8) < (float)param_3) {
    return lVar1;
  }
  return lVar1;
}

/* Function: FUN_180002900 */
void FUN_180002900(undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = 0;
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_3 + 0x6c);
  }
  param_2[0x1a] = iVar1;
  fVar3 = FUN_180024a0c((float)param_4 / (float)param_2[0xc]);
  param_2[0x1b] = (int)fVar3;
  if (param_3 != 0) {
    iVar2 = *(int *)(param_3 + 4);
  }
  *param_2 = iVar2;
  param_2[1] = iVar2 + param_4;
  if (param_3 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = *(float *)(param_3 + 0xc);
  }
  param_2[2] = (int)fVar3;
  param_2[3] = (int)((float)(int)((float)((double)param_4 * *(double *)(param_2 + 0x14)) *
                                  DAT_18002e7fc + fVar3 * DAT_18002e7fc + DAT_18002e794) *
                    DAT_18002e78c);
  return;
}

/* Function: FUN_1800029d0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800029d0(longlong param_1,int *param_2,longlong param_3,int param_4,double param_5,
                  int param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = DAT_18002e7b8;
  param_2[6] = param_6;
  *(double *)(param_2 + 4) = param_5;
  dVar4 = param_5 / _DAT_18002e7d0;
  dVar3 = (double)param_6;
  *(double *)(param_2 + 8) = dVar1 / dVar3;
  dVar2 = *(double *)(param_1 + 0x18);
  *(double *)(param_2 + 0xe) = dVar4;
  dVar2 = dVar2 / dVar3;
  *(double *)(param_2 + 10) = dVar2;
  param_2[0xc] = (int)(dVar1 / dVar2 + _DAT_18002e7b0);
  *(double *)(param_2 + 0x10) = dVar1 / dVar4;
  dVar2 = (double)*(int *)(param_1 + 0x10) * dVar4;
  *(double *)(param_2 + 0x12) = dVar2;
  *(double *)(param_2 + 0x14) = dVar1 / dVar2;
  *(double *)(param_2 + 0x16) = dVar4 / dVar3;
  *(double *)(param_2 + 0x18) = dVar1 / (dVar4 / dVar3);
  *(double *)(param_2 + 0x16) = *(double *)(param_2 + 0xe) / (double)param_2[6];
  *(double *)(param_2 + 0x18) = dVar1 / (*(double *)(param_2 + 0xe) / (double)param_2[6]);
  FUN_180002900(param_1,param_2,param_3,param_4);
  return;
}

/* Function: seq_calc_search_tempo_by_tick */
int seq_calc_search_tempo_by_tick(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x2aa0  38  seq_calc_search_tempo_by_tick */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  if ((param_1 < 0) || (DAT_1800390b4 <= param_1)) {
    DAT_180039110 = 0xffffff36;
    return -0xca;
  }
  piVar2 = (int *)((longlong)param_1 * 0x180 + DAT_1800390c0);
  if (*piVar2 == -1) {
    DAT_180039110 = 0xffffff37;
    return -0xc9;
  }
  if (0 < param_2) {
    if (piVar2[3] <= param_2) {
      if (0 < piVar2[10]) {
        return piVar2[10] + -1;
      }
      return 0;
    }
    iVar4 = piVar2[10];
    iVar3 = 0;
    if (0 < iVar4) {
      iVar1 = iVar4;
      do {
        iVar1 = iVar1 / 2 + iVar3;
        if (*(int *)((longlong)iVar1 * 0x78 + *(longlong *)(piVar2 + 0x54)) <= param_2) {
          if (param_2 <= *(int *)((longlong)iVar1 * 0x78 + 4 + *(longlong *)(piVar2 + 0x54))) {
            return iVar1;
          }
          iVar3 = iVar1 + 1;
          iVar1 = iVar4;
        }
        iVar4 = iVar1;
        iVar1 = iVar4 - iVar3;
      } while (0 < iVar1);
    }
    DAT_180039110 = 0xffffff32;
    return -0xce;
  }
  return 0;
}

/* Function: seq_calc_search_tempo_by_sec */
int seq_calc_search_tempo_by_sec(undefined8 param_1,float param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
                    /* 0x2b80  37  seq_calc_search_tempo_by_sec */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  if ((param_3 < 0) || (DAT_1800390b4 <= param_3)) {
    DAT_180039110 = 0xffffff36;
    return -0xca;
  }
  piVar3 = (int *)((longlong)param_3 * 0x180 + DAT_1800390c0);
  if (*piVar3 == -1) {
    DAT_180039110 = 0xffffff37;
    return -0xc9;
  }
  if (0.0 < param_2) {
    if ((double)param_2 < *(double *)(piVar3 + 4)) {
      iVar5 = piVar3[10];
      iVar4 = 0;
      fVar6 = (float)(int)(param_2 * DAT_18002e7fc + DAT_18002e794) * DAT_18002e78c;
      if (0 < iVar5) {
        iVar2 = iVar5;
        do {
          iVar2 = iVar4 + iVar2 / 2;
          if (*(float *)((longlong)iVar2 * 0x78 + 8 + *(longlong *)(piVar3 + 0x54)) <= fVar6) {
            pfVar1 = (float *)((longlong)iVar2 * 0x78 + 0xc + *(longlong *)(piVar3 + 0x54));
            if (fVar6 < *pfVar1 || fVar6 == *pfVar1) {
              return iVar2;
            }
            iVar4 = iVar2 + 1;
            iVar2 = iVar5;
          }
          iVar5 = iVar2;
          iVar2 = iVar5 - iVar4;
        } while (0 < iVar2);
      }
      DAT_180039110 = 0xffffff32;
      return -0xce;
    }
    if (piVar3[10] < 1) {
      return 0;
    }
    return piVar3[10] + -1;
  }
  return 0;
}

/* Function: FUN_180002ca0 */
int FUN_180002ca0(int *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 < param_2) {
    iVar1 = param_2 - *param_1;
  }
  else {
    iVar1 = 0;
  }
  return (int)((float)((double)iVar1 * *(double *)(param_1 + 0x14)) * DAT_18002e7fc +
               (float)param_1[2] * DAT_18002e7fc + DAT_18002e794);
}

/* Function: FUN_180002d00 */
int FUN_180002d00(undefined8 param_1,float param_2,int *param_3)

{
  if ((float)param_3[2] < param_2) {
    return (int)((double)(param_2 - (float)param_3[2]) * *(double *)(param_3 + 0x12)) + *param_3;
  }
  return (int)(*(double *)(param_3 + 0x12) * 0.0) + *param_3;
}

/* Function: seq_calc_convert_tick_to_sec */
int * seq_calc_convert_tick_to_sec(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_var;
  int *piVar2;
  
                    /* 0x2d40  31  seq_calc_convert_tick_to_sec */
  iVar1 = seq_calc_search_tempo_by_tick(param_1,param_2);
  piVar2 = (int *)CONCAT44(extraout_var,iVar1);
  if (-1 < iVar1) {
    piVar2 = (int *)seq_context_get_tempo(param_1,iVar1);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 < param_2) {
        iVar1 = param_2 - *piVar2;
      }
      else {
        iVar1 = 0;
      }
      return (int *)((ulonglong)piVar2 & 0xffffffff00000000 |
                    (ulonglong)
                    (uint)(int)((float)((double)iVar1 * *(double *)(piVar2 + 0x14)) * DAT_18002e7fc
                                + (float)piVar2[2] * DAT_18002e7fc + DAT_18002e794));
    }
  }
  return piVar2;
}

/* Function: seq_calc_convert_sec_to_tick */
int seq_calc_convert_sec_to_tick(undefined8 param_1,float param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  
                    /* 0x2de0  29  seq_calc_convert_sec_to_tick */
  fVar3 = (float)(int)(param_2 * DAT_18002e7fc + DAT_18002e794) * DAT_18002e78c;
  iVar1 = seq_calc_search_tempo_by_sec(param_1,fVar3,param_3);
  if (-1 < iVar1) {
    piVar2 = (int *)seq_context_get_tempo(param_3,iVar1);
    if (piVar2 != (int *)0x0) {
      if (fVar3 <= (float)piVar2[2]) {
        fVar3 = 0.0;
      }
      else {
        fVar3 = fVar3 - (float)piVar2[2];
      }
      return (int)((double)fVar3 * *(double *)(piVar2 + 0x12)) + *piVar2;
    }
  }
  return DAT_180039110;
}

/* Function: seq_calc_convert_tick_to_sec_by_tempo */
int seq_calc_convert_tick_to_sec_by_tempo(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x2e70  32  seq_calc_convert_tick_to_sec_by_tempo */
  piVar1 = (int *)seq_context_get_tempo(param_1,param_2);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*piVar1 < param_3) {
    iVar2 = param_3 - *piVar1;
  }
  else {
    iVar2 = 0;
  }
  return (int)((float)((double)iVar2 * *(double *)(piVar1 + 0x14)) * DAT_18002e7fc +
               (float)piVar1[2] * DAT_18002e7fc + DAT_18002e794);
}

/* Function: seq_calc_convert_sec_to_tick_by_tempo */
int seq_calc_convert_sec_to_tick_by_tempo
              (undefined8 param_1,undefined8 param_2,float param_3,int param_4,int param_5)

{
  int *piVar1;
  float fVar2;
  
                    /* 0x2ef0  30  seq_calc_convert_sec_to_tick_by_tempo */
  piVar1 = (int *)seq_context_get_tempo(param_4,param_5);
  if (piVar1 == (int *)0x0) {
    return DAT_180039110;
  }
  if (param_3 <= (float)piVar1[2]) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = param_3 - (float)piVar1[2];
  }
  return (int)((double)fVar2 * *(double *)(piVar1 + 0x12)) + *piVar1;
}

/* Function: seq_calc_sec_to_tick_by_bpm */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int seq_calc_sec_to_tick_by_bpm
              (float param_1,undefined8 param_2,double param_3,undefined8 param_4,int param_5)

{
                    /* 0x2f50  40  seq_calc_sec_to_tick_by_bpm */
  return (int)((param_3 / _DAT_18002e7d0) * (double)param_5 * (double)param_1);
}

/* Function: seq_calc_sec_to_tick_by_bpm_round */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int seq_calc_sec_to_tick_by_bpm_round
              (float param_1,undefined8 param_2,double param_3,undefined8 param_4,int param_5)

{
                    /* 0x2f80  42  seq_calc_sec_to_tick_by_bpm_round */
  return (int)((param_3 / _DAT_18002e7d0) * (double)param_5 * (double)param_1 + _DAT_18002e7b0);
}

/* Function: seq_calc_sec_to_tick_by_bpm_ceil */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int seq_calc_sec_to_tick_by_bpm_ceil
              (float param_1,undefined8 param_2,double param_3,undefined8 param_4,int param_5)

{
  double dVar1;
  
                    /* 0x2fb0  41  seq_calc_sec_to_tick_by_bpm_ceil */
  dVar1 = FUN_1800248f8((param_3 / _DAT_18002e7d0) * (double)param_5 * (double)param_1);
  return (int)dVar1;
}

/* Function: seq_calc_tick_to_sec_by_bpm */
void seq_calc_tick_to_sec_by_bpm(void)

{
                    /* 0x2ff0  44  seq_calc_tick_to_sec_by_bpm */
  return;
}

/* Function: FUN_180003020 */
undefined8 FUN_180003020(longlong param_1,undefined4 *param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar11;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  uVar4 = param_2[5];
  uVar5 = param_2[6];
  uVar6 = param_2[7];
  *(undefined4 *)(param_1 + 0x18) = param_2[4];
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  uVar4 = param_2[9];
  uVar5 = param_2[10];
  uVar6 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x28) = param_2[8];
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  uVar4 = param_2[0xd];
  uVar5 = param_2[0xe];
  uVar6 = param_2[0xf];
  *(undefined4 *)(param_1 + 0x38) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x44) = uVar6;
  if (*(int *)(param_1 + 0x28) < 1) {
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  else {
    pvVar7 = malloc((longlong)*(int *)(param_1 + 0x28) * 0x78);
    uVar11 = 0;
    *(void **)(param_1 + 0x150) = pvVar7;
    uVar15 = uVar11;
    uVar13 = uVar11;
    do {
      lVar3 = *(longlong *)(param_2 + 0x10);
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x150) + uVar13);
      uVar13 = uVar13 + 0x78;
      puVar1 = (undefined4 *)(uVar15 + lVar3);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar9 = *puVar1;
      puVar9[1] = uVar4;
      puVar9[2] = uVar5;
      puVar9[3] = uVar6;
      puVar1 = (undefined4 *)(uVar15 + 0x10 + lVar3);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar9[4] = *puVar1;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      puVar9[7] = uVar6;
      puVar1 = (undefined4 *)(uVar15 + 0x20 + lVar3);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar9[8] = *puVar1;
      puVar9[9] = uVar4;
      puVar9[10] = uVar5;
      puVar9[0xb] = uVar6;
      puVar1 = (undefined4 *)(uVar15 + 0x30 + lVar3);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar9[0xc] = *puVar1;
      puVar9[0xd] = uVar4;
      puVar9[0xe] = uVar5;
      puVar9[0xf] = uVar6;
      puVar1 = (undefined4 *)(uVar15 + 0x40 + lVar3);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar9[0x10] = *puVar1;
      puVar9[0x11] = uVar4;
      puVar9[0x12] = uVar5;
      puVar9[0x13] = uVar6;
      puVar1 = (undefined4 *)(uVar15 + 0x50 + lVar3);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar9[0x14] = *puVar1;
      puVar9[0x15] = uVar4;
      puVar9[0x16] = uVar5;
      puVar9[0x17] = uVar6;
      puVar1 = (undefined4 *)(uVar15 + 0x60 + lVar3);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar9[0x18] = *puVar1;
      puVar9[0x19] = uVar4;
      puVar9[0x1a] = uVar5;
      puVar9[0x1b] = uVar6;
      *(undefined8 *)(puVar9 + 0x1c) = 0;
      uVar15 = uVar15 + 0x70;
    } while ((int)uVar10 < *(int *)(param_1 + 0x28));
  }
  uVar15 = 0;
  if (*(int *)(param_1 + 0x2c) < 1) {
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  else {
    pvVar7 = malloc((longlong)*(int *)(param_1 + 0x2c) * 0x18);
    *(void **)(param_1 + 0x158) = pvVar7;
    uVar11 = uVar15;
    uVar14 = uVar15;
    uVar13 = uVar15;
    do {
      lVar3 = *(longlong *)(param_1 + 0x158);
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar13 = uVar13 + 0x18;
      puVar1 = (undefined4 *)(uVar14 + *(longlong *)(param_2 + 0x12));
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar9 = (undefined4 *)(lVar3 + -0x18 + uVar13);
      *puVar9 = *puVar1;
      puVar9[1] = uVar4;
      puVar9[2] = uVar5;
      puVar9[3] = uVar6;
      *(undefined8 *)(lVar3 + -8 + uVar13) = 0;
      uVar14 = uVar14 + 0x10;
    } while ((int)uVar10 < *(int *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x30) < 1) {
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  else {
    pvVar7 = malloc((longlong)*(int *)(param_1 + 0x30) * 0x18);
    *(void **)(param_1 + 0x160) = pvVar7;
    uVar14 = uVar15;
    uVar11 = uVar15;
    uVar13 = uVar15;
    do {
      lVar3 = *(longlong *)(param_1 + 0x160);
      uVar10 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar10;
      uVar13 = uVar13 + 0x18;
      *(undefined8 *)(lVar3 + -0x18 + uVar13) =
           *(undefined8 *)(uVar11 + *(longlong *)(param_2 + 0x14));
      *(undefined8 *)(lVar3 + -0x10 + uVar13) = 0;
      *(undefined8 *)(lVar3 + -8 + uVar13) = 0;
      uVar11 = uVar11 + 8;
    } while ((int)uVar10 < *(int *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x34) < 1) {
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  else {
    pvVar7 = malloc((longlong)*(int *)(param_1 + 0x34) * 0x30);
    *(void **)(param_1 + 0x168) = pvVar7;
    uVar13 = uVar15;
    uVar11 = uVar15;
    uVar14 = uVar15;
    do {
      lVar3 = *(longlong *)(param_2 + 0x16);
      uVar10 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar10;
      puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x168) + uVar14);
      uVar14 = uVar14 + 0x30;
      puVar1 = (undefined4 *)(uVar11 + lVar3);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar9 = *puVar1;
      puVar9[1] = uVar4;
      puVar9[2] = uVar5;
      puVar9[3] = uVar6;
      *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(uVar11 + 0x10 + lVar3);
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      *(undefined8 *)(puVar9 + 10) = 0;
      uVar11 = uVar11 + 0x18;
    } while ((int)uVar10 < *(int *)(param_1 + 0x34));
  }
  uVar13 = uVar15;
  uVar11 = uVar15;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x158);
      iVar2 = *(int *)(lVar3 + 4 + uVar13);
      lVar12 = *(longlong *)(param_2 + 0x12) + uVar15;
      if (0 < iVar2) {
        if (param_3 == '\0') {
          *(undefined8 *)(lVar3 + 8 + uVar13) = *(undefined8 *)(lVar12 + 8);
          *(undefined4 *)(lVar12 + 4) = 0;
          *(undefined8 *)(lVar12 + 8) = 0;
        }
        else {
          puVar8 = (undefined8 *)malloc((longlong)iVar2);
          *(undefined8 **)(lVar3 + 8 + uVar13) = puVar8;
          FUN_18000f860(puVar8,*(undefined8 **)(lVar12 + 8),(longlong)iVar2);
        }
      }
      uVar10 = (int)uVar11 + 1;
      uVar15 = uVar15 + 0x10;
      uVar13 = uVar13 + 0x18;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(param_1 + 0x2c));
  }
  return 0;
}

/* Function: FUN_1800032f0 */
undefined8 FUN_1800032f0(longlong param_1)

{
  double dVar1;
  int *piVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    DAT_180039110 = 0xfffffed5;
    return 0xfffffed5;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  piVar2 = (int *)malloc(0x78);
  dVar1 = DAT_18002e7d8;
  iVar3 = 0x180;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  *(int **)(param_1 + 0x150) = piVar2;
  FUN_1800029d0(param_1 + 8,piVar2,0,iVar3,dVar1,4);
  return 0;
}

/* Function: FUN_180003370 */
int FUN_180003370(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  if (param_2 == -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined *)(param_1 + 0x50) = 0;
    return 0;
  }
  if (DAT_1800390b0 == '\0') {
    iVar1 = -0x65;
    DAT_180039110 = iVar1;
  }
  else if ((param_2 < 0) || (DAT_1800390e0 <= param_2)) {
    iVar1 = -0x12e;
    DAT_180039110 = iVar1;
  }
  else {
    piVar3 = (int *)((longlong)param_2 * 0x128 + DAT_1800390e8);
    if (*piVar3 == -1) {
      iVar1 = -0x12d;
      DAT_180039110 = iVar1;
    }
    else {
      iVar1 = piVar3[6];
    }
  }
  *(int *)(param_1 + 0x48) = iVar1;
  if (-1 < iVar1) {
    puVar2 = (undefined8 *)seq_stream_get_path(param_2);
    if ((puVar2 != (undefined8 *)0x0) && (0 < *(int *)(param_1 + 0x48))) {
      FUN_18000f860((undefined8 *)(param_1 + 0x50),puVar2,(longlong)*(int *)(param_1 + 0x48));
      *(undefined *)((longlong)*(int *)(param_1 + 0x48) + 0x4f + param_1) = 0;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined *)(param_1 + 0x50) = 0;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined *)(param_1 + 0x50) = 0;
  return DAT_180039110;
}

/* Function: FUN_180003440 */
undefined8 FUN_180003440(int *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_res8;
  int local_res10;
  int local_res18;
  int *local_res20;
  int *local_98;
  
  iVar6 = 0;
  if (0 < param_1[10]) {
    lVar8 = 0;
    do {
      lVar8 = lVar8 + 0x78;
      *(int *)(*(longlong *)(param_1 + 0x54) + -8 + lVar8) = iVar6;
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1[10]);
  }
  iVar6 = 0;
  if (0 < param_1[0xb]) {
    lVar8 = 0;
    do {
      lVar8 = lVar8 + 0x18;
      *(int *)(*(longlong *)(param_1 + 0x56) + -8 + lVar8) = iVar6;
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1[0xb]);
  }
  iVar6 = 0;
  if (0 < param_1[0xc]) {
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x58);
      *(int *)(lVar8 + 8 + lVar7) = iVar6;
      if (0 < *(int *)(lVar8 + lVar7)) {
        pvVar4 = malloc((longlong)*(int *)(lVar8 + lVar7) << 3);
        *(void **)(lVar8 + 0x10 + lVar7) = pvVar4;
      }
      *(undefined4 *)(lVar8 + lVar7) = 0;
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 0x18;
    } while (iVar6 < param_1[0xc]);
  }
  iVar6 = 0;
  if (0 < param_1[0xd]) {
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x5a) + lVar8;
      *(int *)(lVar7 + 0x18) = iVar6;
      if ((*(int *)(lVar7 + 8) < param_1[0xc]) &&
         (piVar5 = (int *)(*(longlong *)(param_1 + 0x58) + (longlong)*(int *)(lVar7 + 8) * 0x18),
         piVar5 != (int *)0x0)) {
        *(int *)(lVar7 + 0x28) = *piVar5;
        *piVar5 = *piVar5 + 1;
        *(longlong *)(*(longlong *)(piVar5 + 4) + (longlong)*(int *)(lVar7 + 0x28) * 8) = lVar7;
      }
      else {
        *(undefined4 *)(lVar7 + 8) = 0xffffffff;
        *(undefined4 *)(lVar7 + 0x28) = 0xffffffff;
      }
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 0x30;
    } while (iVar6 < param_1[0xd]);
  }
  if (0 < param_1[0xe]) {
    pvVar4 = malloc((longlong)param_1[0xe] * 0x18);
    local_98 = *(int **)(param_1 + 0x54);
    *(void **)(param_1 + 0x5c) = pvVar4;
    local_res8 = 0;
    if (local_98[0x1c] + 1 < param_1[10]) {
      local_res20 = local_98 + (longlong)(local_98[0x1c] + 1) * 0x1e;
    }
    else {
      local_res20 = (int *)0x0;
    }
    iVar6 = 0;
    lVar8 = 0;
    local_res10 = 0;
    local_res18 = 0;
    fVar12 = DAT_18002e800;
    fVar13 = DAT_18002e7fc;
    fVar14 = DAT_18002e794;
    fVar15 = DAT_18002e78c;
    do {
      lVar7 = *(longlong *)(param_1 + 0x5c);
      *(int *)(lVar8 + lVar7) = local_res18;
      iVar10 = local_98[0x1c];
      *(int *)(lVar8 + 8 + lVar7) = local_res8;
      *(int *)(lVar8 + 4 + lVar7) = iVar10;
      local_res8 = local_res8 + local_98[0xc];
      if ((local_res20 != (int *)0x0) && (iVar10 = *local_res20, iVar10 <= local_res8)) {
        if (iVar10 < local_res8) {
          local_res8 = iVar10;
        }
        local_98 = local_res20;
        if (local_res20[0x1c] < param_1[10]) {
          local_res20 = (int *)((longlong)(local_res20[0x1c] + 1) * 0x78 +
                               *(longlong *)(param_1 + 0x54));
        }
        else {
          local_res20 = (int *)0x0;
        }
      }
      *(undefined4 *)(lVar8 + 0xc + lVar7) = 0xffffffff;
      *(undefined4 *)(lVar8 + 0x10 + lVar7) = 0;
      if ((param_1[2] - 100U < 100) && (iVar6 < param_1[0xd])) {
        lVar9 = (longlong)iVar6 * 0x30;
        iVar10 = iVar6;
        do {
          lVar2 = *(longlong *)(param_1 + 0x5a);
          iVar6 = *(int *)(lVar9 + lVar2);
          if (local_res8 <= iVar6) {
            local_res10 = *(int *)(lVar9 + 0x18 + lVar2);
            iVar6 = local_res10;
            break;
          }
          piVar5 = (int *)(lVar8 + 8 + lVar7);
          if (*piVar5 == iVar6 || *piVar5 < iVar6) {
            if (*(int *)(lVar8 + 0xc + lVar7) == -1) {
              *(undefined4 *)(lVar8 + 0xc + lVar7) = *(undefined4 *)(lVar9 + 0x18 + lVar2);
            }
            piVar5 = (int *)(lVar8 + 0x10 + lVar7);
            *piVar5 = *piVar5 + 1;
            iVar6 = *(int *)(lVar9 + lVar2);
            *(int *)(lVar9 + 0x1c + lVar2) = *(int *)(lVar9 + 4 + lVar2) + iVar6;
            iVar1 = *(int *)(lVar8 + 4 + lVar7);
            iVar3 = *param_1;
            fVar11 = fVar12;
            if (DAT_1800390b0 == '\0') {
              DAT_180039110 = 0xffffff9b;
            }
            else if ((iVar3 < 0) || (DAT_1800390b4 <= iVar3)) {
              DAT_180039110 = 0xffffff36;
            }
            else {
              piVar5 = (int *)((longlong)iVar3 * 0x180 + DAT_1800390c0);
              if (*piVar5 == -1) {
                DAT_180039110 = 0xffffff37;
              }
              else if ((iVar1 < 0) || (piVar5[10] <= iVar1)) {
                DAT_180039110 = 0xffffff35;
              }
              else {
                piVar5 = (int *)((longlong)iVar1 * 0x78 + *(longlong *)(piVar5 + 0x54));
                if (piVar5 != (int *)0x0) {
                  if (*piVar5 < iVar6) {
                    iVar6 = iVar6 - *piVar5;
                  }
                  else {
                    iVar6 = 0;
                  }
                  fVar11 = (float)(int)((float)((double)iVar6 * *(double *)(piVar5 + 0x14)) * fVar13
                                        + (float)piVar5[2] * fVar13 + fVar14) * fVar15;
                }
              }
            }
            *(float *)(lVar9 + 0x20 + lVar2) = fVar11;
            if (0 < *(int *)(lVar9 + 4 + lVar2)) {
              iVar6 = *(int *)(lVar9 + 0x1c + lVar2);
              iVar1 = *param_1;
              iVar3 = seq_calc_search_tempo_by_tick(iVar1,iVar6);
              fVar11 = fVar12;
              if (-1 < iVar3) {
                if (DAT_1800390b0 == '\0') {
                  DAT_180039110 = 0xffffff9b;
                }
                else if ((iVar1 < 0) || (DAT_1800390b4 <= iVar1)) {
                  DAT_180039110 = 0xffffff36;
                }
                else {
                  piVar5 = (int *)((longlong)iVar1 * 0x180 + DAT_1800390c0);
                  if (*piVar5 == -1) {
                    DAT_180039110 = 0xffffff37;
                  }
                  else if (iVar3 < piVar5[10]) {
                    piVar5 = (int *)((longlong)iVar3 * 0x78 + *(longlong *)(piVar5 + 0x54));
                    if (piVar5 != (int *)0x0) {
                      if (*piVar5 < iVar6) {
                        iVar6 = iVar6 - *piVar5;
                      }
                      else {
                        iVar6 = 0;
                      }
                      fVar11 = (float)(int)((float)((double)iVar6 * *(double *)(piVar5 + 0x14)) *
                                            fVar13 + (float)piVar5[2] * fVar13 + fVar14) * fVar15;
                    }
                  }
                  else {
                    DAT_180039110 = 0xffffff35;
                  }
                }
              }
            }
            *(float *)(lVar9 + 0x24 + lVar2) = fVar11;
          }
          iVar10 = iVar10 + 1;
          lVar9 = lVar9 + 0x30;
          iVar6 = local_res10;
        } while (iVar10 < param_1[0xd]);
      }
      local_res18 = local_res18 + 1;
      lVar8 = lVar8 + 0x18;
    } while (local_res18 < param_1[0xe]);
  }
  return 0;
}

/* Function: seq_context_open */
int seq_context_open(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
                    /* 0x3970  56  seq_context_open */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  iVar2 = 0;
  iVar1 = DAT_1800390b8;
  if (0 < DAT_1800390b4) {
    do {
      DAT_1800390b8 = iVar1 + 1;
      if (DAT_1800390b4 == DAT_1800390b8) {
        DAT_1800390b8 = 0;
      }
      piVar3 = (int *)((longlong)iVar1 * 0x180 + DAT_1800390c0);
      if (*piVar3 == -1) {
        if (iVar1 < 0) {
          DAT_180039110 = 0xffffff33;
          return -0xcd;
        }
        uVar4 = 0x17c;
        lVar6 = DAT_1800390c0;
        FUN_180012b90((undefined (*) [16])(piVar3 + 1),0,0x17c);
        *piVar3 = iVar1;
        if (param_1 != (undefined4 *)0x0) {
          uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          uVar4 = FUN_180003020((longlong)piVar3,param_1,'\x01');
          if (-1 < (int)uVar4) {
            if (piVar3[10] < 1) {
              FUN_180005d70((longlong)"seq_context_open: tempoCount <= 0 !!",param_1,uVar5,lVar6);
              FUN_1800032f0((longlong)piVar3);
            }
            else if (**(int **)(piVar3 + 0x54) != 0) {
              FUN_180005d70((longlong)"seq_context_open: firstTempo.tick != 0 !!",param_1,uVar5,
                            lVar6);
              **(undefined4 **)(piVar3 + 0x54) = 0;
            }
            piVar3[0x12] = 0;
            *(undefined *)(piVar3 + 0x14) = 0;
            uVar4 = FUN_180003440(piVar3);
            if (-1 < (int)uVar4) {
              return iVar1;
            }
          }
        }
        seq_context_close(iVar1);
        return DAT_180039110;
      }
      iVar2 = iVar2 + 1;
      iVar1 = DAT_1800390b8;
    } while (iVar2 < DAT_1800390b4);
  }
  DAT_180039110 = 0xffffff33;
  return -0xcd;
}

/* Function: seq_context_open_from_stream */
uint seq_context_open_from_stream(undefined8 param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  undefined (*pauVar3) [16];
  undefined8 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined (*pauVar8) [16];
  uint *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 extraout_XMM0_Qa;
  
                    /* 0x3ac0  59  seq_context_open_from_stream */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  if (-1 < param_3) {
    iVar7 = 0;
    uVar5 = DAT_1800390b8;
    if (0 < (int)DAT_1800390b4) {
      do {
        DAT_1800390b8 = uVar5 + 1;
        if (DAT_1800390b4 == DAT_1800390b8) {
          DAT_1800390b8 = 0;
        }
        puVar9 = (uint *)((longlong)(int)uVar5 * 0x180 + DAT_1800390c0);
        if (*puVar9 == 0xffffffff) {
          if ((int)uVar5 < 0) {
            DAT_180039110 = 0xffffff33;
            return 0xffffff33;
          }
          lVar11 = DAT_1800390c0;
          FUN_180012b90((undefined (*) [16])(puVar9 + 1),0,0x17c);
          *puVar9 = uVar5;
          pauVar3 = FUN_180004580(extraout_XMM0_Qa,param_2,param_3);
          if (pauVar3 != (undefined (*) [16])0x0) {
            if (DAT_1800390b0 == '\0') {
              uVar2 = 0xffffff9b;
              DAT_180039110 = uVar2;
            }
            else if (param_3 < DAT_1800390e0) {
              piVar6 = (int *)((longlong)param_3 * 0x128 + DAT_1800390e8);
              if (*piVar6 == -1) {
                uVar2 = 0xfffffed3;
                DAT_180039110 = uVar2;
              }
              else {
                uVar2 = piVar6[2];
              }
            }
            else {
              uVar2 = 0xfffffed2;
              DAT_180039110 = uVar2;
            }
            bVar1 = (byte)(uVar2 >> 0xc) & 1;
            uVar10 = (ulonglong)bVar1;
            pauVar8 = pauVar3;
            uVar4 = FUN_180003020((longlong)puVar9,(undefined4 *)pauVar3,bVar1);
            if (-1 < (int)uVar4) {
              if ((int)puVar9[10] < 1) {
                FUN_180005d70((longlong)"seq_context_open: tempoCount <= 0 !!",pauVar8,uVar10,lVar11
                             );
                FUN_1800032f0((longlong)puVar9);
              }
              else if (**(int **)(puVar9 + 0x54) != 0) {
                FUN_180005d70((longlong)"seq_context_open: firstTempo.tick != 0 !!",pauVar8,uVar10,
                              lVar11);
                **(undefined4 **)(puVar9 + 0x54) = 0;
              }
              iVar7 = FUN_180003370((longlong)puVar9,param_3);
              if ((-1 < iVar7) && (uVar4 = FUN_180003440((int *)puVar9), -1 < (int)uVar4)) {
                FUN_180005580(pauVar3);
                return uVar5;
              }
            }
            FUN_180005580(pauVar3);
          }
          seq_context_close(uVar5);
          return DAT_180039110;
        }
        iVar7 = iVar7 + 1;
        uVar5 = DAT_1800390b8;
      } while (iVar7 < (int)DAT_1800390b4);
    }
    DAT_180039110 = 0xffffff33;
    return 0xffffff33;
  }
  DAT_180039110 = 0xffffff34;
  return 0xffffff34;
}

/* Function: seq_context_open_from_file */
uint seq_context_open_from_file
               (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar4;
  uint uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar6;
  uint *puVar3;
  
                    /* 0x3c90  58  seq_context_open_from_file */
  if (DAT_1800390b0 != '\0') {
    puVar3 = (uint *)0x0;
    puVar4 = puVar3;
    uVar5 = 0xffffffff;
    if (0 < (int)DAT_1800390e0) {
      do {
        uVar2 = DAT_1800390e4 + 1;
        if (DAT_1800390e0 == DAT_1800390e4 + 1) {
          uVar2 = 0;
        }
        puVar4 = (uint *)((longlong)(int)DAT_1800390e4 * 0x128 + DAT_1800390e8);
        uVar5 = DAT_1800390e4;
        DAT_1800390e4 = uVar2;
      } while ((*puVar4 != 0xffffffff) &&
              (uVar2 = (int)puVar3 + 1, puVar3 = (uint *)(ulonglong)uVar2, uVar5 = 0xffffffff,
              (int)uVar2 < (int)DAT_1800390e0));
    }
    FUN_180012b90((undefined (*) [16])(puVar4 + 1),0,0x124);
    *(undefined8 *)(puVar4 + 1) = 0;
    *(undefined8 *)(puVar4 + 3) = 0;
    puVar4[5] = 0;
    *puVar4 = uVar5;
    puVar4[6] = param_3;
    if (param_3 == 0) {
      *(undefined *)(puVar4 + 7) = 0;
    }
    else {
      FUN_18000f860((undefined8 *)(puVar4 + 7),param_4,(longlong)(int)param_3);
    }
    iVar1 = (**(code **)((&DAT_1800390f0)[(int)puVar4[1]] + 0x18))();
    if (iVar1 < 0) {
      seq_stream_close(uVar5);
      uVar6 = extraout_XMM0_Qa_00;
      uVar5 = DAT_180039110;
    }
    else {
      uVar6 = extraout_XMM0_Qa;
      if ((puVar4[3] != 0) &&
         (iVar1 = seq_stream_seek(uVar5,0,0), uVar6 = extraout_XMM0_Qa_01, iVar1 < 0)) {
        seq_stream_close(uVar5);
        uVar6 = extraout_XMM0_Qa_02;
        uVar5 = DAT_180039110;
      }
    }
    uVar2 = DAT_180039110;
    if (-1 < (int)uVar5) {
      uVar2 = seq_context_open_from_stream(uVar6,param_2,uVar5);
      seq_stream_close(uVar5);
    }
    return uVar2;
  }
  DAT_180039110 = 0xffffff9b;
  return 0xffffff9b;
}

/* Function: seq_context_open_from_uri */
uint seq_context_open_from_uri
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 extraout_XMM0_Qa;
  
                    /* 0x3e00  60  seq_context_open_from_uri */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  uVar3 = seq_stream_open_from_uri(param_3,param_4);
  iVar1 = (int)uVar3;
  if (iVar1 < 0) {
    return DAT_180039110;
  }
  uVar2 = seq_context_open_from_stream(extraout_XMM0_Qa,param_2,iVar1);
  seq_stream_close(iVar1);
  return uVar2;
}

/* Function: seq_context_open_advanced */
uint seq_context_open_advanced
               (undefined8 param_1,undefined8 param_2,int param_3,uint param_4,int param_5,
               int param_6,int param_7,undefined8 *param_8)

{
  int iVar1;
  uint uVar2;
  undefined8 extraout_XMM0_Qa;
  
                    /* 0x3e70  57  seq_context_open_advanced */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  iVar1 = seq_stream_open(param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 < 0) {
    return DAT_180039110;
  }
  uVar2 = seq_context_open_from_stream(extraout_XMM0_Qa,param_2,iVar1);
  seq_stream_close(iVar1);
  return uVar2;
}

/* Function: seq_context_close */
undefined8 seq_context_close(int param_1)

{
  void *pvVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
                    /* 0x3ef0  47  seq_context_close */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390b4)) {
    piVar2 = (int *)((longlong)param_1 * 0x180 + DAT_1800390c0);
    if (*piVar2 != -1) {
      seq_sequencer_close_all_by_context(param_1);
      uVar6 = 0;
      uVar3 = uVar6;
      uVar5 = uVar6;
      if (0 < piVar2[0xb]) {
        do {
          pvVar1 = *(void **)(*(longlong *)(piVar2 + 0x56) + 8 + uVar3);
          if (pvVar1 != (void *)0x0) {
            free(pvVar1);
          }
          uVar4 = (int)uVar5 + 1;
          uVar3 = uVar3 + 0x18;
          uVar5 = (ulonglong)uVar4;
        } while ((int)uVar4 < piVar2[0xb]);
      }
      uVar3 = uVar6;
      if (0 < piVar2[0xc]) {
        do {
          pvVar1 = *(void **)(uVar6 + 0x10 + *(longlong *)(piVar2 + 0x58));
          if (pvVar1 != (void *)0x0) {
            free(pvVar1);
          }
          uVar4 = (int)uVar3 + 1;
          uVar6 = uVar6 + 0x18;
          uVar3 = (ulonglong)uVar4;
        } while ((int)uVar4 < piVar2[0xc]);
      }
      if (*(void **)(piVar2 + 0x5a) != (void *)0x0) {
        free(*(void **)(piVar2 + 0x5a));
      }
      if (*(void **)(piVar2 + 0x5c) != (void *)0x0) {
        free(*(void **)(piVar2 + 0x5c));
      }
      if (*(void **)(piVar2 + 0x58) != (void *)0x0) {
        free(*(void **)(piVar2 + 0x58));
      }
      if (*(void **)(piVar2 + 0x56) != (void *)0x0) {
        free(*(void **)(piVar2 + 0x56));
      }
      if (*(void **)(piVar2 + 0x54) != (void *)0x0) {
        free(*(void **)(piVar2 + 0x54));
      }
      *piVar2 = -1;
      return 0;
    }
    DAT_180039110 = 0xffffff37;
    return 0xffffff37;
  }
  DAT_180039110 = 0xffffff36;
  return 0xffffff36;
}

/* Function: seq_context_close_all */
int seq_context_close_all(void)

{
  void *pvVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
                    /* 0x4060  48  seq_context_close_all */
  if (DAT_1800390b0 != '\0') {
    iVar8 = 0;
    iVar4 = 0;
    if (0 < DAT_1800390b4) {
      lVar7 = 0;
      iVar6 = DAT_1800390b4;
      cVar3 = DAT_1800390b0;
      do {
        lVar2 = DAT_1800390c0;
        if (*(int *)(lVar7 + DAT_1800390c0) != -1) {
          if (cVar3 == '\0') {
            DAT_180039110 = 0xffffff9b;
          }
          else if ((iVar4 < 0) || (iVar6 <= iVar4)) {
            DAT_180039110 = 0xffffff36;
          }
          else if (*(int *)(lVar7 + DAT_1800390c0) == -1) {
            DAT_180039110 = 0xffffff37;
          }
          else {
            seq_sequencer_close_all_by_context(iVar4);
            iVar6 = 0;
            if (0 < *(int *)(lVar7 + 0x2c + lVar2)) {
              lVar5 = 0;
              do {
                pvVar1 = *(void **)(lVar5 + 8 + *(longlong *)(lVar7 + 0x158 + lVar2));
                if (pvVar1 != (void *)0x0) {
                  free(pvVar1);
                }
                iVar6 = iVar6 + 1;
                lVar5 = lVar5 + 0x18;
              } while (iVar6 < *(int *)(lVar7 + 0x2c + lVar2));
            }
            iVar6 = 0;
            if (0 < *(int *)(lVar7 + 0x30 + lVar2)) {
              lVar5 = 0;
              do {
                pvVar1 = *(void **)(lVar5 + 0x10 + *(longlong *)(lVar7 + 0x160 + lVar2));
                if (pvVar1 != (void *)0x0) {
                  free(pvVar1);
                }
                iVar6 = iVar6 + 1;
                lVar5 = lVar5 + 0x18;
              } while (iVar6 < *(int *)(lVar7 + 0x30 + lVar2));
            }
            pvVar1 = *(void **)(lVar7 + 0x168 + lVar2);
            if (pvVar1 != (void *)0x0) {
              free(pvVar1);
            }
            pvVar1 = *(void **)(lVar7 + 0x170 + lVar2);
            if (pvVar1 != (void *)0x0) {
              free(pvVar1);
            }
            pvVar1 = *(void **)(lVar7 + 0x160 + lVar2);
            if (pvVar1 != (void *)0x0) {
              free(pvVar1);
            }
            pvVar1 = *(void **)(lVar7 + 0x158 + lVar2);
            if (pvVar1 != (void *)0x0) {
              free(pvVar1);
            }
            pvVar1 = *(void **)(lVar7 + 0x150 + lVar2);
            if (pvVar1 != (void *)0x0) {
              free(pvVar1);
            }
            *(undefined4 *)(lVar7 + lVar2) = 0xffffffff;
            iVar8 = iVar8 + 1;
            iVar6 = DAT_1800390b4;
            cVar3 = DAT_1800390b0;
          }
        }
        iVar4 = iVar4 + 1;
        lVar7 = lVar7 + 0x180;
      } while (iVar4 < iVar6);
    }
    DAT_1800390b8 = 0;
    return iVar8;
  }
  DAT_180039110 = 0xffffff9b;
  return -0x65;
}

/* Function: seq_context_is_opened */
longlong seq_context_is_opened(int param_1)

{
  undefined8 in_RAX;
  uint7 uVar1;
  
                    /* 0x4240  55  seq_context_is_opened */
  uVar1 = (uint7)((ulonglong)in_RAX >> 8);
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return (ulonglong)uVar1 << 8;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390b4)) {
    uVar1 = (uint7)((ulonglong)DAT_1800390c0 >> 8);
    if (*(int *)((longlong)param_1 * 0x180 + DAT_1800390c0) == -1) {
      DAT_180039110 = 0xffffff37;
      return (ulonglong)uVar1 << 8;
    }
    return CONCAT71(uVar1,1);
  }
  DAT_180039110 = 0xffffff36;
  return (ulonglong)uVar1 << 8;
}

/* Function: seq_context_get_info */
int * seq_context_get_info(int param_1)

{
  int *piVar1;
  
                    /* 0x42a0  51  seq_context_get_info */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return (int *)0x0;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390b4)) {
    piVar1 = (int *)((longlong)param_1 * 0x180 + DAT_1800390c0);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xffffff37;
      return (int *)0x0;
    }
    return piVar1 + 2;
  }
  DAT_180039110 = 0xffffff36;
  return (int *)0x0;
}

/* Function: seq_context_get_tempo */
longlong seq_context_get_tempo(int param_1,int param_2)

{
  int *piVar1;
  
                    /* 0x4300  54  seq_context_get_tempo */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0;
  }
  if ((param_1 < 0) || (DAT_1800390b4 <= param_1)) {
    DAT_180039110 = 0xffffff36;
    return 0;
  }
  piVar1 = (int *)((longlong)param_1 * 0x180 + DAT_1800390c0);
  if (*piVar1 == -1) {
    DAT_180039110 = 0xffffff37;
    return 0;
  }
  if ((-1 < param_2) && (param_2 < piVar1[10])) {
    return (longlong)param_2 * 0x78 + *(longlong *)(piVar1 + 0x54);
  }
  DAT_180039110 = 0xffffff35;
  return 0;
}

/* Function: seq_context_get_object */
longlong seq_context_get_object(int param_1,int param_2)

{
  int *piVar1;
  
                    /* 0x4380  53  seq_context_get_object */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0;
  }
  if ((param_1 < 0) || (DAT_1800390b4 <= param_1)) {
    DAT_180039110 = 0xffffff36;
    return 0;
  }
  piVar1 = (int *)((longlong)param_1 * 0x180 + DAT_1800390c0);
  if (*piVar1 == -1) {
    DAT_180039110 = 0xffffff37;
    return 0;
  }
  if ((-1 < param_2) && (param_2 < piVar1[0xb])) {
    return *(longlong *)(piVar1 + 0x56) + (longlong)param_2 * 0x18;
  }
  DAT_180039110 = 0xffffff35;
  return 0;
}

/* Function: seq_context_get_channel */
longlong seq_context_get_channel(int param_1,int param_2)

{
  int *piVar1;
  
                    /* 0x4400  49  seq_context_get_channel */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0;
  }
  if ((param_1 < 0) || (DAT_1800390b4 <= param_1)) {
    DAT_180039110 = 0xffffff36;
    return 0;
  }
  piVar1 = (int *)((longlong)param_1 * 0x180 + DAT_1800390c0);
  if (*piVar1 == -1) {
    DAT_180039110 = 0xffffff37;
    return 0;
  }
  if ((-1 < param_2) && (param_2 < piVar1[0xc])) {
    return *(longlong *)(piVar1 + 0x58) + (longlong)param_2 * 0x18;
  }
  DAT_180039110 = 0xffffff35;
  return 0;
}

/* Function: seq_context_get_event */
longlong seq_context_get_event(int param_1,int param_2)

{
  int *piVar1;
  
                    /* 0x4480  50  seq_context_get_event */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0;
  }
  if ((param_1 < 0) || (DAT_1800390b4 <= param_1)) {
    DAT_180039110 = 0xffffff36;
    return 0;
  }
  piVar1 = (int *)((longlong)param_1 * 0x180 + DAT_1800390c0);
  if (*piVar1 == -1) {
    DAT_180039110 = 0xffffff37;
    return 0;
  }
  if ((-1 < param_2) && (param_2 < piVar1[0xd])) {
    return (longlong)param_2 * 0x30 + *(longlong *)(piVar1 + 0x5a);
  }
  DAT_180039110 = 0xffffff35;
  return 0;
}

/* Function: seq_context_get_measure */
longlong seq_context_get_measure(int param_1,int param_2)

{
  int *piVar1;
  
                    /* 0x4500  52  seq_context_get_measure */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0;
  }
  if ((param_1 < 0) || (DAT_1800390b4 <= param_1)) {
    DAT_180039110 = 0xffffff36;
    return 0;
  }
  piVar1 = (int *)((longlong)param_1 * 0x180 + DAT_1800390c0);
  if (*piVar1 == -1) {
    DAT_180039110 = 0xffffff37;
    return 0;
  }
  if ((-1 < param_2) && (param_2 < piVar1[0xe])) {
    return *(longlong *)(piVar1 + 0x5c) + (longlong)param_2 * 0x18;
  }
  DAT_180039110 = 0xffffff35;
  return 0;
}

/* Function: FUN_180004580 */
undefined (*) [16] FUN_180004580(undefined8 param_1,undefined8 param_2,int param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  void *pvVar6;
  uint uVar7;
  int *piVar8;
  size_t _Size;
  int *piVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar16;
  
  iVar2 = seq_stream_seek(param_3,0,0);
  if (iVar2 < 0) {
    return (undefined (*) [16])0x0;
  }
  pauVar4 = (undefined (*) [16])malloc(0x68);
  FUN_180012b90(pauVar4,0,0x68);
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    FUN_180005580(pauVar4);
    return (undefined (*) [16])0x0;
  }
  if ((param_3 < 0) || (DAT_1800390e0 <= param_3)) {
    DAT_180039110 = -0x12e;
LAB_180004a97:
    FUN_180005580(pauVar4);
    return (undefined (*) [16])0x0;
  }
  lVar14 = (longlong)param_3 * 0x128;
  piVar8 = (int *)(DAT_1800390e8 + lVar14);
  if (*piVar8 == -1) {
    DAT_180039110 = 0xfffffed3;
    FUN_180005580(pauVar4);
    return (undefined (*) [16])0x0;
  }
  if (pauVar4 == (undefined (*) [16])0x0) {
    DAT_180039110 = 0xfffffec2;
    FUN_180005580((void *)0x0);
    return (undefined (*) [16])0x0;
  }
  if ((ulonglong)(longlong)piVar8[4] < (ulonglong)((longlong)piVar8[5] + 4 + (longlong)piVar8[3])) {
    DAT_180039110 = 0xfffffec7;
    FUN_180005580(pauVar4);
    return (undefined (*) [16])0x0;
  }
  uVar11 = 4;
  uVar13 = (&DAT_1800390f0)[piVar8[1]];
  pauVar5 = pauVar4;
  iVar2 = (**(code **)(uVar13 + 0x28))();
  if (iVar2 < 0) {
    seq_stream_tell(param_3);
    uVar16 = extraout_XMM0_Qa_00;
    if (DAT_180039110 < 0) goto LAB_180004a97;
  }
  else {
    piVar8[5] = piVar8[5] + 4;
    uVar16 = extraout_XMM0_Qa;
  }
  iVar2 = *(int *)*pauVar4;
  if ((iVar2 == 0x66) || (iVar2 == 0xca)) {
    pauVar5 = (undefined (*) [16])(*pauVar4 + 4);
    uVar11 = 0x3c;
    iVar2 = seq_stream_read(param_3,(longlong)pauVar5,0x3c);
    if (iVar2 < 0) goto LAB_180004a97;
  }
  else if (iVar2 < 0xca) {
    pauVar4 = (undefined (*) [16])FUN_180004ab0(uVar16,param_2,param_3,(int *)pauVar4);
    return pauVar4;
  }
  if (0x66 < *(int *)*pauVar4 - 100U) {
    FUN_180005580(pauVar4);
    DAT_180039110 = 0xfffffe6f;
    return (undefined (*) [16])0x0;
  }
  if (*(int *)pauVar4[2] < 1) {
    FUN_180005d70((longlong)"seq_data_read: tempoCount <= 0 !!",pauVar5,uVar11,uVar13);
    *(undefined4 *)pauVar4[2] = 1;
    piVar8 = (int *)malloc(0x70);
    dVar1 = DAT_18002e7d8;
    uVar13 = 0x180;
    if (0 < (int)*(uint *)(*pauVar4 + 4)) {
      uVar13 = (ulonglong)*(uint *)(*pauVar4 + 4);
    }
    uVar12 = 0;
    *(int **)pauVar4[4] = piVar8;
    FUN_1800029d0((longlong)pauVar4,piVar8,0,(int)uVar13,dVar1,4);
  }
  else {
    uVar7 = *(int *)pauVar4[2] * 0x70;
    piVar8 = (int *)malloc((longlong)(int)uVar7);
    uVar12 = (ulonglong)uVar7;
    *(int **)pauVar4[4] = piVar8;
    iVar2 = seq_stream_read(param_3,(longlong)piVar8,uVar7);
    if (iVar2 < 0) {
      FUN_180005580(pauVar4);
      return (undefined (*) [16])0x0;
    }
  }
  if (**(int **)pauVar4[4] != 0) {
    FUN_180005d70((longlong)"seq_data_read: firstTempo.tick != 0 !!",piVar8,uVar12,uVar13);
    **(undefined4 **)pauVar4[4] = 0;
  }
  if (0 < *(int *)(pauVar4[2] + 4)) {
    _Size = (size_t)(*(int *)(pauVar4[2] + 4) << 4);
    pauVar5 = (undefined (*) [16])malloc(_Size);
    *(undefined (**) [16])(pauVar4[4] + 8) = pauVar5;
    FUN_180012b90(pauVar5,0,_Size);
    iVar2 = 0;
    if (0 < *(int *)(pauVar4[2] + 4)) {
      lVar15 = 0;
      do {
        lVar10 = *(longlong *)(pauVar4[4] + 8) + lVar15;
        piVar8 = (int *)(lVar10 + 4);
        if (DAT_1800390b0 == '\0') {
LAB_180004a5b:
          DAT_180039110 = -0x65;
          goto LAB_180004a65;
        }
        if (DAT_1800390e0 <= param_3) {
LAB_180004a42:
          DAT_180039110 = 0xfffffed2;
          FUN_180005580(pauVar4);
          return (undefined (*) [16])0x0;
        }
        piVar9 = (int *)(DAT_1800390e8 + lVar14);
        if (*piVar9 == -1) {
LAB_180004a2c:
          DAT_180039110 = 0xfffffed3;
          FUN_180005580(pauVar4);
          return (undefined (*) [16])0x0;
        }
        if (piVar8 == (int *)0x0) {
          DAT_180039110 = 0xfffffec2;
          FUN_180005580(pauVar4);
          return (undefined (*) [16])0x0;
        }
        if ((ulonglong)(longlong)piVar9[4] <
            (ulonglong)((longlong)piVar9[5] + 4 + (longlong)piVar9[3])) {
LAB_180004a00:
          DAT_180039110 = 0xfffffec7;
          FUN_180005580(pauVar4);
          return (undefined (*) [16])0x0;
        }
        iVar3 = (**(code **)((&DAT_1800390f0)[piVar9[1]] + 0x28))(piVar9,piVar8);
        if (iVar3 < 0) {
          seq_stream_tell(param_3);
          if (DAT_180039110 < 0) goto LAB_180004a65;
        }
        else {
          piVar9[5] = piVar9[5] + 4;
        }
        iVar3 = *piVar8;
        if (iVar3 < 1) {
          *piVar8 = 0;
          *(undefined8 *)(lVar10 + 8) = 0;
        }
        else {
          pvVar6 = malloc((longlong)iVar3);
          *(void **)(lVar10 + 8) = pvVar6;
          iVar3 = seq_stream_read(param_3,(longlong)pvVar6,iVar3);
          if (iVar3 < 0) goto LAB_180004a65;
        }
        if (0 < *piVar8) {
          *(undefined *)((longlong)*piVar8 + -1 + *(longlong *)(lVar10 + 8)) = 0;
        }
        if (DAT_1800390b0 == '\0') goto LAB_180004a5b;
        if (DAT_1800390e0 <= param_3) goto LAB_180004a42;
        piVar8 = (int *)(DAT_1800390e8 + lVar14);
        if (*piVar8 == -1) goto LAB_180004a2c;
        if ((ulonglong)(longlong)piVar8[4] <
            (ulonglong)((longlong)piVar8[5] + 4 + (longlong)piVar8[3])) goto LAB_180004a00;
        iVar3 = (**(code **)((&DAT_1800390f0)[piVar8[1]] + 0x28))(piVar8,lVar10);
        if (iVar3 < 0) {
          seq_stream_tell(param_3);
          if (DAT_180039110 < 0) goto LAB_180004a65;
        }
        else {
          piVar8[5] = piVar8[5] + 4;
        }
        iVar2 = iVar2 + 1;
        lVar15 = lVar15 + 0x10;
      } while (iVar2 < *(int *)(pauVar4[2] + 4));
    }
  }
  if (0 < *(int *)(pauVar4[2] + 8)) {
    iVar2 = *(int *)(pauVar4[2] + 8) * 8;
    pvVar6 = malloc((longlong)iVar2);
    *(void **)pauVar4[5] = pvVar6;
    iVar2 = seq_stream_read(param_3,(longlong)pvVar6,iVar2);
    if (iVar2 < 0) goto LAB_180004a65;
  }
  if (*(int *)(pauVar4[2] + 0xc) < 1) {
    return pauVar4;
  }
  iVar2 = *(int *)(pauVar4[2] + 0xc) * 0x18;
  pvVar6 = malloc((longlong)iVar2);
  *(void **)(pauVar4[5] + 8) = pvVar6;
  iVar2 = seq_stream_read(param_3,(longlong)pvVar6,iVar2);
  if (-1 < iVar2) {
    return pauVar4;
  }
LAB_180004a65:
  FUN_180005580(pauVar4);
  return (undefined (*) [16])0x0;
}

/* Function: FUN_180004ab0 */
int * FUN_180004ab0(undefined8 param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined (*_Memory) [16];
  void *pvVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 extraout_XMM0_Qa;
  
  seq_stream_seek(param_3,0,0);
  _Memory = FUN_180005780(extraout_XMM0_Qa,param_2,param_3);
  if (_Memory != (undefined (*) [16])0x0) {
    *param_4 = *(int *)*_Memory;
    param_4[1] = *(int *)(*_Memory + 4);
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(*_Memory + 8);
    param_4[4] = *(int *)_Memory[1];
    *(undefined8 *)(param_4 + 6) = *(undefined8 *)(_Memory[1] + 4);
    lVar9 = (longlong)*(int *)(_Memory[1] + 0xc);
    param_4[8] = *(int *)(_Memory[1] + 0xc);
    iVar1 = *(int *)_Memory[2];
    param_4[9] = iVar1;
    iVar2 = *(int *)(_Memory[2] + 4);
    param_4[10] = iVar2;
    iVar3 = *(int *)(_Memory[2] + 8);
    param_4[0xb] = iVar3;
    param_4[0xc] = *(int *)(_Memory[2] + 0xc);
    param_4[0xd] = *(int *)_Memory[3];
    param_4[0xe] = *(int *)(_Memory[3] + 4);
    pvVar8 = malloc(lVar9 * 0x70);
    *(void **)(param_4 + 0x10) = pvVar8;
    pvVar8 = malloc((longlong)iVar1 << 4);
    *(void **)(param_4 + 0x12) = pvVar8;
    pvVar8 = malloc((longlong)iVar2 << 3);
    *(void **)(param_4 + 0x14) = pvVar8;
    pvVar8 = malloc((longlong)iVar3 * 0x18);
    uVar11 = 0;
    lVar15 = 0;
    *(void **)(param_4 + 0x16) = pvVar8;
    if (3 < lVar9) {
      lVar17 = (lVar9 - 4U >> 2) + 1;
      lVar15 = lVar17 * 4;
      lVar12 = 0;
      lVar14 = 0;
      do {
        lVar4 = *(longlong *)(_Memory[3] + 8);
        lVar5 = *(longlong *)(param_4 + 0x10);
        *(undefined4 *)(lVar14 + lVar5) = *(undefined4 *)(lVar12 + lVar4);
        *(undefined4 *)(lVar14 + 4 + lVar5) = *(undefined4 *)(lVar12 + 4 + lVar4);
        *(undefined4 *)(lVar14 + 8 + lVar5) = *(undefined4 *)(lVar12 + 8 + lVar4);
        *(undefined4 *)(lVar14 + 0xc + lVar5) = *(undefined4 *)(lVar12 + 0xc + lVar4);
        *(undefined8 *)(lVar14 + 0x10 + lVar5) = *(undefined8 *)(lVar12 + 0x10 + lVar4);
        *(undefined4 *)(lVar14 + 0x18 + lVar5) = *(undefined4 *)(lVar12 + 0x18 + lVar4);
        *(undefined8 *)(lVar14 + 0x20 + lVar5) = *(undefined8 *)(lVar12 + 0x1c + lVar4);
        *(undefined8 *)(lVar14 + 0x28 + lVar5) = *(undefined8 *)(lVar12 + 0x24 + lVar4);
        *(undefined4 *)(lVar14 + 0x30 + lVar5) = *(undefined4 *)(lVar12 + 0x2c + lVar4);
        *(undefined8 *)(lVar14 + 0x38 + lVar5) = *(undefined8 *)(lVar12 + 0x30 + lVar4);
        *(undefined8 *)(lVar14 + 0x40 + lVar5) = *(undefined8 *)(lVar12 + 0x38 + lVar4);
        *(undefined8 *)(lVar14 + 0x48 + lVar5) = *(undefined8 *)(lVar12 + 0x40 + lVar4);
        *(undefined8 *)(lVar14 + 0x50 + lVar5) = *(undefined8 *)(lVar12 + 0x48 + lVar4);
        *(undefined8 *)(lVar14 + 0x58 + lVar5) = *(undefined8 *)(lVar12 + 0x50 + lVar4);
        *(undefined8 *)(lVar14 + 0x60 + lVar5) = *(undefined8 *)(lVar12 + 0x58 + lVar4);
        *(undefined4 *)(lVar14 + 0x68 + lVar5) = *(undefined4 *)(lVar12 + 0x60 + lVar4);
        *(undefined4 *)(lVar14 + 0x6c + lVar5) = *(undefined4 *)(lVar12 + 100 + lVar4);
        lVar4 = *(longlong *)(_Memory[3] + 8);
        lVar5 = *(longlong *)(param_4 + 0x10);
        *(undefined4 *)(lVar5 + 0x70 + lVar14) = *(undefined4 *)(lVar4 + 0x68 + lVar12);
        *(undefined4 *)(lVar5 + 0x74 + lVar14) = *(undefined4 *)(lVar4 + 0x6c + lVar12);
        *(undefined4 *)(lVar5 + 0x78 + lVar14) = *(undefined4 *)(lVar4 + 0x70 + lVar12);
        *(undefined4 *)(lVar5 + 0x7c + lVar14) = *(undefined4 *)(lVar4 + 0x74 + lVar12);
        *(undefined8 *)(lVar5 + 0x80 + lVar14) = *(undefined8 *)(lVar4 + 0x78 + lVar12);
        *(undefined4 *)(lVar5 + 0x88 + lVar14) = *(undefined4 *)(lVar4 + 0x80 + lVar12);
        *(undefined8 *)(lVar5 + 0x90 + lVar14) = *(undefined8 *)(lVar4 + 0x84 + lVar12);
        *(undefined8 *)(lVar5 + 0x98 + lVar14) = *(undefined8 *)(lVar4 + 0x8c + lVar12);
        *(undefined4 *)(lVar5 + 0xa0 + lVar14) = *(undefined4 *)(lVar4 + 0x94 + lVar12);
        *(undefined8 *)(lVar5 + 0xa8 + lVar14) = *(undefined8 *)(lVar4 + 0x98 + lVar12);
        *(undefined8 *)(lVar5 + 0xb0 + lVar14) = *(undefined8 *)(lVar4 + 0xa0 + lVar12);
        *(undefined8 *)(lVar5 + 0xb8 + lVar14) = *(undefined8 *)(lVar4 + 0xa8 + lVar12);
        *(undefined8 *)(lVar5 + 0xc0 + lVar14) = *(undefined8 *)(lVar4 + 0xb0 + lVar12);
        *(undefined8 *)(lVar5 + 200 + lVar14) = *(undefined8 *)(lVar4 + 0xb8 + lVar12);
        *(undefined8 *)(lVar5 + 0xd0 + lVar14) = *(undefined8 *)(lVar4 + 0xc0 + lVar12);
        *(undefined4 *)(lVar5 + 0xd8 + lVar14) = *(undefined4 *)(lVar4 + 200 + lVar12);
        *(undefined4 *)(lVar5 + 0xdc + lVar14) = *(undefined4 *)(lVar4 + 0xcc + lVar12);
        lVar6 = *(longlong *)(_Memory[3] + 8);
        lVar7 = *(longlong *)(param_4 + 0x10);
        *(undefined4 *)(lVar7 + 0xe0 + lVar14) = *(undefined4 *)(lVar6 + 0xd0 + lVar12);
        *(undefined4 *)(lVar7 + 0xe4 + lVar14) = *(undefined4 *)(lVar6 + 0xd4 + lVar12);
        *(undefined4 *)(lVar7 + 0xe8 + lVar14) = *(undefined4 *)(lVar6 + 0xd8 + lVar12);
        *(undefined4 *)(lVar7 + 0xec + lVar14) = *(undefined4 *)(lVar6 + 0xdc + lVar12);
        lVar4 = lVar14 + 0x1c0;
        *(undefined8 *)(lVar7 + -0xd0 + lVar4) = *(undefined8 *)(lVar6 + 0xe0 + lVar12);
        lVar5 = lVar12 + 0x1a0;
        *(undefined4 *)(lVar7 + -200 + lVar4) = *(undefined4 *)(lVar6 + 0xe8 + lVar12);
        *(undefined8 *)(lVar7 + -0xc0 + lVar4) = *(undefined8 *)(lVar6 + -0xb4 + lVar5);
        *(undefined8 *)(lVar7 + -0xb8 + lVar4) = *(undefined8 *)(lVar6 + -0xac + lVar5);
        *(undefined4 *)(lVar7 + -0xb0 + lVar4) = *(undefined4 *)(lVar6 + -0xa4 + lVar5);
        *(undefined8 *)(lVar7 + -0xa8 + lVar4) = *(undefined8 *)(lVar6 + -0xa0 + lVar5);
        *(undefined8 *)(lVar7 + -0xa0 + lVar4) = *(undefined8 *)(lVar6 + -0x98 + lVar5);
        *(undefined8 *)(lVar7 + -0x98 + lVar4) = *(undefined8 *)(lVar6 + -0x90 + lVar5);
        *(undefined8 *)(lVar7 + -0x90 + lVar4) = *(undefined8 *)(lVar6 + -0x88 + lVar5);
        *(undefined8 *)(lVar7 + -0x88 + lVar4) = *(undefined8 *)(lVar6 + -0x80 + lVar5);
        *(undefined8 *)(lVar7 + -0x80 + lVar4) = *(undefined8 *)(lVar6 + -0x78 + lVar5);
        *(undefined4 *)(lVar7 + -0x78 + lVar4) = *(undefined4 *)(lVar6 + -0x70 + lVar5);
        *(undefined4 *)(lVar7 + -0x74 + lVar4) = *(undefined4 *)(lVar6 + -0x6c + lVar5);
        lVar6 = *(longlong *)(_Memory[3] + 8);
        lVar7 = *(longlong *)(param_4 + 0x10);
        *(undefined4 *)(lVar14 + 0x150 + lVar7) = *(undefined4 *)(lVar12 + 0x138 + lVar6);
        *(undefined4 *)(lVar14 + 0x154 + lVar7) = *(undefined4 *)(lVar12 + 0x13c + lVar6);
        *(undefined4 *)(lVar14 + 0x158 + lVar7) = *(undefined4 *)(lVar12 + 0x140 + lVar6);
        *(undefined4 *)(lVar14 + 0x15c + lVar7) = *(undefined4 *)(lVar12 + 0x144 + lVar6);
        *(undefined8 *)(lVar14 + 0x160 + lVar7) = *(undefined8 *)(lVar12 + 0x148 + lVar6);
        *(undefined4 *)(lVar14 + 0x168 + lVar7) = *(undefined4 *)(lVar12 + 0x150 + lVar6);
        *(undefined8 *)(lVar14 + 0x170 + lVar7) = *(undefined8 *)(lVar12 + 0x154 + lVar6);
        *(undefined8 *)(lVar14 + 0x178 + lVar7) = *(undefined8 *)(lVar12 + 0x15c + lVar6);
        *(undefined4 *)(lVar14 + 0x180 + lVar7) = *(undefined4 *)(lVar12 + 0x164 + lVar6);
        *(undefined8 *)(lVar14 + 0x188 + lVar7) = *(undefined8 *)(lVar12 + 0x168 + lVar6);
        *(undefined8 *)(lVar14 + 400 + lVar7) = *(undefined8 *)(lVar12 + 0x170 + lVar6);
        *(undefined8 *)(lVar14 + 0x198 + lVar7) = *(undefined8 *)(lVar12 + 0x178 + lVar6);
        *(undefined8 *)(lVar14 + 0x1a0 + lVar7) = *(undefined8 *)(lVar12 + 0x180 + lVar6);
        *(undefined8 *)(lVar14 + 0x1a8 + lVar7) = *(undefined8 *)(lVar12 + 0x188 + lVar6);
        *(undefined8 *)(lVar14 + 0x1b0 + lVar7) = *(undefined8 *)(lVar12 + 400 + lVar6);
        *(undefined4 *)(lVar14 + 0x1b8 + lVar7) = *(undefined4 *)(lVar12 + 0x198 + lVar6);
        *(undefined4 *)(lVar14 + 0x1bc + lVar7) = *(undefined4 *)(lVar12 + 0x19c + lVar6);
        lVar17 = lVar17 + -1;
        lVar12 = lVar5;
        lVar14 = lVar4;
      } while (lVar17 != 0);
    }
    if (lVar15 < lVar9) {
      lVar9 = lVar9 - lVar15;
      lVar12 = lVar15 * 0x68;
      lVar15 = lVar15 * 0x70;
      do {
        lVar14 = *(longlong *)(_Memory[3] + 8);
        lVar17 = *(longlong *)(param_4 + 0x10);
        *(undefined4 *)(lVar15 + lVar17) = *(undefined4 *)(lVar12 + lVar14);
        *(undefined4 *)(lVar15 + 4 + lVar17) = *(undefined4 *)(lVar12 + 4 + lVar14);
        *(undefined4 *)(lVar15 + 8 + lVar17) = *(undefined4 *)(lVar12 + 8 + lVar14);
        *(undefined4 *)(lVar15 + 0xc + lVar17) = *(undefined4 *)(lVar12 + 0xc + lVar14);
        *(undefined8 *)(lVar15 + 0x10 + lVar17) = *(undefined8 *)(lVar12 + 0x10 + lVar14);
        *(undefined4 *)(lVar15 + 0x18 + lVar17) = *(undefined4 *)(lVar12 + 0x18 + lVar14);
        *(undefined8 *)(lVar15 + 0x20 + lVar17) = *(undefined8 *)(lVar12 + 0x1c + lVar14);
        *(undefined8 *)(lVar15 + 0x28 + lVar17) = *(undefined8 *)(lVar12 + 0x24 + lVar14);
        *(undefined4 *)(lVar15 + 0x30 + lVar17) = *(undefined4 *)(lVar12 + 0x2c + lVar14);
        *(undefined8 *)(lVar15 + 0x38 + lVar17) = *(undefined8 *)(lVar12 + 0x30 + lVar14);
        *(undefined8 *)(lVar15 + 0x40 + lVar17) = *(undefined8 *)(lVar12 + 0x38 + lVar14);
        *(undefined8 *)(lVar15 + 0x48 + lVar17) = *(undefined8 *)(lVar12 + 0x40 + lVar14);
        *(undefined8 *)(lVar15 + 0x50 + lVar17) = *(undefined8 *)(lVar12 + 0x48 + lVar14);
        *(undefined8 *)(lVar15 + 0x58 + lVar17) = *(undefined8 *)(lVar12 + 0x50 + lVar14);
        *(undefined8 *)(lVar15 + 0x60 + lVar17) = *(undefined8 *)(lVar12 + 0x58 + lVar14);
        *(undefined4 *)(lVar15 + 0x68 + lVar17) = *(undefined4 *)(lVar12 + 0x60 + lVar14);
        *(undefined4 *)(lVar15 + 0x6c + lVar17) = *(undefined4 *)(lVar12 + 100 + lVar14);
        lVar9 = lVar9 + -1;
        lVar12 = lVar12 + 0x68;
        lVar15 = lVar15 + 0x70;
      } while (lVar9 != 0);
    }
    lVar15 = (longlong)param_4[9];
    uVar13 = uVar11;
    if (0 < lVar15) {
      do {
        lVar9 = *(longlong *)_Memory[4];
        lVar12 = *(longlong *)(param_4 + 0x12);
        *(undefined4 *)(uVar13 + lVar12) = *(undefined4 *)(uVar13 + 0xc + lVar9);
        *(undefined4 *)(uVar13 + 4 + lVar12) = *(undefined4 *)(uVar13 + lVar9);
        *(undefined8 *)(uVar13 + 8 + lVar12) = *(undefined8 *)(uVar13 + 4 + lVar9);
        *(undefined8 *)(uVar13 + 4 + lVar9) = 0;
        lVar15 = lVar15 + -1;
        uVar13 = uVar13 + 0x10;
      } while (lVar15 != 0);
    }
    iVar1 = param_4[10];
    uVar13 = uVar11;
    if (0 < (longlong)iVar1) {
      do {
        lVar15 = *(longlong *)(_Memory[4] + 8);
        lVar9 = *(longlong *)(param_4 + 0x14);
        uVar13 = uVar13 + 1;
        *(undefined4 *)(lVar9 + -8 + uVar13 * 8) = *(undefined4 *)(lVar15 + -8 + uVar13 * 8);
        *(undefined4 *)(lVar9 + -4 + uVar13 * 8) = *(undefined4 *)(lVar15 + -4 + uVar13 * 8);
      } while ((longlong)uVar13 < (longlong)iVar1);
    }
    lVar15 = (longlong)param_4[0xb];
    uVar13 = uVar11;
    uVar16 = uVar11;
    if (0 < lVar15) {
      do {
        lVar9 = *(longlong *)_Memory[5];
        lVar12 = *(longlong *)(param_4 + 0x16);
        *(undefined4 *)(uVar16 + lVar12) = *(undefined4 *)(uVar13 + lVar9);
        *(undefined4 *)(uVar16 + 4 + lVar12) = *(undefined4 *)(uVar13 + 4 + lVar9);
        *(undefined4 *)(uVar16 + 8 + lVar12) = *(undefined4 *)(uVar13 + 8 + lVar9);
        *(undefined4 *)(uVar16 + 0xc + lVar12) = *(undefined4 *)(uVar13 + 0xc + lVar9);
        *(undefined4 *)(uVar16 + 0x10 + lVar12) = *(undefined4 *)(uVar13 + 0x10 + lVar9);
        lVar15 = lVar15 + -1;
        uVar13 = uVar13 + 0x14;
        uVar16 = uVar16 + 0x18;
      } while (lVar15 != 0);
    }
    *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(_Memory[5] + 8);
    *(undefined8 *)(_Memory[5] + 8) = 0;
    if (*param_4 < 0x66) {
      *param_4 = 0x66;
    }
    else if (*param_4 < 0xca) {
      *param_4 = 0xca;
    }
    if (*(void **)_Memory[5] != (void *)0x0) {
      free(*(void **)_Memory[5]);
    }
    if (*(void **)(_Memory[4] + 8) != (void *)0x0) {
      free(*(void **)(_Memory[4] + 8));
    }
    if (0 < *(int *)_Memory[2]) {
      uVar13 = uVar11;
      if (*(longlong *)_Memory[4] != 0) {
        do {
          pvVar8 = *(void **)(uVar13 + 4 + *(longlong *)_Memory[4]);
          if (pvVar8 != (void *)0x0) {
            free(pvVar8);
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          uVar13 = uVar13 + 0x10;
        } while ((int)uVar10 < *(int *)_Memory[2]);
      }
      if (*(void **)_Memory[4] != (void *)0x0) {
        free(*(void **)_Memory[4]);
      }
    }
    if (*(void **)(_Memory[3] + 8) != (void *)0x0) {
      free(*(void **)(_Memory[3] + 8));
    }
    free(_Memory);
    return param_4;
  }
  return (int *)0x0;
}

/* Function: FUN_1800051a0 */
ulonglong FUN_1800051a0(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar7 = 0;
  iVar5 = (int)param_2;
  if (*(int *)((longlong)param_1 + 0x20) < 1) {
    FUN_180005d70((longlong)"seq_data_write: tempoCount <= 0 !!",param_2,param_3,param_4);
    *(undefined4 *)((longlong)param_1 + 0x20) = 1;
    piVar6 = (int *)malloc(0x70);
    dVar3 = DAT_18002e7d8;
    iVar4 = 0x180;
    if (0 < *(int *)((longlong)param_1 + 4)) {
      iVar4 = *(int *)((longlong)param_1 + 4);
    }
    *(int **)((longlong)param_1 + 0x40) = piVar6;
    piVar6 = (int *)FUN_1800029d0((longlong)param_1,piVar6,0,iVar4,dVar3,4);
  }
  else {
    piVar6 = *(int **)((longlong)param_1 + 0x40);
    if (*piVar6 != 0) {
      FUN_180005d70((longlong)"seq_data_write: firstTempo.tick != 0 !!",param_2,param_3,param_4);
      piVar6 = *(int **)((longlong)param_1 + 0x40);
      *piVar6 = 0;
    }
  }
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return (ulonglong)piVar6 & 0xffffffffffffff00;
  }
  if ((iVar5 < 0) || (DAT_1800390e0 <= iVar5)) {
    DAT_180039110 = -0x12e;
LAB_180005571:
    return (ulonglong)piVar6 & 0xffffffffffffff00;
  }
  lVar9 = (longlong)iVar5 * 0x128;
  lVar1 = lVar9 + DAT_1800390e8;
  if (*(int *)(lVar9 + DAT_1800390e8) == -1) {
    DAT_180039110 = 0xfffffed3;
    return DAT_1800390e8 & 0xffffffffffffff00;
  }
  if (((*(byte *)(lVar1 + 8) & 2) == 0) &&
     ((ulonglong)(longlong)*(int *)(lVar1 + 0x10) <
      (ulonglong)((longlong)*(int *)(lVar1 + 0xc) + 0x40 + (longlong)*(int *)(lVar1 + 0x14)))) {
    DAT_180039110 = 0xfffffec7;
    return (ulonglong)(uint7)(int7)(int3)((uint)*(int *)(lVar1 + 0x10) >> 8) << 8;
  }
  iVar4 = (**(code **)((&DAT_1800390f0)[*(int *)(lVar1 + 4)] + 0x30))(lVar1,param_1);
  if (iVar4 < 0) {
    iVar4 = seq_stream_tell(iVar5);
    piVar6 = (int *)CONCAT44(extraout_var,iVar4);
    if (DAT_180039110 < 0) goto LAB_180005571;
  }
  else {
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 0x40;
  }
  if (0 < *(int *)((longlong)param_1 + 0x20)) {
    iVar4 = seq_stream_write(iVar5,*(longlong *)((longlong)param_1 + 0x40),
                             *(int *)((longlong)param_1 + 0x20) * 0x70);
    piVar6 = (int *)CONCAT44(extraout_var_00,iVar4);
    if (iVar4 < 0) goto LAB_180005571;
  }
  uVar10 = uVar7;
  if (0 < *(int *)((longlong)param_1 + 0x24)) {
    do {
      lVar1 = uVar10 + *(longlong *)((longlong)param_1 + 0x48);
      piVar6 = (int *)(lVar1 + 4);
      if (DAT_1800390b0 == '\0') {
LAB_18000554e:
        DAT_180039110 = -0x65;
        goto LAB_180005558;
      }
      if (DAT_1800390e0 <= iVar5) goto LAB_180005538;
      lVar2 = lVar9 + DAT_1800390e8;
      if (*(int *)(lVar9 + DAT_1800390e8) == -1) goto LAB_180005522;
      if (piVar6 == (int *)0x0) {
        DAT_180039110 = 0xfffffec2;
        uVar7 = FUN_180005580(param_1);
        return uVar7 & 0xffffffffffffff00;
      }
      if (((*(byte *)(lVar2 + 8) & 2) == 0) &&
         ((ulonglong)(longlong)*(int *)(lVar2 + 0x10) <
          (ulonglong)((longlong)*(int *)(lVar2 + 0xc) + 4 + (longlong)*(int *)(lVar2 + 0x14))))
      goto LAB_1800054f6;
      iVar4 = (**(code **)((&DAT_1800390f0)[*(int *)(lVar2 + 4)] + 0x30))(lVar2,piVar6);
      if (iVar4 < 0) {
        seq_stream_tell(iVar5);
        if (-1 < DAT_180039110) goto LAB_1800053d4;
LAB_180005558:
        uVar7 = FUN_180005580(param_1);
        goto LAB_180005560;
      }
      *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 4;
LAB_1800053d4:
      if ((0 < *piVar6) &&
         (iVar4 = seq_stream_write(iVar5,*(longlong *)(lVar1 + 8),*piVar6), iVar4 < 0))
      goto LAB_180005558;
      if (DAT_1800390b0 == '\0') goto LAB_18000554e;
      if (DAT_1800390e0 <= iVar5) {
LAB_180005538:
        DAT_180039110 = 0xfffffed2;
        uVar7 = FUN_180005580(param_1);
        return uVar7 & 0xffffffffffffff00;
      }
      lVar2 = lVar9 + DAT_1800390e8;
      if (*(int *)(lVar9 + DAT_1800390e8) == -1) {
LAB_180005522:
        DAT_180039110 = 0xfffffed3;
        uVar7 = FUN_180005580(param_1);
        return uVar7 & 0xffffffffffffff00;
      }
      if (((*(byte *)(lVar2 + 8) & 2) == 0) &&
         ((ulonglong)(longlong)*(int *)(lVar2 + 0x10) <
          (ulonglong)((longlong)*(int *)(lVar2 + 0xc) + 4 + (longlong)*(int *)(lVar2 + 0x14)))) {
LAB_1800054f6:
        DAT_180039110 = 0xfffffec7;
        uVar7 = FUN_180005580(param_1);
        return uVar7 & 0xffffffffffffff00;
      }
      iVar4 = (**(code **)((&DAT_1800390f0)[*(int *)(lVar2 + 4)] + 0x30))(lVar2,lVar1);
      if (iVar4 < 0) {
        seq_stream_tell(iVar5);
        if (DAT_180039110 < 0) goto LAB_180005558;
      }
      else {
        *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 4;
      }
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar8 < *(int *)((longlong)param_1 + 0x24));
  }
  if (*(int *)((longlong)param_1 + 0x28) < 1) {
LAB_1800054b1:
    uVar8 = *(uint *)((longlong)param_1 + 0x2c);
    uVar7 = (ulonglong)uVar8;
    if (0 < (int)uVar8) {
      iVar5 = seq_stream_write(iVar5,*(longlong *)((longlong)param_1 + 0x58),uVar8 * 0x18);
      uVar7 = CONCAT44(extraout_var_02,iVar5);
      if (iVar5 < 0) goto LAB_180005560;
    }
    uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
  }
  else {
    iVar4 = seq_stream_write(iVar5,*(longlong *)((longlong)param_1 + 0x50),
                             *(int *)((longlong)param_1 + 0x28) * 8);
    uVar7 = CONCAT44(extraout_var_01,iVar4);
    if (-1 < iVar4) goto LAB_1800054b1;
LAB_180005560:
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  return uVar7;
}

/* Function: FUN_180005580 */
void FUN_180005580(void *param_1)

{
  void *_Memory;
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0x50));
  }
  if (0 < *(int *)((longlong)param_1 + 0x24)) {
    if (*(longlong *)((longlong)param_1 + 0x48) != 0) {
      uVar1 = 0;
      uVar3 = uVar1;
      do {
        _Memory = *(void **)(uVar1 + 8 + *(longlong *)((longlong)param_1 + 0x48));
        if (_Memory != (void *)0x0) {
          free(_Memory);
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        uVar1 = uVar1 + 0x10;
      } while ((int)uVar2 < *(int *)((longlong)param_1 + 0x24));
    }
    if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
      free(*(void **)((longlong)param_1 + 0x48));
    }
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0x40));
  }
  free(param_1);
  return;
}

/* Function: FUN_180005620 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180005620(undefined8 param_1,undefined8 param_2,double param_3,longlong param_4,
                  longlong param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = DAT_18002e7b8;
  *(double *)(param_5 + 0x10) = param_3;
  dVar3 = param_3 / _DAT_18002e7d0;
  *(undefined4 *)(param_5 + 0x18) = 4;
  *(undefined8 *)(param_5 + 0x1c) = 0x3fd0000000000000;
  dVar2 = *(double *)(param_4 + 0x14) * _DAT_18002e7a8;
  *(double *)(param_5 + 0x30) = dVar3;
  *(double *)(param_5 + 0x24) = dVar2;
  *(int *)(param_5 + 0x2c) = (int)(dVar1 / dVar2 + _DAT_18002e7b0);
  *(double *)(param_5 + 0x38) = dVar1 / dVar3;
  dVar2 = (double)*(int *)(param_4 + 0x10) * dVar3;
  dVar3 = dVar3 * _DAT_18002e7a8;
  *(double *)(param_5 + 0x40) = dVar2;
  *(double *)(param_5 + 0x48) = dVar1 / dVar2;
  *(double *)(param_5 + 0x50) = dVar3;
  *(double *)(param_5 + 0x58) = dVar1 / dVar3;
  dVar2 = *(double *)(param_5 + 0x30) / (double)*(int *)(param_5 + 0x18);
  *(double *)(param_5 + 0x50) = dVar2;
  *(double *)(param_5 + 0x58) = dVar1 / dVar2;
  return;
}

/* Function: FUN_1800056e0 */
void FUN_1800056e0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 *param_4,
                  undefined8 param_5,int param_6,double param_7)

{
  undefined4 *puVar1;
  float fVar2;
  
  puVar1 = param_4;
  FUN_180005620(param_1,param_2,param_7,param_3,(longlong)param_4);
  puVar1[0x18] = 0;
  fVar2 = FUN_180024a0c((float)param_6 / (float)puVar1[0xb]);
  param_4[1] = param_6;
  *param_4 = 0;
  param_4[2] = 0;
  param_4[0x19] = (int)fVar2;
  param_4[3] = (float)(int)((float)((double)param_6 * *(double *)(param_4 + 0x12)) * DAT_18002e7fc +
                            0.0 + DAT_18002e794) * DAT_18002e78c;
  return;
}

/* Function: FUN_180005780 */
undefined (*) [16] FUN_180005780(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined (*pauVar3) [16];
  undefined4 *puVar4;
  undefined (*pauVar5) [16];
  void *pvVar6;
  uint uVar7;
  int *piVar8;
  size_t _Size;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  iVar2 = seq_stream_seek(param_3,0,0);
  if (iVar2 < 0) {
    return (undefined (*) [16])0x0;
  }
  pauVar3 = (undefined (*) [16])malloc(0x60);
  FUN_180012b90(pauVar3,0,0x60);
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    FUN_180005cb0(pauVar3);
    return (undefined (*) [16])0x0;
  }
  if ((param_3 < 0) || (DAT_1800390e0 <= param_3)) {
    DAT_180039110 = -0x12e;
LAB_180005c9c:
    FUN_180005cb0(pauVar3);
    return (undefined (*) [16])0x0;
  }
  lVar12 = (longlong)param_3 * 0x128;
  piVar8 = (int *)(DAT_1800390e8 + lVar12);
  if (*piVar8 == -1) {
    DAT_180039110 = 0xfffffed3;
    FUN_180005cb0(pauVar3);
    return (undefined (*) [16])0x0;
  }
  if (pauVar3 == (undefined (*) [16])0x0) {
    DAT_180039110 = 0xfffffec2;
    FUN_180005cb0((void *)0x0);
    return (undefined (*) [16])0x0;
  }
  if ((ulonglong)(longlong)piVar8[4] < (ulonglong)((longlong)piVar8[5] + 4 + (longlong)piVar8[3])) {
    DAT_180039110 = 0xfffffec7;
    FUN_180005cb0(pauVar3);
    return (undefined (*) [16])0x0;
  }
  uVar10 = 4;
  uVar11 = (&DAT_1800390f0)[piVar8[1]];
  pauVar5 = pauVar3;
  iVar2 = (**(code **)(uVar11 + 0x28))();
  if (iVar2 < 0) {
    seq_stream_tell(param_3);
    if (DAT_180039110 < 0) goto LAB_180005c9c;
  }
  else {
    piVar8[5] = piVar8[5] + 4;
  }
  iVar2 = *(int *)*pauVar3;
  uVar13 = 0;
  if ((iVar2 == 0x65) || (iVar2 == 0xc9)) {
    pauVar5 = (undefined (*) [16])(*pauVar3 + 4);
    uVar10 = 0x34;
    iVar2 = seq_stream_read(param_3,(longlong)pauVar5,0x34);
    if (iVar2 < 0) goto LAB_180005944;
  }
  else if ((iVar2 == 100) || (iVar2 == 200)) {
    pauVar5 = (undefined (*) [16])(*pauVar3 + 4);
    uVar10 = 0x30;
    iVar2 = seq_stream_read(param_3,(longlong)pauVar5,0x30);
    if (iVar2 < 0) goto LAB_180005944;
    *(undefined4 *)(pauVar3[3] + 4) = 0;
  }
  if (0x66 < *(int *)*pauVar3 - 100U) {
    FUN_180005cb0(pauVar3);
    DAT_180039110 = 0xfffffe6f;
    return (undefined (*) [16])0x0;
  }
  if (*(int *)(pauVar3[1] + 0xc) < 1) {
    FUN_180005d70((longlong)"seq_data_xx_01_read: tempoCount <= 0 !!",pauVar5,uVar10,uVar11);
    *(undefined4 *)(pauVar3[1] + 0xc) = 1;
    puVar4 = (undefined4 *)malloc(0x68);
    uVar1 = DAT_18002e7d8;
    uVar7 = *(uint *)(*pauVar3 + 4);
    *(undefined4 **)(pauVar3[3] + 8) = puVar4;
    uVar11 = 0x180;
    if (0 < (int)uVar7) {
      uVar11 = (ulonglong)uVar7;
    }
    FUN_1800056e0(uVar1,param_2,(longlong)pauVar3,puVar4,uVar10,(int)uVar11,(double)uVar1);
  }
  else {
    uVar7 = *(int *)(pauVar3[1] + 0xc) * 0x68;
    puVar4 = (undefined4 *)malloc((longlong)(int)uVar7);
    uVar10 = (ulonglong)uVar7;
    *(undefined4 **)(pauVar3[3] + 8) = puVar4;
    iVar2 = seq_stream_read(param_3,(longlong)puVar4,uVar7);
    if (iVar2 < 0) {
LAB_180005944:
      FUN_180005cb0(pauVar3);
      return (undefined (*) [16])0x0;
    }
  }
  if (**(int **)(pauVar3[3] + 8) != 0) {
    FUN_180005d70((longlong)"seq_data_xx_01_read: firstTempo.tick != 0 !!",puVar4,uVar10,uVar11);
    **(undefined4 **)(pauVar3[3] + 8) = 0;
  }
  if (0 < *(int *)pauVar3[2]) {
    _Size = (size_t)(*(int *)pauVar3[2] << 4);
    pauVar5 = (undefined (*) [16])malloc(_Size);
    *(undefined (**) [16])pauVar3[4] = pauVar5;
    FUN_180012b90(pauVar5,0,_Size);
    uVar11 = uVar13;
    if (0 < *(int *)pauVar3[2]) {
      do {
        piVar8 = (int *)(*(longlong *)pauVar3[4] + uVar13);
        if (DAT_1800390b0 == '\0') {
LAB_180005c60:
          DAT_180039110 = -0x65;
          goto LAB_180005c6a;
        }
        if (DAT_1800390e0 <= param_3) {
LAB_180005c47:
          DAT_180039110 = 0xfffffed2;
          FUN_180005cb0(pauVar3);
          return (undefined (*) [16])0x0;
        }
        piVar9 = (int *)(DAT_1800390e8 + lVar12);
        if (*piVar9 == -1) {
LAB_180005c31:
          DAT_180039110 = 0xfffffed3;
          FUN_180005cb0(pauVar3);
          return (undefined (*) [16])0x0;
        }
        if (piVar8 == (int *)0x0) {
LAB_180005c1b:
          DAT_180039110 = 0xfffffec2;
          FUN_180005cb0(pauVar3);
          return (undefined (*) [16])0x0;
        }
        if ((ulonglong)(longlong)piVar9[4] <
            (ulonglong)((longlong)piVar9[5] + 4 + (longlong)piVar9[3])) {
LAB_180005c05:
          DAT_180039110 = 0xfffffec7;
          FUN_180005cb0(pauVar3);
          return (undefined (*) [16])0x0;
        }
        iVar2 = (**(code **)((&DAT_1800390f0)[piVar9[1]] + 0x28))(piVar9,piVar8);
        if (iVar2 < 0) {
          seq_stream_tell(param_3);
          if (DAT_180039110 < 0) goto LAB_180005c6a;
        }
        else {
          piVar9[5] = piVar9[5] + 4;
        }
        iVar2 = *piVar8;
        if (iVar2 < 1) {
          *piVar8 = 0;
          *(undefined8 *)(piVar8 + 1) = 0;
        }
        else {
          pvVar6 = malloc((longlong)iVar2);
          *(void **)(piVar8 + 1) = pvVar6;
          iVar2 = seq_stream_read(param_3,(longlong)pvVar6,iVar2);
          if (iVar2 < 0) goto LAB_180005c6a;
        }
        if (0 < *piVar8) {
          *(undefined *)((longlong)*piVar8 + -1 + *(longlong *)(piVar8 + 1)) = 0;
        }
        if (DAT_1800390b0 == '\0') goto LAB_180005c60;
        if (DAT_1800390e0 <= param_3) goto LAB_180005c47;
        piVar9 = (int *)(DAT_1800390e8 + lVar12);
        if (*piVar9 == -1) goto LAB_180005c31;
        if (piVar8 == (int *)0xfffffffffffffff4) goto LAB_180005c1b;
        if ((ulonglong)(longlong)piVar9[4] <
            (ulonglong)((longlong)piVar9[5] + 4 + (longlong)piVar9[3])) goto LAB_180005c05;
        iVar2 = (**(code **)((&DAT_1800390f0)[piVar9[1]] + 0x28))();
        if (iVar2 < 0) {
          seq_stream_tell(param_3);
          if (DAT_180039110 < 0) goto LAB_180005c6a;
        }
        else {
          piVar9[5] = piVar9[5] + 4;
        }
        uVar7 = (int)uVar11 + 1;
        uVar13 = uVar13 + 0x10;
        uVar11 = (ulonglong)uVar7;
      } while ((int)uVar7 < *(int *)pauVar3[2]);
    }
  }
  if (0 < *(int *)(pauVar3[2] + 4)) {
    iVar2 = *(int *)(pauVar3[2] + 4) * 8;
    pvVar6 = malloc((longlong)iVar2);
    *(void **)(pauVar3[4] + 8) = pvVar6;
    iVar2 = seq_stream_read(param_3,(longlong)pvVar6,iVar2);
    if (iVar2 < 0) goto LAB_180005c6a;
  }
  if (*(int *)(pauVar3[2] + 8) < 1) {
    return pauVar3;
  }
  iVar2 = *(int *)(pauVar3[2] + 8) * 0x14;
  pvVar6 = malloc((longlong)iVar2);
  *(void **)pauVar3[5] = pvVar6;
  iVar2 = seq_stream_read(param_3,(longlong)pvVar6,iVar2);
  if (-1 < iVar2) {
    return pauVar3;
  }
LAB_180005c6a:
  FUN_180005cb0(pauVar3);
  return (undefined (*) [16])0x0;
}

/* Function: FUN_180005cb0 */
void FUN_180005cb0(void *param_1)

{
  void *_Memory;
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0x48));
  }
  if (0 < *(int *)((longlong)param_1 + 0x20)) {
    if (*(longlong *)((longlong)param_1 + 0x40) != 0) {
      uVar1 = 0;
      uVar3 = uVar1;
      do {
        _Memory = *(void **)(uVar1 + 4 + *(longlong *)((longlong)param_1 + 0x40));
        if (_Memory != (void *)0x0) {
          free(_Memory);
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        uVar1 = uVar1 + 0x10;
      } while ((int)uVar2 < *(int *)((longlong)param_1 + 0x20));
    }
    if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
      free(*(void **)((longlong)param_1 + 0x40));
    }
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0x38));
  }
  free(param_1);
  return;
}

/* Function: seq_platform_time_ms */
DWORD seq_platform_time_ms(void)

{
  DWORD DVar1;
  
                    /* 0x5d50  120  seq_platform_time_ms */
  DVar1 = timeGetTime();
  return DVar1;
}

/* Function: FUN_180005d70 */
void FUN_180005d70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined auStack2104 [32];
  char local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_180036000 ^ (ulonglong)auStack2104;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_18000ff20(local_818,0x800,param_1,&local_res10);
  MessageBoxA((HWND)0x0,local_818,"SEQ_WINDOWS_ERROR",0);
  FUN_18000f730(local_18 ^ (ulonglong)auStack2104);
  return;
}

/* Function: FUN_180005df0 */
undefined8 FUN_180005df0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = seq_context_get_tempo(**(int **)(param_1 + 8),param_2);
  *(longlong *)(param_1 + 0x18) = lVar1;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x80) = 0x3ff0000000000000;
    return 0x3ff0000000000000;
  }
  *(double *)(param_1 + 0x80) =
       DAT_18002e7e8 /
       ((double)*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) * *(double *)(lVar1 + 0x10));
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),1);
}

/* Function: seq_sequencer_open */
int seq_sequencer_open(int param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  int *piVar4;
  
                    /* 0x5e60  146  seq_sequencer_open */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390b4)) {
    lVar7 = (longlong)param_1 * 0x180;
    if (*(int *)(lVar7 + DAT_1800390c0) != -1) {
      piVar4 = (int *)0x0;
      piVar5 = piVar4;
      iVar6 = -1;
      if (0 < DAT_1800390c8) {
        do {
          iVar1 = DAT_1800390cc + 1;
          if (DAT_1800390c8 == DAT_1800390cc + 1) {
            iVar1 = 0;
          }
          piVar5 = (int *)((longlong)DAT_1800390cc * 0x98 + DAT_1800390d0);
          iVar6 = DAT_1800390cc;
          DAT_1800390cc = iVar1;
        } while ((*piVar5 != -1) &&
                (uVar3 = (int)piVar4 + 1, piVar4 = (int *)(ulonglong)uVar3, iVar6 = -1,
                (int)uVar3 < DAT_1800390c8));
      }
      FUN_180012b90((undefined (*) [16])(piVar5 + 1),0,0x94);
      *piVar5 = iVar6;
      lVar7 = DAT_1800390c0 + lVar7;
      piVar5[8] = 0;
      *(longlong *)(piVar5 + 2) = lVar7;
      piVar5[0x23] = param_3;
      piVar5[0x22] = 0;
      *(longlong *)(piVar5 + 4) = lVar7 + 8;
      pvVar2 = malloc((longlong)param_3 << 3);
      *(void **)(piVar5 + 0x24) = pvVar2;
      iVar1 = seq_sequencer_seek(iVar6,param_2);
      if (iVar1 < 0) {
        *piVar5 = -1;
        iVar6 = DAT_180039110;
      }
      else {
        piVar5 = (int *)((longlong)param_1 * 0x10 + DAT_1800390d8);
        *(int *)(*(longlong *)(piVar5 + 2) + (longlong)iVar6 * 4) = iVar6;
        *piVar5 = *piVar5 + 1;
      }
      return iVar6;
    }
    DAT_180039110 = 0xffffff37;
    return -0xc9;
  }
  DAT_180039110 = 0xffffff36;
  return -0xca;
}

/* Function: seq_sequencer_close */
undefined8 seq_sequencer_close(int param_1)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x6010  121  seq_sequencer_close */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  if ((param_1 < 0) || (DAT_1800390c8 <= param_1)) {
    DAT_180039110 = 0xffffff36;
    return 0xffffff36;
  }
  piVar2 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
  if (*piVar2 == -1) {
    DAT_180039110 = 0xffffff37;
    return 0xffffff37;
  }
  if (*(void **)(piVar2 + 0x24) != (void *)0x0) {
    free(*(void **)(piVar2 + 0x24));
  }
  iVar1 = **(int **)(piVar2 + 2);
  *piVar2 = -1;
  piVar2 = (int *)((longlong)iVar1 * 0x10 + DAT_1800390d8);
  if (0 < *piVar2) {
    *(undefined4 *)(*(longlong *)(piVar2 + 2) + (longlong)param_1 * 4) = 0xffffffff;
    *piVar2 = *piVar2 + -1;
    return 0;
  }
  DAT_180039110 = 0xffffff2f;
  return 0xffffff2f;
}

/* Function: seq_sequencer_close_all */
int seq_sequencer_close_all(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
                    /* 0x6110  122  seq_sequencer_close_all */
  if (DAT_1800390b0 != '\0') {
    iVar3 = 0;
    iVar5 = 0;
    if (0 < DAT_1800390c8) {
      lVar4 = 0;
      lVar6 = 0;
      iVar1 = DAT_1800390c8;
      do {
        piVar2 = (int *)(DAT_1800390d0 + lVar6);
        if (*piVar2 != -1) {
          if (DAT_1800390b0 == '\0') {
            DAT_180039110 = 0xffffff9b;
          }
          else if ((lVar4 < 0) || (iVar1 <= iVar5)) {
            DAT_180039110 = 0xffffff36;
          }
          else if (*piVar2 == -1) {
            DAT_180039110 = 0xffffff37;
          }
          else {
            if (*(void **)(piVar2 + 0x24) != (void *)0x0) {
              free(*(void **)(piVar2 + 0x24));
            }
            iVar1 = **(int **)(piVar2 + 2);
            *piVar2 = -1;
            piVar2 = (int *)((longlong)iVar1 * 0x10 + DAT_1800390d8);
            if (*piVar2 < 1) {
              DAT_180039110 = 0xffffff2f;
              iVar1 = DAT_1800390c8;
            }
            else {
              *(undefined4 *)(*(longlong *)(piVar2 + 2) + lVar4 * 4) = 0xffffffff;
              *piVar2 = *piVar2 + -1;
              iVar3 = iVar3 + 1;
              iVar1 = DAT_1800390c8;
            }
          }
        }
        iVar5 = iVar5 + 1;
        lVar4 = lVar4 + 1;
        lVar6 = lVar6 + 0x98;
      } while (iVar5 < iVar1);
    }
    DAT_1800390cc = 0;
    return iVar3;
  }
  DAT_180039110 = 0xffffff9b;
  return -0x65;
}

/* Function: seq_sequencer_close_all_by_context */
int seq_sequencer_close_all_by_context(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  
                    /* 0x6250  123  seq_sequencer_close_all_by_context */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  iVar5 = 0;
  piVar7 = (int *)((longlong)param_1 * 0x10 + DAT_1800390d8);
  iVar4 = *piVar7;
  if (0 < DAT_1800390c8) {
    lVar6 = 0;
    iVar2 = DAT_1800390c8;
    do {
      iVar1 = *(int *)(lVar6 + *(longlong *)(piVar7 + 2));
      if (-1 < iVar1) {
        if (DAT_1800390b0 == '\0') {
          DAT_180039110 = 0xffffff9b;
        }
        else if (iVar1 < iVar2) {
          piVar3 = (int *)((longlong)iVar1 * 0x98 + DAT_1800390d0);
          if (*piVar3 == -1) {
            DAT_180039110 = 0xffffff37;
          }
          else {
            if (*(void **)(piVar3 + 0x24) != (void *)0x0) {
              free(*(void **)(piVar3 + 0x24));
            }
            iVar2 = **(int **)(piVar3 + 2);
            *piVar3 = -1;
            piVar3 = (int *)((longlong)iVar2 * 0x10 + DAT_1800390d8);
            if (0 < *piVar3) {
              *(undefined4 *)(*(longlong *)(piVar3 + 2) + (longlong)iVar1 * 4) = 0xffffffff;
              *piVar3 = *piVar3 + -1;
              iVar2 = DAT_1800390c8;
              goto LAB_18000636f;
            }
            DAT_180039110 = 0xffffff2f;
            iVar2 = DAT_1800390c8;
          }
        }
        else {
          DAT_180039110 = 0xffffff36;
        }
        iVar4 = iVar4 + -1;
      }
LAB_18000636f:
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 4;
    } while (iVar5 < iVar2);
  }
  return iVar4;
}

/* Function: seq_sequencer_is_opened */
longlong seq_sequencer_is_opened(int param_1)

{
  undefined8 in_RAX;
  uint7 uVar1;
  
                    /* 0x63b0  145  seq_sequencer_is_opened */
  uVar1 = (uint7)((ulonglong)in_RAX >> 8);
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return (ulonglong)uVar1 << 8;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    uVar1 = (uint7)((ulonglong)DAT_1800390d0 >> 8);
    if (*(int *)((longlong)param_1 * 0x98 + DAT_1800390d0) == -1) {
      DAT_180039110 = 0xffffff37;
      return (ulonglong)uVar1 << 8;
    }
    return CONCAT71(uVar1,1);
  }
  DAT_180039110 = 0xffffff36;
  return (ulonglong)uVar1 << 8;
}

/* Function: seq_sequencer_seek */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 seq_sequencer_seek(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  float extraout_XMM0_Da;
  double dVar4;
  
                    /* 0x6410  149  seq_sequencer_seek */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    piVar3 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
    if (*piVar3 == -1) {
      DAT_180039110 = 0xffffff37;
      return 0xffffff37;
    }
    if (param_2 < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_2;
      if (*(int *)(*(longlong *)(piVar3 + 4) + 4) < param_2) {
        iVar1 = *(int *)(*(longlong *)(piVar3 + 4) + 4);
      }
    }
    piVar3[10] = iVar1;
    iVar1 = seq_calc_search_tempo_by_tick(**(int **)(piVar3 + 2),param_2);
    if (-1 < iVar1) {
      uVar2 = FUN_180005df0((longlong)piVar3,iVar1);
      if ((char)uVar2 != '\0') {
        piVar3[10] = param_2;
        dVar4 = (double)param_2;
        *(double *)(piVar3 + 0xc) = dVar4;
        FUN_180002ca0(*(int **)(piVar3 + 6),param_2);
        piVar3[0xf] = (int)extraout_XMM0_Da;
        piVar3[0xe] = (int)(extraout_XMM0_Da * _DAT_18002e7f8);
        iVar1 = *(int *)(*(longlong *)(piVar3 + 4) + 4);
        *(undefined8 *)(piVar3 + 0x1e) = 0;
        *(double *)(piVar3 + 0x10) = dVar4 / (double)iVar1;
        return 0;
      }
    }
    return DAT_180039110;
  }
  DAT_180039110 = 0xffffff36;
  return 0xffffff36;
}

/* Function: seq_sequencer_play */
undefined8 seq_sequencer_play(int param_1)

{
  DWORD DVar1;
  int *piVar2;
  
                    /* 0x6540  148  seq_sequencer_play */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  if ((param_1 < 0) || (DAT_1800390c8 <= param_1)) {
    DAT_180039110 = 0xffffff36;
    return 0xffffff36;
  }
  piVar2 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
  if (*piVar2 == -1) {
    DAT_180039110 = 0xffffff37;
    return 0xffffff37;
  }
  if (piVar2[8] == 1) {
    DAT_180039110 = 0xffffff32;
    return 0xffffff32;
  }
  DVar1 = timeGetTime();
  *(undefined8 *)(piVar2 + 0x1e) = 0;
  piVar2[8] = 1;
  *(ulonglong *)(piVar2 + 0x1c) = (ulonglong)DVar1;
  return 0;
}

/* Function: seq_sequencer_stop */
undefined8 seq_sequencer_stop(int param_1)

{
  int *piVar1;
  
                    /* 0x6600  151  seq_sequencer_stop */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  if ((param_1 < 0) || (DAT_1800390c8 <= param_1)) {
    DAT_180039110 = 0xffffff36;
    return 0xffffff36;
  }
  piVar1 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
  if (*piVar1 == -1) {
    DAT_180039110 = 0xffffff37;
    return 0xffffff37;
  }
  if (piVar1[8] == 0) {
    DAT_180039110 = 0xffffff31;
    return 0xffffff31;
  }
  piVar1[8] = 0;
  return 0;
}

/* Function: seq_sequencer_pause */
undefined8 seq_sequencer_pause(int param_1)

{
  int *piVar1;
  
                    /* 0x6680  147  seq_sequencer_pause */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  if ((param_1 < 0) || (DAT_1800390c8 <= param_1)) {
    DAT_180039110 = 0xffffff36;
    return 0xffffff36;
  }
  piVar1 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
  if (*piVar1 == -1) {
    DAT_180039110 = 0xffffff37;
    return 0xffffff37;
  }
  if (piVar1[8] == 2) {
    DAT_180039110 = 0xffffff30;
    return 0xffffff30;
  }
  piVar1[8] = 2;
  return 0;
}

/* Function: seq_sequencer_state */
int seq_sequencer_state(int param_1)

{
  int *piVar1;
  
                    /* 0x6700  150  seq_sequencer_state */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    piVar1 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xffffff37;
      return -0xc9;
    }
    return piVar1[8];
  }
  DAT_180039110 = 0xffffff36;
  return -0xca;
}

/* Function: FUN_180006760 */
void FUN_180006760(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  
  piVar4 = *(int **)(param_1 + 0x18);
  piVar8 = (int *)0x0;
  iVar7 = 0;
  if (*piVar4 < *(int *)(param_1 + 0x28)) {
    iVar7 = *(int *)(param_1 + 0x28) - *piVar4;
  }
  iVar1 = piVar4[0xc];
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar5 = *(longlong *)(param_1 + 0x10);
  fVar9 = (float)(*(double *)(param_1 + 0x30) / (double)*(int *)(lVar5 + 0x10));
  *(float *)(param_1 + 0x4c) = fVar9;
  iVar2 = *piVar4;
  iVar3 = *(int *)(lVar5 + 0x10);
  *(int *)(param_1 + 100) = iVar7;
  *(float *)(param_1 + 0x60) = fVar9 - (float)(iVar2 / iVar3);
  iVar2 = *(int *)(param_1 + 0x28) % *(int *)(lVar5 + 0x10);
  *(int *)(param_1 + 0x50) = iVar2;
  *(float *)(param_1 + 0x6c) = (float)iVar2 / (float)*(int *)(lVar5 + 0x10);
  if (0 < *(int *)(lVar5 + 0x30)) {
    iVar2 = piVar4[0x1a];
    piVar6 = piVar8;
    if (-1 < iVar2) {
      piVar8 = (int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x170) +
                      (longlong)(iVar2 + iVar7 / iVar1) * 0x18);
      piVar6 = (int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x170) + (longlong)iVar2 * 0x18);
    }
    if ((piVar6 != (int *)0x0) && (piVar8 != (int *)0x0)) {
      fVar10 = (float)iVar7 / (float)piVar4[0xc] + (float)*piVar6;
      *(float *)(param_1 + 0x48) = fVar10;
      fVar9 = *(float *)(param_1 + 0x4c) - (float)(piVar8[2] / *(int *)(lVar5 + 0x10));
      *(float *)(param_1 + 0x54) = fVar9;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x28) - piVar8[2];
      *(float *)(param_1 + 0x5c) = fVar10 - (float)*piVar6;
      *(float *)(param_1 + 0x68) = fVar9 / (float)piVar4[6];
    }
  }
  return;
}

/* Function: seq_sequencer_update */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int seq_sequencer_update(int param_1)

{
  double dVar1;
  DWORD DVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  float fVar7;
  undefined8 extraout_XMM0_Qa;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
                    /* 0x6900  152  seq_sequencer_update */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  if ((param_1 < 0) || (DAT_1800390c8 <= param_1)) {
    DAT_180039110 = 0xffffff36;
    return -0xca;
  }
  piVar6 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
  if (*piVar6 == -1) {
    DAT_180039110 = 0xffffff37;
    return -0xc9;
  }
  if (piVar6[8] != 1) {
    DAT_180039110 = 0xffffff33;
    return -0xcd;
  }
  DVar2 = timeGetTime();
  uVar5 = (ulonglong)DVar2;
  lVar4 = uVar5 - *(ulonglong *)(piVar6 + 0x1c);
  if (uVar5 < *(ulonglong *)(piVar6 + 0x1c)) {
    lVar4 = lVar4 + 0x100000000;
  }
  *(ulonglong *)(piVar6 + 0x1c) = uVar5;
  dVar1 = (double)lVar4;
  uVar9 = SUB84(dVar1,0);
  uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (lVar4 < 0) {
    uVar9 = SUB84(dVar1 + _DAT_18002e7f0,0);
    uVar10 = (undefined4)((ulonglong)(dVar1 + _DAT_18002e7f0) >> 0x20);
  }
  piVar6[0xe] = piVar6[0xe] + (int)lVar4;
  *(double *)(piVar6 + 0x1e) = (double)CONCAT44(uVar10,uVar9) + *(double *)(piVar6 + 0x1e);
  fVar7 = (float)piVar6[0xe] * _DAT_18002e790 * DAT_18002e7fc + DAT_18002e794;
  fVar8 = (float)(int)fVar7 * DAT_18002e78c;
  piVar6[0xf] = (int)fVar8;
  iVar3 = seq_calc_search_tempo_by_sec((ulonglong)(uint)fVar7,fVar8,**(int **)(piVar6 + 2));
  if (*(int *)(*(longlong *)(piVar6 + 6) + 0x70) == iVar3) {
    dVar1 = *(double *)(piVar6 + 0x1e);
    if (0.0 < dVar1) {
      iVar3 = (int)(dVar1 / *(double *)(piVar6 + 0x20));
      piVar6[10] = piVar6[10] + iVar3;
      *(double *)(piVar6 + 0x1e) = dVar1 - (double)iVar3 * *(double *)(piVar6 + 0x20);
    }
    *(double *)(piVar6 + 0xc) =
         (double)CONCAT44(uVar10,uVar9) / *(double *)(piVar6 + 0x20) + *(double *)(piVar6 + 0xc);
  }
  else {
    FUN_180005df0((longlong)piVar6,iVar3);
    iVar3 = FUN_180002d00(extraout_XMM0_Qa,(float)piVar6[0xf],*(int **)(piVar6 + 6));
    *(undefined8 *)(piVar6 + 0x1e) = 0;
    piVar6[10] = iVar3;
    *(double *)(piVar6 + 0xc) = (double)iVar3;
  }
  lVar4 = *(longlong *)(piVar6 + 4);
  if (*(double *)(lVar4 + 8) <= (double)(float)piVar6[0xf]) {
    piVar6[10] = *(int *)(lVar4 + 4);
    *(double *)(piVar6 + 0xc) = (double)*(int *)(lVar4 + 4);
    dVar1 = *(double *)(lVar4 + 8);
    piVar6[8] = 0;
    piVar6[0xf] = (int)(float)dVar1;
    piVar6[0xe] = (int)((float)dVar1 * _DAT_18002e7f8);
    *(undefined8 *)(piVar6 + 0x10) = 0x3ff0000000000000;
    FUN_180006760((longlong)piVar6);
    return piVar6[8];
  }
  *(double *)(piVar6 + 0x10) = *(double *)(piVar6 + 0xc) / (double)*(int *)(lVar4 + 4);
  FUN_180006760((longlong)piVar6);
  return piVar6[8];
}

/* Function: seq_sequencer_view_event */
longlong seq_sequencer_view_event(int param_1,int param_2,int param_3,char param_4,int param_5)

{
  undefined8 in_RAX;
  uint7 uVar2;
  void *pvVar1;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  void *local_28 [2];
  
                    /* 0x6b60  153  seq_sequencer_view_event */
  uVar2 = (uint7)((ulonglong)in_RAX >> 8);
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return (ulonglong)uVar2 << 8;
  }
  if ((param_1 < 0) || (DAT_1800390c8 <= param_1)) {
    DAT_180039110 = 0xffffff36;
    return (ulonglong)uVar2 << 8;
  }
  pvVar1 = (void *)(longlong)param_1;
  piVar3 = (int *)((longlong)pvVar1 * 0x98 + DAT_1800390d0);
  uVar2 = (uint7)(int3)((uint)param_1 >> 8);
  if (*piVar3 == -1) {
    DAT_180039110 = 0xffffff37;
    return (ulonglong)uVar2 << 8;
  }
  piVar6 = *(int **)(piVar3 + 4);
  if (199 < *piVar6) {
    DAT_180039110 = 0xffffff2d;
    return (ulonglong)uVar2 << 8;
  }
  if (param_2 < 0) {
    param_2 = piVar3[10];
  }
  piVar3[0x22] = 0;
  if (*(longlong *)(piVar3 + 0x24) == 0) {
    pvVar1 = malloc((longlong)piVar3[0x23] << 3);
    *(void **)(piVar3 + 0x24) = pvVar1;
  }
  uVar5 = (ulonglong)param_5;
  if (param_5 < piVar6[0xb]) {
    lVar7 = uVar5 * 0x30;
    do {
      pvVar1 = *(void **)(piVar3 + 2);
      piVar6 = (int *)(*(longlong *)((longlong)pvVar1 + 0x168) + lVar7);
      if (*piVar6 != param_2 + param_3 && param_2 + param_3 <= *piVar6) break;
      if ((param_4 == '\0') || (param_2 <= piVar6[7])) {
        uVar4 = piVar3[0x22] + 1;
        if (piVar3[0x23] < (int)uVar4) {
          local_28[0] = *(void **)(piVar3 + 0x24);
          seq_array_algorithm_increase(local_28,8,(uint *)(piVar3 + 0x23),piVar3[0x22],uVar4);
          *(void **)(piVar3 + 0x24) = local_28[0];
        }
        *(int **)(*(longlong *)(piVar3 + 0x24) + (longlong)piVar3[0x22] * 8) = piVar6;
        piVar3[0x22] = piVar3[0x22] + 1;
      }
      pvVar1 = *(void **)(piVar3 + 4);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      lVar7 = lVar7 + 0x30;
    } while ((int)uVar4 < *(int *)((longlong)pvVar1 + 0x2c));
  }
  return CONCAT71((int7)((ulonglong)pvVar1 >> 8),1);
}

/* Function: seq_sequencer_view_event_count */
int seq_sequencer_view_event_count(int param_1)

{
  int *piVar1;
  
                    /* 0x6d30  154  seq_sequencer_view_event_count */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    piVar1 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xffffff37;
      return -0xc9;
    }
    return piVar1[0x22];
  }
  DAT_180039110 = 0xffffff36;
  return -0xca;
}

/* Function: seq_sequencer_view_event_id */
undefined4 seq_sequencer_view_event_id(int param_1,int param_2)

{
  int *piVar1;
  
                    /* 0x6da0  156  seq_sequencer_view_event_id */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  if ((param_1 < 0) || (DAT_1800390c8 <= param_1)) {
    DAT_180039110 = 0xffffff36;
    return 0xffffff36;
  }
  piVar1 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
  if (*piVar1 == -1) {
    DAT_180039110 = 0xffffff37;
    return 0xffffff37;
  }
  if ((-1 < param_2) && (param_2 < piVar1[0x22])) {
    return *(undefined4 *)
            (*(longlong *)(*(longlong *)(piVar1 + 0x24) + (longlong)param_2 * 8) + 0x18);
  }
  DAT_180039110 = 0xffffff2e;
  return 0xffffff2e;
}

/* Function: seq_sequencer_view_event_get */
undefined8 seq_sequencer_view_event_get(int param_1,int param_2)

{
  int *piVar1;
  
                    /* 0x6e30  155  seq_sequencer_view_event_get */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0;
  }
  if ((param_1 < 0) || (DAT_1800390c8 <= param_1)) {
    DAT_180039110 = 0xffffff36;
    return 0;
  }
  piVar1 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
  if (*piVar1 == -1) {
    DAT_180039110 = 0xffffff37;
    return 0;
  }
  if ((-1 < param_2) && (param_2 < piVar1[0x22])) {
    return *(undefined8 *)(*(longlong *)(piVar1 + 0x24) + (longlong)param_2 * 8);
  }
  DAT_180039110 = 0xffffff2e;
  return 0;
}

/* Function: seq_sequencer_event_timing_by_tick */
void seq_sequencer_event_timing_by_tick(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x6eb0  125  seq_sequencer_event_timing_by_tick */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return;
  }
  if ((param_1 < 0) || (DAT_1800390c8 <= param_1)) {
    DAT_180039110 = 0xffffff36;
  }
  else {
    piVar2 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
    if (*piVar2 == -1) {
      DAT_180039110 = 0xffffff37;
      return;
    }
    piVar2 = (int *)seq_context_get_event(**(int **)(piVar2 + 2),param_2);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      if (iVar1 < param_3) {
        if (param_3 - iVar1 <= param_5) {
          return;
        }
      }
      else if (iVar1 - param_3 <= param_4) {
        return;
      }
      return;
    }
  }
  return;
}

/* Function: seq_sequencer_event_timing_by_sec */
float seq_sequencer_event_timing_by_sec
                (undefined8 param_1,undefined8 param_2,float param_3,float param_4,int param_5,
                int param_6,undefined8 param_7,undefined8 param_8,float param_9)

{
  float fVar1;
  unkfloat1 Var2;
  int *in_RAX;
  
                    /* 0x6fc0  124  seq_sequencer_event_timing_by_sec */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
  }
  else if ((param_5 < 0) || (DAT_1800390c8 <= param_5)) {
    DAT_180039110 = 0xffffff36;
  }
  else {
    in_RAX = (int *)((longlong)param_5 * 0x98 + DAT_1800390d0);
    if (*in_RAX == -1) {
      DAT_180039110 = 0xffffff37;
    }
    else {
      in_RAX = (int *)seq_context_get_event(**(int **)(in_RAX + 2),param_6);
      if (in_RAX != (int *)0x0) {
        fVar1 = (float)in_RAX[8];
        Var2 = SUB81(in_RAX,0);
        if (param_3 <= fVar1) {
          if (fVar1 - param_3 <= param_4) {
            return (float)Var2;
          }
        }
        else if (param_3 - fVar1 <= param_9) {
          return (float)Var2;
        }
        return (float)Var2;
      }
    }
  }
  return (float)SUB81(in_RAX,0);
}

/* Function: seq_sequencer_get_cur_tick */
int seq_sequencer_get_cur_tick(int param_1)

{
  int *piVar1;
  
                    /* 0x70d0  139  seq_sequencer_get_cur_tick */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    piVar1 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xffffff37;
      return -0xc9;
    }
    return piVar1[10];
  }
  DAT_180039110 = 0xffffff36;
  return -0xca;
}

/* Function: seq_sequencer_get_cur_tick_real */
undefined8 seq_sequencer_get_cur_tick_real(int param_1)

{
  undefined8 in_RAX;
  longlong lVar1;
  
                    /* 0x7130  143  seq_sequencer_get_cur_tick_real */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return in_RAX;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    lVar1 = (longlong)param_1;
    if (*(int *)(lVar1 * 0x98 + DAT_1800390d0) == -1) {
      DAT_180039110 = 0xffffff37;
      return lVar1;
    }
    return lVar1;
  }
  DAT_180039110 = 0xffffff36;
  return in_RAX;
}

/* Function: seq_sequencer_get_cur_sec */
int seq_sequencer_get_cur_sec(int param_1)

{
  int in_EAX;
  
                    /* 0x71a0  136  seq_sequencer_get_cur_sec */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return in_EAX;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    if (*(int *)((longlong)param_1 * 0x98 + DAT_1800390d0) == -1) {
      DAT_180039110 = 0xffffff37;
      return param_1;
    }
    return param_1;
  }
  DAT_180039110 = 0xffffff36;
  return in_EAX;
}

/* Function: seq_sequencer_get_cur_ms */
int seq_sequencer_get_cur_ms(int param_1)

{
  int *piVar1;
  
                    /* 0x7210  133  seq_sequencer_get_cur_ms */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    piVar1 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xffffff37;
      return -0xc9;
    }
    return piVar1[0xe];
  }
  DAT_180039110 = 0xffffff36;
  return -0xca;
}

/* Function: seq_sequencer_get_cur_normalized_time */
undefined8 seq_sequencer_get_cur_normalized_time(int param_1)

{
  undefined8 in_RAX;
  longlong lVar1;
  
                    /* 0x7270  134  seq_sequencer_get_cur_normalized_time */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return in_RAX;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    lVar1 = (longlong)param_1;
    if (*(int *)(lVar1 * 0x98 + DAT_1800390d0) == -1) {
      DAT_180039110 = 0xffffff37;
      return lVar1;
    }
    return lVar1;
  }
  DAT_180039110 = 0xffffff36;
  return in_RAX;
}

/* Function: seq_sequencer_get_cur_times */
int * seq_sequencer_get_cur_times(int param_1)

{
  int *piVar1;
  
                    /* 0x72e0  144  seq_sequencer_get_cur_times */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return (int *)0x0;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    piVar1 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xffffff37;
      return (int *)0x0;
    }
    return piVar1 + 10;
  }
  DAT_180039110 = 0xffffff36;
  return (int *)0x0;
}

/* Function: seq_sequencer_get_cur_measure */
int seq_sequencer_get_cur_measure(int param_1)

{
  int in_EAX;
  
                    /* 0x7340  130  seq_sequencer_get_cur_measure */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return in_EAX;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    if (*(int *)((longlong)param_1 * 0x98 + DAT_1800390d0) == -1) {
      DAT_180039110 = 0xffffff37;
      return param_1;
    }
    return param_1;
  }
  DAT_180039110 = 0xffffff36;
  return in_EAX;
}

/* Function: seq_sequencer_get_cur_beat */
int seq_sequencer_get_cur_beat(int param_1)

{
  int in_EAX;
  
                    /* 0x73b0  126  seq_sequencer_get_cur_beat */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return in_EAX;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    if (*(int *)((longlong)param_1 * 0x98 + DAT_1800390d0) == -1) {
      DAT_180039110 = 0xffffff37;
      return param_1;
    }
    return param_1;
  }
  DAT_180039110 = 0xffffff36;
  return in_EAX;
}

/* Function: seq_sequencer_get_cur_tick_in_beat */
int seq_sequencer_get_cur_tick_in_beat(int param_1)

{
  int *piVar1;
  
                    /* 0x7420  140  seq_sequencer_get_cur_tick_in_beat */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -1;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    piVar1 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xffffff37;
      return -1;
    }
    return piVar1[0x14];
  }
  DAT_180039110 = 0xffffff36;
  return -1;
}

/* Function: seq_sequencer_get_cur_beat_in_measure */
int seq_sequencer_get_cur_beat_in_measure(int param_1)

{
  int in_EAX;
  
                    /* 0x7480  127  seq_sequencer_get_cur_beat_in_measure */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return in_EAX;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    if (*(int *)((longlong)param_1 * 0x98 + DAT_1800390d0) == -1) {
      DAT_180039110 = 0xffffff37;
      return param_1;
    }
    return param_1;
  }
  DAT_180039110 = 0xffffff36;
  return in_EAX;
}

/* Function: seq_sequencer_get_cur_tick_in_measure */
int seq_sequencer_get_cur_tick_in_measure(int param_1)

{
  int *piVar1;
  
                    /* 0x74f0  141  seq_sequencer_get_cur_tick_in_measure */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -1;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    piVar1 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xffffff37;
      return -1;
    }
    return piVar1[0x16];
  }
  DAT_180039110 = 0xffffff36;
  return -1;
}

/* Function: seq_sequencer_get_cur_measure_in_tempo */
int seq_sequencer_get_cur_measure_in_tempo(int param_1)

{
  int in_EAX;
  
                    /* 0x7550  131  seq_sequencer_get_cur_measure_in_tempo */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return in_EAX;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    if (*(int *)((longlong)param_1 * 0x98 + DAT_1800390d0) == -1) {
      DAT_180039110 = 0xffffff37;
      return param_1;
    }
    return param_1;
  }
  DAT_180039110 = 0xffffff36;
  return in_EAX;
}

/* Function: seq_sequencer_get_cur_beat_in_tempo */
int seq_sequencer_get_cur_beat_in_tempo(int param_1)

{
  int in_EAX;
  
                    /* 0x75c0  128  seq_sequencer_get_cur_beat_in_tempo */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return in_EAX;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    if (*(int *)((longlong)param_1 * 0x98 + DAT_1800390d0) == -1) {
      DAT_180039110 = 0xffffff37;
      return param_1;
    }
    return param_1;
  }
  DAT_180039110 = 0xffffff36;
  return in_EAX;
}

/* Function: seq_sequencer_get_cur_tick_in_tempo */
int seq_sequencer_get_cur_tick_in_tempo(int param_1)

{
  int *piVar1;
  
                    /* 0x7630  142  seq_sequencer_get_cur_tick_in_tempo */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -1;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    piVar1 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xffffff37;
      return -1;
    }
    return piVar1[0x19];
  }
  DAT_180039110 = 0xffffff36;
  return -1;
}

/* Function: seq_sequencer_get_cur_measure_timing_01 */
int seq_sequencer_get_cur_measure_timing_01(int param_1)

{
  int in_EAX;
  
                    /* 0x7690  132  seq_sequencer_get_cur_measure_timing_01 */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return in_EAX;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    if (*(int *)((longlong)param_1 * 0x98 + DAT_1800390d0) == -1) {
      DAT_180039110 = 0xffffff37;
      return param_1;
    }
    return param_1;
  }
  DAT_180039110 = 0xffffff36;
  return in_EAX;
}

/* Function: seq_sequencer_get_cur_beat_timing_01 */
int seq_sequencer_get_cur_beat_timing_01(int param_1)

{
  int in_EAX;
  
                    /* 0x7700  129  seq_sequencer_get_cur_beat_timing_01 */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return in_EAX;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    if (*(int *)((longlong)param_1 * 0x98 + DAT_1800390d0) == -1) {
      DAT_180039110 = 0xffffff37;
      return param_1;
    }
    return param_1;
  }
  DAT_180039110 = 0xffffff36;
  return in_EAX;
}

/* Function: seq_sequencer_get_cur_rhythms */
int * seq_sequencer_get_cur_rhythms(int param_1)

{
  int *piVar1;
  
                    /* 0x7770  135  seq_sequencer_get_cur_rhythms */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return (int *)0x0;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    piVar1 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xffffff37;
      return (int *)0x0;
    }
    return piVar1 + 0x12;
  }
  DAT_180039110 = 0xffffff36;
  return (int *)0x0;
}

/* Function: seq_sequencer_get_cur_tempo_id */
undefined4 seq_sequencer_get_cur_tempo_id(int param_1)

{
  int *piVar1;
  
                    /* 0x77d0  138  seq_sequencer_get_cur_tempo_id */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    piVar1 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xffffff37;
      return 0;
    }
    return *(undefined4 *)(*(longlong *)(piVar1 + 6) + 0x70);
  }
  DAT_180039110 = 0xffffff36;
  return 0;
}

/* Function: seq_sequencer_get_cur_tempo */
undefined8 seq_sequencer_get_cur_tempo(int param_1)

{
  int *piVar1;
  
                    /* 0x7830  137  seq_sequencer_get_cur_tempo */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390c8)) {
    piVar1 = (int *)((longlong)param_1 * 0x98 + DAT_1800390d0);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xffffff37;
      return 0;
    }
    return *(undefined8 *)(piVar1 + 6);
  }
  DAT_180039110 = 0xffffff36;
  return 0;
}

/* Function: FUN_180007890 */
int FUN_180007890(int param_1,longlong param_2,undefined *param_3,undefined8 param_4)

{
  code **ppcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  lVar3 = param_2;
  if ((&DAT_1800390f0)[param_1] != 0) {
    FUN_180007980(param_1,param_2,param_3,param_4);
  }
  if (param_2 != 0) {
    (&DAT_1800390f0)[param_1] = param_2;
    *(undefined4 *)(param_2 + 0x48) = 0;
    ppcVar1 = (code **)(&DAT_1800390f0)[param_1];
    if ((ppcVar1 != (code **)0x0) && (param_3 = *ppcVar1, (code *)param_3 != (code *)0x0)) {
      uVar4 = 0;
      iVar2 = (*(code *)param_3)();
      if (iVar2 < 0) {
        FUN_180007980(param_1,uVar4,param_3,param_4);
        return iVar2;
      }
      return 0;
    }
    FUN_180007980(param_1,lVar3,param_3,param_4);
    DAT_180039110 = 0xfffffd43;
    return -0x2bd;
  }
  DAT_180039110 = 0xfffffd42;
  return -0x2be;
}

/* Function: FUN_180007980 */
undefined8 FUN_180007980(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  if ((&DAT_1800390f0)[param_1] != 0) {
    if (0 < *(int *)((&DAT_1800390f0)[param_1] + 0x48)) {
      seq_stream_close_all_by_type(param_1);
    }
    uVar1 = (**(code **)((&DAT_1800390f0)[param_1] + 8))();
    if ((int)uVar1 < 0) {
      FUN_180005d70((longlong)"ERR! = %d",(ulonglong)uVar1,param_3,param_4);
    }
  }
  (&DAT_1800390f0)[param_1] = 0;
  return 0;
}

/* Function: seq_stream_check_uri_type */
int seq_stream_check_uri_type(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  
                    /* 0x7a00  161  seq_stream_check_uri_type */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  plVar4 = &DAT_1800390f0;
  iVar3 = 0;
  while (((*plVar4 == 0 || (pcVar1 = *(code **)(*plVar4 + 0x10), pcVar1 == (code *)0x0)) ||
         (cVar2 = (*pcVar1)(param_1,param_2,param_3), cVar2 == '\0'))) {
    iVar3 = iVar3 + 1;
    plVar4 = plVar4 + 1;
    if (3 < iVar3) {
      return -1;
    }
  }
  return iVar3;
}

/* Function: seq_stream_open */
int seq_stream_open(int param_1,uint param_2,int param_3,int param_4,int param_5,undefined8 *param_6
                   )

{
  int iVar1;
  uint uVar2;
  int *piVar4;
  int iVar5;
  int *piVar3;
  
                    /* 0x7ab0  173  seq_stream_open */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  if (param_3 < 0) {
    DAT_180039110 = 0xfffffec5;
    return -0x13b;
  }
  if (param_4 < 0) {
    DAT_180039110 = 0xfffffec4;
    return -0x13c;
  }
  if ((ulonglong)(longlong)(param_3 + param_4) < 0x100000000) {
    piVar3 = (int *)0x0;
    piVar4 = piVar3;
    iVar5 = -1;
    if (0 < DAT_1800390e0) {
      do {
        iVar1 = DAT_1800390e4 + 1;
        if (DAT_1800390e0 == DAT_1800390e4 + 1) {
          iVar1 = 0;
        }
        piVar4 = (int *)((longlong)DAT_1800390e4 * 0x128 + DAT_1800390e8);
        iVar5 = DAT_1800390e4;
        DAT_1800390e4 = iVar1;
      } while ((*piVar4 != -1) &&
              (uVar2 = (int)piVar3 + 1, piVar3 = (int *)(ulonglong)uVar2, iVar5 = -1,
              (int)uVar2 < DAT_1800390e0));
    }
    FUN_180012b90((undefined (*) [16])(piVar4 + 1),0,0x124);
    piVar4[4] = param_4;
    piVar4[5] = 0;
    *piVar4 = iVar5;
    piVar4[1] = param_1;
    piVar4[2] = param_2;
    piVar4[3] = param_3;
    piVar4[6] = param_5;
    if (param_5 == 0) {
      *(undefined *)(piVar4 + 7) = 0;
    }
    else {
      FUN_18000f860((undefined8 *)(piVar4 + 7),param_6,(longlong)param_5);
    }
    if ((param_2 >> 0xc & 1) != 0) {
      *(undefined8 **)(piVar4 + 0x48) = param_6;
    }
    iVar1 = (**(code **)((&DAT_1800390f0)[piVar4[1]] + 0x18))();
    if ((iVar1 < 0) || ((piVar4[3] != 0 && (iVar1 = seq_stream_seek(iVar5,0,0), iVar1 < 0)))) {
      seq_stream_close(iVar5);
      iVar5 = DAT_180039110;
    }
    return iVar5;
  }
  DAT_180039110 = 0xfffffec6;
  return -0x13a;
}

/* Function: seq_stream_open_from_uri */
ulonglong seq_stream_open_from_uri(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int local_38;
  int local_34;
  int *piVar4;
  
                    /* 0x7c80  174  seq_stream_open_from_uri */
  piVar4 = (int *)0x0;
  iVar7 = -0x65;
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
LAB_180007d26:
    if (DAT_1800390b0 == '\0') {
      DAT_180039110 = 0xffffff9b;
      uVar9 = 0xffffff9b;
    }
    else {
      piVar6 = piVar4;
      uVar9 = 0xffffffff;
      if (0 < DAT_1800390e0) {
        do {
          uVar9 = (ulonglong)DAT_1800390e4;
          DAT_1800390e4 = DAT_1800390e4 + 1;
          if (DAT_1800390e0 == DAT_1800390e4) {
            DAT_1800390e4 = 0;
          }
          piVar6 = (int *)(uVar9 * 0x128 + DAT_1800390e8);
          if (*piVar6 == -1) {
            uVar9 = uVar9 & 0xffffffff;
            break;
          }
          uVar3 = (int)piVar4 + 1;
          piVar4 = (int *)(ulonglong)uVar3;
          uVar9 = 0xffffffff;
        } while ((int)uVar3 < DAT_1800390e0);
      }
      FUN_180012b90((undefined (*) [16])(piVar6 + 1),0,0x124);
      iVar8 = (int)uVar9;
      *piVar6 = iVar8;
      piVar6[1] = iVar7;
      *(undefined8 *)(piVar6 + 2) = 0;
      *(undefined8 *)(piVar6 + 4) = 0;
      piVar6[6] = local_34;
      if (local_34 == 0) {
        *(undefined *)(piVar6 + 7) = 0;
      }
      else {
        FUN_18000f860((undefined8 *)(piVar6 + 7),(undefined8 *)(local_38 + param_2),
                      (longlong)local_34);
      }
      iVar7 = (**(code **)((&DAT_1800390f0)[piVar6[1]] + 0x18))();
      if ((iVar7 < 0) || ((piVar6[3] != 0 && (iVar7 = seq_stream_seek(iVar8,0,0), iVar7 < 0)))) {
        seq_stream_close(iVar8);
        uVar9 = (ulonglong)DAT_180039110;
      }
    }
  }
  else {
    plVar5 = &DAT_1800390f0;
    iVar7 = 0;
    do {
      if (((*plVar5 != 0) && (pcVar1 = *(code **)(*plVar5 + 0x10), pcVar1 != (code *)0x0)) &&
         (cVar2 = (*pcVar1)(), cVar2 != '\0')) {
        if (iVar7 != -1) goto LAB_180007d26;
        break;
      }
      iVar7 = iVar7 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar7 < 4);
    DAT_180039110 = 0xfffffecf;
    uVar9 = 0xfffffecf;
  }
  return uVar9;
}

/* Function: seq_stream_close */
undefined8 seq_stream_close(int param_1)

{
  int *piVar1;
  
                    /* 0x7e20  162  seq_stream_close */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390e0)) {
    piVar1 = (int *)((longlong)param_1 * 0x128 + DAT_1800390e8);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xfffffed3;
      return 0xfffffed3;
    }
    (**(code **)((&DAT_1800390f0)[piVar1[1]] + 0x20))(piVar1);
    *piVar1 = -1;
    return 0;
  }
  DAT_180039110 = 0xfffffed2;
  return 0xfffffed2;
}

/* Function: seq_stream_close_all */
int seq_stream_close_all(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
                    /* 0x7ec0  163  seq_stream_close_all */
  if (DAT_1800390b0 != '\0') {
    iVar4 = 0;
    iVar6 = 0;
    if (0 < DAT_1800390e0) {
      lVar5 = 0;
      lVar7 = 0;
      iVar1 = DAT_1800390e0;
      cVar2 = DAT_1800390b0;
      do {
        piVar3 = (int *)(DAT_1800390e8 + lVar7);
        if (*piVar3 != -1) {
          if (cVar2 == '\0') {
            DAT_180039110 = 0xffffff9b;
          }
          else if ((lVar5 < 0) || (iVar1 <= iVar6)) {
            DAT_180039110 = 0xfffffed2;
          }
          else if (*piVar3 == -1) {
            DAT_180039110 = 0xfffffed3;
          }
          else {
            (**(code **)((&DAT_1800390f0)[piVar3[1]] + 0x20))();
            *piVar3 = -1;
            iVar4 = iVar4 + 1;
            iVar1 = DAT_1800390e0;
            cVar2 = DAT_1800390b0;
          }
        }
        iVar6 = iVar6 + 1;
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 + 0x128;
      } while (iVar6 < iVar1);
    }
    DAT_1800390e4 = 0;
    return iVar4;
  }
  DAT_180039110 = 0xffffff9b;
  return -0x65;
}

/* Function: seq_stream_close_all_by_type */
int seq_stream_close_all_by_type(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
                    /* 0x7fd0  164  seq_stream_close_all_by_type */
  if (DAT_1800390b0 != '\0') {
    iVar4 = 0;
    iVar2 = 0;
    if (0 < DAT_1800390e0) {
      lVar3 = 0;
      do {
        if (((*(int *)(lVar3 + DAT_1800390e8) != -1) &&
            (param_1 == *(int *)(lVar3 + 4 + DAT_1800390e8))) &&
           (uVar1 = seq_stream_close(iVar2), -1 < (int)uVar1)) {
          iVar4 = iVar4 + 1;
        }
        iVar2 = iVar2 + 1;
        lVar3 = lVar3 + 0x128;
      } while (iVar2 < DAT_1800390e0);
    }
    return iVar4;
  }
  DAT_180039110 = 0xffffff9b;
  return -0x65;
}

/* Function: seq_stream_is_opened */
longlong seq_stream_is_opened(int param_1)

{
  undefined8 in_RAX;
  uint7 uVar1;
  
                    /* 0x8060  172  seq_stream_is_opened */
  uVar1 = (uint7)((ulonglong)in_RAX >> 8);
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return (ulonglong)uVar1 << 8;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390e0)) {
    uVar1 = (uint7)((ulonglong)DAT_1800390e8 >> 8);
    if (*(int *)((longlong)param_1 * 0x128 + DAT_1800390e8) == -1) {
      DAT_180039110 = 0xfffffed3;
      return (ulonglong)uVar1 << 8;
    }
    return CONCAT71(uVar1,1);
  }
  DAT_180039110 = 0xfffffed2;
  return (ulonglong)uVar1 << 8;
}

/* Function: seq_stream_read */
undefined4 seq_stream_read(int param_1,longlong param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x80c0  175  seq_stream_read */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  if ((param_1 < 0) || (DAT_1800390e0 <= param_1)) {
    DAT_180039110 = 0xfffffed2;
    return 0xfffffed2;
  }
  piVar2 = (int *)((longlong)param_1 * 0x128 + DAT_1800390e8);
  if (*piVar2 == -1) {
    DAT_180039110 = 0xfffffed3;
    return 0xfffffed3;
  }
  if (param_3 < 0) {
    DAT_180039110 = 0xfffffec4;
    return 0xfffffec4;
  }
  if (param_3 != 0) {
    if (param_2 == 0) {
      DAT_180039110 = 0xfffffec2;
      return 0xfffffec2;
    }
    if ((ulonglong)(longlong)piVar2[4] <
        (ulonglong)((longlong)piVar2[3] + (longlong)param_3 + (longlong)piVar2[5])) {
      DAT_180039110 = 0xfffffec7;
      return 0xfffffec7;
    }
    iVar1 = (**(code **)((&DAT_1800390f0)[piVar2[1]] + 0x28))(piVar2,param_2,param_3);
    if (iVar1 < 0) {
      seq_stream_tell(param_1);
      return DAT_180039110;
    }
    piVar2[5] = piVar2[5] + param_3;
  }
  return 0;
}

/* Function: seq_stream_write */
undefined4 seq_stream_write(int param_1,longlong param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x8230  178  seq_stream_write */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  if ((param_1 < 0) || (DAT_1800390e0 <= param_1)) {
    DAT_180039110 = 0xfffffed2;
    return 0xfffffed2;
  }
  piVar2 = (int *)((longlong)param_1 * 0x128 + DAT_1800390e8);
  if (*piVar2 == -1) {
    DAT_180039110 = 0xfffffed3;
    return 0xfffffed3;
  }
  if (param_3 < 0) {
    DAT_180039110 = 0xfffffec4;
    return 0xfffffec4;
  }
  if (param_3 != 0) {
    if (param_2 == 0) {
      DAT_180039110 = 0xfffffec2;
      return 0xfffffec2;
    }
    if (((*(byte *)(piVar2 + 2) & 2) == 0) &&
       ((ulonglong)(longlong)piVar2[4] <
        (ulonglong)((longlong)piVar2[5] + (longlong)piVar2[3] + (longlong)param_3))) {
      DAT_180039110 = 0xfffffec7;
      return 0xfffffec7;
    }
    iVar1 = (**(code **)((&DAT_1800390f0)[piVar2[1]] + 0x30))(piVar2,param_2,param_3);
    if (iVar1 < 0) {
      seq_stream_tell(param_1);
      return DAT_180039110;
    }
    piVar2[5] = piVar2[5] + param_3;
  }
  return 0;
}

/* Function: seq_stream_seek */
undefined4 seq_stream_seek(int param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  
                    /* 0x83b0  176  seq_stream_seek */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  if ((param_1 < 0) || (DAT_1800390e0 <= param_1)) {
    DAT_180039110 = 0xfffffed2;
    return 0xfffffed2;
  }
  piVar4 = (int *)((longlong)param_1 * 0x128 + DAT_1800390e8);
  if (*piVar4 == -1) {
    DAT_180039110 = 0xfffffed3;
    return 0xfffffed3;
  }
  lVar2 = 0;
  if (param_3 == 0) {
    lVar2 = (longlong)param_2;
  }
  else {
    if (param_3 == 2) {
      iVar1 = piVar4[4];
    }
    else {
      if (param_3 != 1) goto LAB_180008469;
      iVar1 = piVar4[5];
    }
    lVar2 = (longlong)iVar1 + (longlong)param_2;
  }
  if (lVar2 < 0) {
    DAT_180039110 = 0xfffffec3;
    return 0xfffffec3;
  }
LAB_180008469:
  if (piVar4[4] < lVar2) {
    DAT_180039110 = 0xfffffec7;
    return 0xfffffec7;
  }
  uVar3 = lVar2 + piVar4[3];
  if (0xffffffff < (longlong)uVar3) {
    DAT_180039110 = 0xfffffec6;
    return 0xfffffec6;
  }
  iVar1 = (**(code **)((&DAT_1800390f0)[piVar4[1]] + 0x38))(piVar4,uVar3 & 0xffffffff);
  if (iVar1 < 0) {
    return DAT_180039110;
  }
  piVar4[5] = (int)uVar3 - piVar4[3];
  return 0;
}

/* Function: seq_stream_tell */
int seq_stream_tell(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_res10 [6];
  
                    /* 0x8520  177  seq_stream_tell */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  if ((param_1 < 0) || (DAT_1800390e0 <= param_1)) {
    DAT_180039110 = 0xfffffed2;
    return -0x12e;
  }
  piVar2 = (int *)((longlong)param_1 * 0x128 + DAT_1800390e8);
  if (*piVar2 == -1) {
    DAT_180039110 = 0xfffffed3;
    return -0x12d;
  }
  local_res10[0] = 0;
  iVar1 = (**(code **)((&DAT_1800390f0)[piVar2[1]] + 0x40))(piVar2,local_res10);
  if (iVar1 < 0) {
    return DAT_180039110;
  }
  piVar2[5] = local_res10[0] - piVar2[3];
  return local_res10[0] - piVar2[3];
}

/* Function: seq_stream_get_type */
int seq_stream_get_type(int param_1)

{
  int *piVar1;
  
                    /* 0x85f0  171  seq_stream_get_type */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390e0)) {
    piVar1 = (int *)((longlong)param_1 * 0x128 + DAT_1800390e8);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xfffffed3;
      return -0x12d;
    }
    return piVar1[1];
  }
  DAT_180039110 = 0xfffffed2;
  return -0x12e;
}

/* Function: seq_stream_get_option */
int seq_stream_get_option(int param_1)

{
  int *piVar1;
  
                    /* 0x8650  166  seq_stream_get_option */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390e0)) {
    piVar1 = (int *)((longlong)param_1 * 0x128 + DAT_1800390e8);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xfffffed3;
      return -0x12d;
    }
    return piVar1[2];
  }
  DAT_180039110 = 0xfffffed2;
  return -0x12e;
}

/* Function: seq_stream_get_position */
int seq_stream_get_position(int param_1)

{
  int *piVar1;
  
                    /* 0x86b0  169  seq_stream_get_position */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390e0)) {
    piVar1 = (int *)((longlong)param_1 * 0x128 + DAT_1800390e8);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xfffffed3;
      return -0x12d;
    }
    return piVar1[5];
  }
  DAT_180039110 = 0xfffffed2;
  return -0x12e;
}

/* Function: seq_stream_get_size */
int seq_stream_get_size(int param_1)

{
  int *piVar1;
  
                    /* 0x8710  170  seq_stream_get_size */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390e0)) {
    piVar1 = (int *)((longlong)param_1 * 0x128 + DAT_1800390e8);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xfffffed3;
      return -0x12d;
    }
    return piVar1[4];
  }
  DAT_180039110 = 0xfffffed2;
  return -0x12e;
}

/* Function: seq_stream_get_path_length */
int seq_stream_get_path_length(int param_1)

{
  int *piVar1;
  
                    /* 0x8770  168  seq_stream_get_path_length */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390e0)) {
    piVar1 = (int *)((longlong)param_1 * 0x128 + DAT_1800390e8);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xfffffed3;
      return -0x12d;
    }
    return piVar1[6];
  }
  DAT_180039110 = 0xfffffed2;
  return -0x12e;
}

/* Function: seq_stream_get_path */
int * seq_stream_get_path(int param_1)

{
  int *piVar1;
  
                    /* 0x87d0  167  seq_stream_get_path */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return (int *)0x0;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390e0)) {
    piVar1 = (int *)((longlong)param_1 * 0x128 + DAT_1800390e8);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xfffffed3;
      return (int *)0x0;
    }
    return piVar1 + 7;
  }
  DAT_180039110 = 0xfffffed2;
  return (int *)0x0;
}

/* Function: seq_stream_get_extra */
undefined8 seq_stream_get_extra(int param_1)

{
  int *piVar1;
  
                    /* 0x8830  165  seq_stream_get_extra */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0;
  }
  if ((-1 < param_1) && (param_1 < DAT_1800390e0)) {
    piVar1 = (int *)((longlong)param_1 * 0x128 + DAT_1800390e8);
    if (*piVar1 == -1) {
      DAT_180039110 = 0xfffffed3;
      return 0;
    }
    return *(undefined8 *)(piVar1 + 0x48);
  }
  DAT_180039110 = 0xfffffed2;
  return 0;
}

/* Function: FUN_180008890 */
undefined8 FUN_180008890(void)

{
  return 0;
}

/* Function: FUN_180008920 */
void FUN_180008920(longlong param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  undefined auStack104 [32];
  FILE *local_48;
  undefined local_40 [48];
  ulonglong local_10;
  
  local_10 = DAT_180036000 ^ (ulonglong)auStack104;
  if (*(int *)(param_1 + 0x18) < 1) {
    FUN_18000f730(local_10 ^ (ulonglong)auStack104);
    return;
  }
  iVar1 = FUN_180010b24((LPCSTR)(param_1 + 0x1c),(undefined (*) [16])local_40);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (iVar1 != -1) goto LAB_180008988;
  }
  else {
    if (iVar1 != -1) {
      FID_conflict__rmdir((char *)(param_1 + 0x1c));
    }
LAB_180008988:
    pcVar4 = "rb";
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      pcVar4 = "wb";
    }
    local_48 = (FILE *)0x0;
    uVar2 = FUN_180010058(&local_48,(LPCSTR)(param_1 + 0x1c),pcVar4);
    if (uVar2 == 0) {
      *(FILE **)(param_1 + 0x120) = local_48;
      if (*(int *)(param_1 + 0x10) == 0) {
        FUN_1800109cc(local_48,0,2);
        *(undefined4 *)(param_1 + 0xc) = 0;
        lVar3 = ftell(local_48);
        *(long *)(param_1 + 0x10) = lVar3;
        FUN_1800109cc(local_48,0,0);
      }
      goto LAB_180008a38;
    }
    if (uVar2 != 2) {
      if (uVar2 == 0x16) {
        DAT_180039110 = 0xfffffece;
      }
      else {
        DAT_180039110 = 0xfffffecc;
      }
      goto LAB_180008a38;
    }
  }
  DAT_180039110 = 0xfffffed0;
LAB_180008a38:
  FUN_18000f730(local_10 ^ (ulonglong)auStack104);
  return;
}

/* Function: FUN_180008a80 */
undefined8 FUN_180008a80(longlong param_1,undefined (*param_2) [16],int param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1800102cc(param_2,1,(longlong)param_3,*(FILE **)(param_1 + 0x120));
  if (uVar1 != (longlong)param_3) {
    DAT_180039110 = 0xfffffecb;
    return 0xfffffecb;
  }
  return 0;
}

/* Function: FUN_180008ad0 */
undefined8 FUN_180008ad0(longlong param_1,undefined8 *param_2,int param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180010524(param_2,1,(longlong)param_3,*(FILE **)(param_1 + 0x120));
  if (uVar1 != (longlong)param_3) {
    DAT_180039110 = 0xfffffeca;
    return 0xfffffeca;
  }
  return 0;
}

/* Function: FUN_180008b20 */
undefined8 FUN_180008b20(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_1800109cc(*(FILE **)(param_1 + 0x120),param_2,0);
  if (iVar1 != 0) {
    DAT_180039110 = 0xfffffec9;
    return 0xfffffec9;
  }
  return 0;
}

/* Function: FUN_180008b60 */
undefined8 FUN_180008b60(longlong param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = ftell(*(FILE **)(param_1 + 0x120));
  if ((lVar1 != -1) && (*(int *)(param_1 + 0xc) == lVar1 || *(int *)(param_1 + 0xc) < lVar1)) {
    *param_2 = lVar1;
    return 0;
  }
  DAT_180039110 = 0xfffffec8;
  return 0xfffffec8;
}

/* Function: FUN_180008bc0 */
undefined8 FUN_180008bc0(longlong param_1)

{
  void *pvVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    DAT_180039110 = 0xfffffecd;
    return 0xfffffecd;
  }
  if ((*(uint *)(param_1 + 8) & 0x1000) == 0) {
    pvVar1 = malloc((longlong)*(int *)(param_1 + 0x10));
    *(void **)(param_1 + 0x120) = pvVar1;
  }
  return 0;
}

/* Function: FUN_180008c10 */
undefined8 FUN_180008c10(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x1000) == 0) {
    if (*(void **)(param_1 + 0x120) != (void *)0x0) {
      free(*(void **)(param_1 + 0x120));
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
    return 0;
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  return 0;
}

/* Function: FUN_180008c60 */
undefined8 FUN_180008c60(longlong param_1,undefined8 *param_2,int param_3)

{
  FUN_18000f860(param_2,(undefined8 *)
                        ((longlong)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0xc)) +
                        *(longlong *)(param_1 + 0x120)),(longlong)param_3);
  return 0;
}

/* Function: FUN_180008c90 */
undefined8 FUN_180008c90(longlong param_1,undefined8 *param_2,int param_3)

{
  FUN_18000f860((undefined8 *)
                ((longlong)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0xc)) +
                *(longlong *)(param_1 + 0x120)),param_2,(longlong)param_3);
  return 0;
}

/* Function: FUN_180008cd0 */
undefined8 FUN_180008cd0(longlong param_1,int param_2)

{
  if ((-1 < param_2) &&
     (param_2 < (int)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 8);
  }
  DAT_180039110 = 0xfffffbb1;
  return 0;
}

/* Function: seq_edit_open */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 seq_edit_open(int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
                    /* 0x8d90  107  seq_edit_open */
  if (DAT_1800390b0 == '\0') {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  if (DAT_180039118 == '\0') {
    DAT_18003911c = param_1;
    DAT_180039128 = malloc((longlong)param_1 << 3);
    uVar1 = 0;
    uVar3 = uVar1;
    if (0 < param_1) {
      do {
        *(undefined8 *)(uVar1 + (longlong)DAT_180039128) = 0;
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        uVar1 = uVar1 + 8;
        param_1 = DAT_18003911c;
      } while ((int)uVar2 < DAT_18003911c);
    }
    DAT_180039130 = (undefined (*) [16])malloc((longlong)param_1);
    FUN_180012b90(DAT_180039130,0,(longlong)param_1);
    _DAT_180039118 = 1;
    return 0;
  }
  DAT_180039110 = 0xfffffbab;
  return 0xfffffbab;
}

/* Function: seq_edit_close */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void seq_edit_close(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  
                    /* 0x8e50  66  seq_edit_close */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return;
  }
  iVar2 = 0;
  _DAT_180039118 = CONCAT11(1,DAT_180039118);
  _DAT_180039118 = _DAT_180039118 & 0xffffffffffff0000 | (ulonglong)_DAT_180039118;
  if (0 < DAT_18003911c) {
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar3 + (longlong)DAT_180039128) != 0) {
        seq_edit_map_close(iVar2);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < DAT_18003911c);
  }
  free(DAT_180039128);
  pvVar1 = DAT_180039130;
  free(DAT_180039130);
  _DAT_180039118 = 0;
  _DAT_180039120 = 0;
  DAT_180039128 = (void *)0x0;
  DAT_180039130 = (void *)0x0;
  if (DAT_1800390b0 == '\0') {
    _DAT_180039118 = 0;
    _DAT_180039120 = 0;
    DAT_180039128 = (void *)0x0;
    DAT_180039130 = (void *)0x0;
    return;
  }
  seq_close(pvVar1,param_2,param_3,param_4);
  return;
}

/* Function: seq_edit_is_opened */
undefined seq_edit_is_opened(void)

{
                    /* 0x8f20  80  seq_edit_is_opened */
  return DAT_180039118;
}

/* Function: seq_edit_map_new */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int seq_edit_map_new(undefined8 param_1,float param_2,double param_3,int param_4,undefined8 param_5,
                    undefined8 param_6,int param_7,undefined param_8,undefined param_9,
                    undefined param_10,undefined4 param_11)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  double dVar7;
  
                    /* 0x8f30  92  seq_edit_map_new */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    iVar3 = -0x65;
  }
  else {
    uVar5 = 0;
    puVar2 = (undefined4 *)0x0;
    puVar1 = puVar2;
    iVar3 = DAT_180039120;
    if (0 < DAT_18003911c) {
      do {
        DAT_180039120 = iVar3 + 1;
        if (DAT_18003911c == iVar3 + 1) {
          DAT_180039120 = 0;
        }
        if (*(longlong *)(DAT_180039128 + (longlong)iVar3 * 8) == 0) {
          if (-1 < iVar3) {
            lVar6 = DAT_180039128;
            puVar1 = (undefined4 *)FUN_180010bb8(0xa0);
            if (puVar1 != (undefined4 *)0x0) {
              puVar2 = FUN_18000bf30(puVar1,iVar3);
            }
            dVar7 = param_3 / _DAT_18002e7d0;
            *(undefined4 **)(DAT_180039128 + (longlong)iVar3 * 8) = puVar2;
            dVar7 = FUN_1800248f8(dVar7 * (double)param_4 * (double)param_2);
            FUN_18000c280((longlong)puVar2,param_4,CONCAT44(uVar5,(int)dVar7),lVar6,param_7,param_11
                         );
            return iVar3;
          }
          break;
        }
        uVar4 = (int)puVar1 + 1;
        puVar1 = (undefined4 *)(ulonglong)uVar4;
        iVar3 = DAT_180039120;
      } while ((int)uVar4 < DAT_18003911c);
    }
    DAT_180039110 = 0xfffffbae;
    iVar3 = -0x452;
  }
  return iVar3;
}

/* Function: seq_edit_map_open_from_file */
uint seq_edit_map_open_from_file
               (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  int iVar1;
  undefined (*pauVar2) [16];
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 uVar11;
  
                    /* 0x9070  93  seq_edit_map_open_from_file */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  puVar4 = (uint *)0x0;
  puVar7 = puVar4;
  puVar8 = puVar4;
  uVar9 = 0xffffffff;
  if (0 < (int)DAT_1800390e0) {
    do {
      uVar5 = DAT_1800390e4 + 1;
      if (DAT_1800390e0 == DAT_1800390e4 + 1) {
        uVar5 = 0;
      }
      puVar8 = (uint *)((longlong)(int)DAT_1800390e4 * 0x128 + DAT_1800390e8);
      uVar9 = DAT_1800390e4;
      DAT_1800390e4 = uVar5;
    } while ((*puVar8 != 0xffffffff) &&
            (uVar5 = (int)puVar7 + 1, puVar7 = (uint *)(ulonglong)uVar5, uVar9 = 0xffffffff,
            (int)uVar5 < (int)DAT_1800390e0));
  }
  FUN_180012b90((undefined (*) [16])(puVar8 + 1),0,0x124);
  *puVar8 = uVar9;
  *(undefined8 *)(puVar8 + 1) = 0;
  *(undefined8 *)(puVar8 + 3) = 0;
  puVar8[5] = 0;
  puVar8[6] = param_3;
  if (param_3 == 0) {
    *(undefined *)(puVar8 + 7) = 0;
  }
  else {
    FUN_18000f860((undefined8 *)(puVar8 + 7),param_4,(longlong)(int)param_3);
  }
  iVar1 = (**(code **)((&DAT_1800390f0)[(int)puVar8[1]] + 0x18))();
  if (iVar1 < 0) {
    seq_stream_close(uVar9);
    uVar11 = extraout_XMM0_Qa_00;
    uVar9 = DAT_180039110;
  }
  else {
    uVar11 = extraout_XMM0_Qa;
    if ((puVar8[3] != 0) &&
       (iVar1 = seq_stream_seek(uVar9,0,0), uVar11 = extraout_XMM0_Qa_01, iVar1 < 0)) {
      seq_stream_close(uVar9);
      uVar11 = extraout_XMM0_Qa_02;
      uVar9 = DAT_180039110;
    }
  }
  if ((-1 < (int)uVar9) &&
     (pauVar2 = FUN_180004580(uVar11,param_2,uVar9), pauVar2 != (undefined (*) [16])0x0)) {
    piVar10 = (int *)(ulonglong)DAT_18003911c;
    puVar7 = puVar4;
    uVar5 = DAT_180039120;
    if (0 < (int)DAT_18003911c) {
      do {
        DAT_180039120 = uVar5 + 1;
        if (DAT_18003911c == uVar5 + 1) {
          DAT_180039120 = 0;
        }
        if (*(longlong *)(DAT_180039128 + (longlong)(int)uVar5 * 8) == 0) {
          if (-1 < (int)uVar5) {
            puVar3 = (undefined4 *)FUN_180010bb8(0xa0);
            uVar11 = extraout_XMM0_Qa_03;
            if (puVar3 != (undefined4 *)0x0) {
              puVar4 = FUN_18000bf30(puVar3,uVar5);
              uVar11 = extraout_XMM0_Qa_04;
            }
            *(uint **)(DAT_180039128 + (longlong)(int)uVar5 * 8) = puVar4;
            FUN_18000c380(uVar11,(longlong)puVar4,(undefined4 *)pauVar2,piVar10);
            FUN_180005580(pauVar2);
            seq_stream_close(uVar9);
            return uVar5;
          }
          break;
        }
        uVar6 = (int)puVar7 + 1;
        puVar7 = (uint *)(ulonglong)uVar6;
        uVar5 = DAT_180039120;
      } while ((int)uVar6 < (int)DAT_18003911c);
    }
    DAT_180039110 = 0xfffffbae;
  }
  return DAT_180039110;
}

/* Function: seq_edit_map_save_to_file */
uint seq_edit_map_save_to_file
               (undefined8 param_1,undefined8 param_2,int param_3,uint param_4,undefined8 *param_5,
               longlong param_6)

{
  int iVar1;
  uint uVar2;
  uint *puVar4;
  uint uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar6;
  uint *puVar3;
  
                    /* 0x9270  97  seq_edit_map_save_to_file */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    if (*(longlong *)(DAT_180039128 + (longlong)param_3 * 8) != 0) {
      puVar3 = (uint *)0x0;
      puVar4 = puVar3;
      uVar5 = 0xffffffff;
      if (0 < (int)DAT_1800390e0) {
        do {
          param_6 = (longlong)(int)DAT_1800390e4;
          uVar2 = DAT_1800390e4 + 1;
          if (DAT_1800390e0 == DAT_1800390e4 + 1) {
            uVar2 = 0;
          }
          puVar4 = (uint *)(param_6 * 0x128 + DAT_1800390e8);
          uVar5 = DAT_1800390e4;
          DAT_1800390e4 = uVar2;
        } while ((*puVar4 != 0xffffffff) &&
                (uVar2 = (int)puVar3 + 1, puVar3 = (uint *)(ulonglong)uVar2, uVar5 = 0xffffffff,
                (int)uVar2 < (int)DAT_1800390e0));
      }
      FUN_180012b90((undefined (*) [16])(puVar4 + 1),0,0x124);
      puVar4[1] = 0;
      *(undefined8 *)(puVar4 + 4) = 0;
      *puVar4 = uVar5;
      *(undefined8 *)(puVar4 + 2) = 3;
      puVar4[6] = param_4;
      if (param_4 == 0) {
        *(undefined *)(puVar4 + 7) = 0;
      }
      else {
        FUN_18000f860((undefined8 *)(puVar4 + 7),param_5,(longlong)(int)param_4);
      }
      iVar1 = (**(code **)((&DAT_1800390f0)[(int)puVar4[1]] + 0x18))();
      if (iVar1 < 0) {
        seq_stream_close(uVar5);
        uVar6 = extraout_XMM0_Qa_00;
        uVar5 = DAT_180039110;
      }
      else {
        uVar6 = extraout_XMM0_Qa;
        if ((puVar4[3] != 0) &&
           (iVar1 = seq_stream_seek(uVar5,0,0), uVar6 = extraout_XMM0_Qa_01, iVar1 < 0)) {
          seq_stream_close(uVar5);
          uVar6 = extraout_XMM0_Qa_02;
          uVar5 = DAT_180039110;
        }
      }
      uVar2 = DAT_180039110;
      if (-1 < (int)uVar5) {
        uVar2 = seq_edit_map_save_to_stream(uVar6,param_2,param_3,(ulonglong)uVar5,0x66,param_6);
        seq_stream_close(uVar5);
      }
      return uVar2;
    }
    DAT_180039110 = 0xfffffbad;
    return 0xfffffbad;
  }
  DAT_180039110 = 0xffffff9b;
  return 0xffffff9b;
}

/* Function: seq_edit_map_save_to_stream */
undefined4
seq_edit_map_save_to_stream
          (undefined8 param_1,undefined8 param_2,int param_3,ulonglong param_4,ulonglong param_5,
          undefined8 param_6)

{
  int *piVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
                    /* 0x9410  98  seq_edit_map_save_to_stream */
  uVar3 = param_5 & 0xffffffff;
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    piVar1 = *(int **)(DAT_180039128 + (longlong)param_3 * 8);
    if (piVar1 == (int *)0x0) {
      DAT_180039110 = 0xfffffbad;
      return 0xfffffbad;
    }
    FUN_18000dda0(param_1,param_2,(longlong)piVar1,param_4,param_5);
    FUN_18000df80((longlong)piVar1);
    uVar4 = FUN_18000e0e0((longlong)piVar1);
    piVar1[0x27] = 0;
    piVar2 = FUN_18000e390(uVar4,param_2,(longlong)piVar1,uVar3,param_5);
    if (piVar2 == (int *)0x0) {
      seq_stream_close((int)(param_4 & 0xffffffff));
    }
    else {
      uVar3 = FUN_1800051a0(piVar2,param_4 & 0xffffffff,param_5,param_6);
      FUN_180005580(piVar2);
      if ((char)uVar3 != '\0') {
        *(undefined *)(*piVar1 + DAT_180039130) = 0;
        return 0;
      }
    }
    return DAT_180039110;
  }
  DAT_180039110 = 0xffffff9b;
  return 0xffffff9b;
}

/* Function: seq_edit_map_build_context */
int seq_edit_map_build_context
              (undefined8 param_1,undefined8 param_2,int param_3,ulonglong param_4,
              undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
                    /* 0x9510  81  seq_edit_map_build_context */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_3 * 8);
  if (lVar1 == 0) {
    DAT_180039110 = 0xfffffbad;
    return -0x453;
  }
  FUN_18000dda0(param_1,param_2,lVar1,param_4,param_5);
  FUN_18000df80(lVar1);
  uVar4 = FUN_18000e0e0(lVar1);
  *(undefined4 *)(lVar1 + 0x9c) = 0;
  piVar3 = FUN_18000e390(uVar4,param_2,lVar1,param_4 & 0xffffffff,param_5);
  if (piVar3 == (int *)0x0) {
    return DAT_180039110;
  }
  iVar2 = seq_context_open(piVar3);
  FUN_180005580(piVar3);
  return iVar2;
}

/* Function: seq_edit_map_build_to_raw */
int * seq_edit_map_build_to_raw
                (undefined8 param_1,undefined8 param_2,int param_3,ulonglong param_4,
                undefined8 param_5)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  
                    /* 0x95e0  82  seq_edit_map_build_to_raw */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_3 * 8);
    if (lVar1 == 0) {
      DAT_180039110 = 0xfffffbad;
      return (int *)0x0;
    }
    FUN_18000dda0(param_1,param_2,lVar1,param_4,param_5);
    FUN_18000df80(lVar1);
    uVar3 = FUN_18000e0e0(lVar1);
    *(undefined4 *)(lVar1 + 0x9c) = 0;
    piVar2 = FUN_18000e390(uVar3,param_2,lVar1,param_4 & 0xffffffff,param_5);
    return piVar2;
  }
  DAT_180039110 = 0xffffff9b;
  return (int *)0x0;
}

/* Function: seq_edit_map_close */
undefined8 seq_edit_map_close(int param_1)

{
  int *_Memory;
  
                    /* 0x9680  84  seq_edit_map_close */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    _Memory = *(int **)((longlong)param_1 * 8 + DAT_180039128);
    if (_Memory == (int *)0x0) {
      DAT_180039110 = 0xfffffbad;
      return 0xfffffbad;
    }
    *(undefined *)(*_Memory + DAT_180039130) = 0;
    FUN_18000c040((longlong)_Memory);
    free(_Memory);
    *(undefined8 *)((longlong)param_1 * 8 + DAT_180039128) = 0;
    return 0;
  }
  DAT_180039110 = 0xffffff9b;
  return 0xffffff9b;
}

/* Function: seq_edit_map_close_all */
int seq_edit_map_close_all(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
                    /* 0x9730  85  seq_edit_map_close_all */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    iVar3 = 0;
    iVar2 = 0;
    if (0 < DAT_18003911c) {
      lVar4 = 0;
      do {
        if ((*(longlong *)(lVar4 + DAT_180039128) != 0) &&
           (uVar1 = seq_edit_map_close(iVar2), -1 < (int)uVar1)) {
          iVar3 = iVar3 + 1;
        }
        iVar2 = iVar2 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar2 < DAT_18003911c);
    }
    return iVar3;
  }
  DAT_180039110 = 0xffffff9b;
  return -0x65;
}

/* Function: seq_edit_map_is_opened */
ulonglong seq_edit_map_is_opened(int param_1)

{
  ulonglong in_RAX;
  uint7 uVar1;
  
                    /* 0x97c0  90  seq_edit_map_is_opened */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    uVar1 = (uint7)((ulonglong)DAT_180039128 >> 8);
    if (*(longlong *)(DAT_180039128 + (longlong)param_1 * 8) == 0) {
      DAT_180039110 = 0xfffffbad;
      return (ulonglong)uVar1 << 8;
    }
    return CONCAT71(uVar1,1);
  }
  DAT_180039110 = 0xffffff9b;
  return in_RAX & 0xffffffffffffff00;
}

/* Function: seq_edit_map_is_modified */
ulonglong seq_edit_map_is_modified(int param_1)

{
  int *piVar1;
  ulonglong in_RAX;
  
                    /* 0x9800  89  seq_edit_map_is_modified */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    piVar1 = *(int **)(DAT_180039128 + (longlong)param_1 * 8);
    if (piVar1 == (int *)0x0) {
      DAT_180039110 = 0xfffffbad;
      return DAT_180039128 & 0xffffffffffffff00;
    }
    return (ulonglong)*(byte *)(*piVar1 + DAT_180039130);
  }
  DAT_180039110 = 0xffffff9b;
  return in_RAX & 0xffffffffffffff00;
}

/* Function: seq_edit_map_clear_modified */
void seq_edit_map_clear_modified(int param_1)

{
  int *piVar1;
  
                    /* 0x9850  83  seq_edit_map_clear_modified */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    piVar1 = *(int **)(DAT_180039128 + (longlong)param_1 * 8);
    if (piVar1 == (int *)0x0) {
      DAT_180039110 = 0xfffffbad;
      return;
    }
    *(undefined *)(*piVar1 + DAT_180039130) = 0;
    return;
  }
  DAT_180039110 = 0xffffff9b;
  return;
}

/* Function: seq_edit_map_is_updated */
ulonglong seq_edit_map_is_updated(int param_1)

{
  longlong lVar1;
  ulonglong in_RAX;
  
                    /* 0x98a0  91  seq_edit_map_is_updated */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
    if (lVar1 == 0) {
      DAT_180039110 = 0xfffffbad;
      return DAT_180039128 & 0xffffffffffffff00;
    }
    return (ulonglong)(*(int *)(lVar1 + 0x9c) == 0);
  }
  DAT_180039110 = 0xffffff9b;
  return in_RAX & 0xffffffffffffff00;
}

/* Function: seq_edit_map_update */
ulonglong seq_edit_map_update(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                             undefined8 param_5)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
                    /* 0x98f0  102  seq_edit_map_update */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_3 * 8);
    if (lVar1 == 0) {
      DAT_180039110 = 0xfffffbad;
      return DAT_180039128 & 0xffffffffffffff00;
    }
    FUN_18000dda0(param_1,param_2,lVar1,param_4,param_5);
    FUN_18000df80(lVar1);
    uVar2 = FUN_18000e0e0(lVar1);
    *(undefined4 *)(lVar1 + 0x9c) = 0;
    return uVar2 & 0xffffffffffffff00;
  }
  DAT_180039110 = 0xffffff9b;
  return in_RAX & 0xffffffffffffff00;
}

/* Function: seq_edit_map_set_length */
ulonglong seq_edit_map_set_length
                    (undefined8 param_1,double param_2,int param_3,undefined8 param_4,
                    ulonglong param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  int iVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
                    /* 0x9980  99  seq_edit_map_set_length */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return in_RAX & 0xffffffffffffff00;
  }
  lVar11 = *(longlong *)(DAT_180039128 + (longlong)param_3 * 8);
  if (lVar11 == 0) {
    DAT_180039110 = 0xfffffbad;
    return DAT_180039128 & 0xffffffffffffff00;
  }
  uVar6 = FUN_18000c7f0(param_1,param_2,lVar11);
  puVar8 = (undefined8 *)(uVar6 & 0xffffffff);
  uVar7 = (uint)puVar8;
  if (uVar7 == *(uint *)(lVar11 + 0xc)) {
    return CONCAT71((int7)(uVar6 >> 8),1);
  }
  FUN_18000dda0(extraout_XMM0_Qa,param_2,lVar11,puVar8,param_5);
  FUN_18000df80(lVar11);
  uVar13 = FUN_18000e0e0(lVar11);
  if (uVar7 == 0) {
    uVar7 = 1;
  }
  *(undefined4 *)(lVar11 + 0x9c) = 0;
  if (*(longlong *)(lVar11 + 0x48) != *(longlong *)(lVar11 + 0x50)) {
    iVar5 = (int)(*(longlong *)(lVar11 + 0x50) - *(longlong *)(lVar11 + 0x48) >> 3) + -1;
    if (*(int *)(lVar11 + 0xc) < (int)uVar7) {
      *(uint *)(*(longlong *)(*(longlong *)(lVar11 + 0x48) + (longlong)iVar5 * 8) + 4) = uVar7;
    }
    else {
      for (lVar10 = (longlong)iVar5; lVar10 != -1; lVar10 = lVar10 + -1) {
        puVar3 = *(uint **)(*(longlong *)(lVar11 + 0x48) + lVar10 * 8);
        uVar2 = *puVar3;
        puVar8 = (undefined8 *)(ulonglong)uVar2;
        if ((int)uVar2 < (int)uVar7) {
          if ((int)uVar7 < (int)puVar3[1]) {
            puVar3[1] = uVar7;
          }
        }
        else {
          FUN_18000ce80(lVar11,uVar2);
          uVar13 = extraout_XMM0_Qa_00;
        }
      }
      lVar10 = 0;
      iVar5 = (int)(*(longlong *)(lVar11 + 0x80) - *(longlong *)(lVar11 + 0x78) >> 3);
      if (0 < iVar5) {
        do {
          lVar4 = *(longlong *)(*(longlong *)(lVar11 + 0x78) + lVar10 * 8);
          iVar9 = (int)(*(longlong *)(lVar4 + 0x18) - *(longlong *)(lVar4 + 0x10) >> 3) + -1;
          if (iVar9 != -1) {
            lVar12 = (longlong)iVar9 * 8;
            do {
              if ((iVar9 < 0) ||
                 ((int)(*(longlong *)(lVar4 + 0x18) - *(longlong *)(lVar4 + 0x10) >> 3) <= iVar9)) {
                DAT_180039110 = 0xfffffbb1;
                puVar8 = (undefined8 *)0x0;
              }
              else {
                puVar8 = *(undefined8 **)(lVar12 + *(longlong *)(lVar4 + 0x10));
              }
              uVar2 = *(uint *)puVar8;
              param_5 = (ulonglong)uVar2;
              if ((int)uVar2 < (int)uVar7) {
                if ((int)uVar7 < (int)(uVar2 + *(int *)((longlong)puVar8 + 4))) {
                  *(uint *)((longlong)puVar8 + 4) = uVar7 - uVar2;
                }
              }
              else if ((iVar9 < 0) ||
                      ((int)(*(longlong *)(lVar4 + 0x18) - *(longlong *)(lVar4 + 0x10) >> 3) <=
                       iVar9)) {
                DAT_180039110 = 0xfffffbb1;
              }
              else {
                free(*(void **)(lVar12 + *(longlong *)(lVar4 + 0x10)));
                puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar9 * 8);
                puVar8 = puVar1 + 1;
                param_5 = *(longlong *)(lVar4 + 0x18) - (longlong)puVar8 & 0xfffffffffffffff8;
                FUN_18000f860(puVar1,puVar8,param_5);
                *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + -8;
                uVar13 = extraout_XMM0_Qa_01;
              }
              iVar9 = iVar9 + -1;
              lVar12 = lVar12 + -8;
            } while (iVar9 != -1);
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < iVar5);
      }
    }
  }
  *(uint *)(lVar11 + 0x9c) = *(uint *)(lVar11 + 0x9c) | 0x10000101;
  *(uint *)(lVar11 + 0xc) = uVar7;
  FUN_18000dda0(uVar13,param_2,lVar11,puVar8,param_5);
  FUN_18000df80(lVar11);
  uVar6 = FUN_18000e0e0(lVar11);
  *(undefined4 *)(lVar11 + 0x9c) = 0;
  return uVar6 & 0xffffffffffffff00;
}

/* Function: seq_edit_map_get_length */
undefined8 seq_edit_map_get_length(int param_1)

{
  undefined8 in_RAX;
  
                    /* 0x99f0  86  seq_edit_map_get_length */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    if (*(longlong *)(DAT_180039128 + (longlong)param_1 * 8) == 0) {
      DAT_180039110 = 0xfffffbad;
      return DAT_180039128;
    }
    return DAT_180039128;
  }
  DAT_180039110 = 0xffffff9b;
  return in_RAX;
}

/* Function: seq_edit_map_set_length_tick */
ulonglong seq_edit_map_set_length_tick(int param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  ulonglong in_RAX;
  uint7 uVar8;
  ulonglong uVar7;
  undefined4 in_register_00000014;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong in_R8;
  longlong lVar12;
  undefined8 in_XMM0_Qa;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 in_XMM1_Qa;
  
  puVar9 = (undefined8 *)CONCAT44(in_register_00000014,param_2);
                    /* 0x9a50  100  seq_edit_map_set_length_tick */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return in_RAX & 0xffffffffffffff00;
  }
  lVar3 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
  uVar8 = (uint7)((ulonglong)DAT_180039128 >> 8);
  if (lVar3 == 0) {
    DAT_180039110 = 0xfffffbad;
    return (ulonglong)uVar8 << 8;
  }
  if (param_2 == *(int *)(lVar3 + 0xc)) {
    return CONCAT71(uVar8,1);
  }
  FUN_18000dda0(in_XMM0_Qa,in_XMM1_Qa,lVar3,puVar9,in_R8);
  FUN_18000df80(lVar3);
  uVar13 = FUN_18000e0e0(lVar3);
  if (param_2 == 0) {
    param_2 = 1;
  }
  *(undefined4 *)(lVar3 + 0x9c) = 0;
  if (*(longlong *)(lVar3 + 0x48) != *(longlong *)(lVar3 + 0x50)) {
    iVar6 = (int)(*(longlong *)(lVar3 + 0x50) - *(longlong *)(lVar3 + 0x48) >> 3) + -1;
    if (*(int *)(lVar3 + 0xc) < param_2) {
      *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + (longlong)iVar6 * 8) + 4) = param_2;
    }
    else {
      for (lVar11 = (longlong)iVar6; lVar11 != -1; lVar11 = lVar11 + -1) {
        puVar4 = *(uint **)(*(longlong *)(lVar3 + 0x48) + lVar11 * 8);
        uVar2 = *puVar4;
        puVar9 = (undefined8 *)(ulonglong)uVar2;
        if ((int)uVar2 < param_2) {
          if (param_2 < (int)puVar4[1]) {
            puVar4[1] = param_2;
          }
        }
        else {
          FUN_18000ce80(lVar3,uVar2);
          uVar13 = extraout_XMM0_Qa;
        }
      }
      lVar11 = 0;
      iVar6 = (int)(*(longlong *)(lVar3 + 0x80) - *(longlong *)(lVar3 + 0x78) >> 3);
      if (0 < iVar6) {
        do {
          lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x78) + lVar11 * 8);
          iVar10 = (int)(*(longlong *)(lVar5 + 0x18) - *(longlong *)(lVar5 + 0x10) >> 3) + -1;
          if (iVar10 != -1) {
            lVar12 = (longlong)iVar10 * 8;
            do {
              if ((iVar10 < 0) ||
                 ((int)(*(longlong *)(lVar5 + 0x18) - *(longlong *)(lVar5 + 0x10) >> 3) <= iVar10))
              {
                DAT_180039110 = 0xfffffbb1;
                puVar9 = (undefined8 *)0x0;
              }
              else {
                puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar5 + 0x10));
              }
              uVar2 = *(uint *)puVar9;
              in_R8 = (ulonglong)uVar2;
              if ((int)uVar2 < param_2) {
                if (param_2 < (int)(uVar2 + *(int *)((longlong)puVar9 + 4))) {
                  *(uint *)((longlong)puVar9 + 4) = param_2 - uVar2;
                }
              }
              else if ((iVar10 < 0) ||
                      ((int)(*(longlong *)(lVar5 + 0x18) - *(longlong *)(lVar5 + 0x10) >> 3) <=
                       iVar10)) {
                DAT_180039110 = 0xfffffbb1;
              }
              else {
                free(*(void **)(lVar12 + *(longlong *)(lVar5 + 0x10)));
                puVar1 = (undefined8 *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar10 * 8);
                puVar9 = puVar1 + 1;
                in_R8 = *(longlong *)(lVar5 + 0x18) - (longlong)puVar9 & 0xfffffffffffffff8;
                FUN_18000f860(puVar1,puVar9,in_R8);
                *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + -8;
                uVar13 = extraout_XMM0_Qa_00;
              }
              iVar10 = iVar10 + -1;
              lVar12 = lVar12 + -8;
            } while (iVar10 != -1);
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar6);
      }
    }
  }
  *(uint *)(lVar3 + 0x9c) = *(uint *)(lVar3 + 0x9c) | 0x10000101;
  *(int *)(lVar3 + 0xc) = param_2;
  FUN_18000dda0(uVar13,in_XMM1_Qa,lVar3,puVar9,in_R8);
  FUN_18000df80(lVar3);
  uVar7 = FUN_18000e0e0(lVar3);
  *(undefined4 *)(lVar3 + 0x9c) = 0;
  return uVar7 & 0xffffffffffffff00;
}

/* Function: seq_edit_map_get_length_tick */
undefined4 seq_edit_map_get_length_tick(int param_1)

{
  longlong lVar1;
  
                    /* 0x9aa0  87  seq_edit_map_get_length_tick */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
    if (lVar1 == 0) {
      DAT_180039110 = 0xfffffbad;
      return 0xfffffbad;
    }
    return *(undefined4 *)(lVar1 + 0xc);
  }
  DAT_180039110 = 0xffffff9b;
  return 0xffffff9b;
}

/* Function: seq_edit_map_query_time_to_tick */
ulonglong seq_edit_map_query_time_to_tick(undefined8 param_1,double param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
                    /* 0x9af0  95  seq_edit_map_query_time_to_tick */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_3 * 8);
    if (lVar1 == 0) {
      DAT_180039110 = 0xfffffbad;
      return 0xfffffbad;
    }
    uVar2 = FUN_18000c7f0(param_1,param_2,lVar1);
    return uVar2;
  }
  DAT_180039110 = 0xffffff9b;
  return 0xffffff9b;
}

/* Function: seq_edit_map_query_time_to_tick_2 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong seq_edit_map_query_time_to_tick_2
                    (undefined8 param_1,double param_2,double param_3,int param_4)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  int **ppiVar4;
  ulonglong uVar5;
  int iVar6;
  double dVar7;
  
                    /* 0x9b40  96  seq_edit_map_query_time_to_tick_2 */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_4 * 8);
  if (lVar1 == 0) {
    DAT_180039110 = 0xfffffbad;
    return 0xfffffbad;
  }
  if (0.0 <= param_2) {
    if (*(double *)(lVar1 + 0x10) <= param_2) {
      return (ulonglong)*(uint *)(lVar1 + 0xc);
    }
    uVar5 = *(ulonglong *)(lVar1 + 0x50);
    dVar7 = (double)*(int *)(lVar1 + 0x18) * (param_3 / _DAT_18002e7d0);
    if (*(ulonglong *)(lVar1 + 0x48) == uVar5) {
      return uVar5 & 0xffffffff00000000 | (ulonglong)(uint)(int)(dVar7 * param_2);
    }
    uVar3 = 0;
    iVar6 = (int)((longlong)(uVar5 - *(longlong *)(lVar1 + 0x48)) >> 3);
    if (0 < iVar6) {
      ppiVar4 = *(int ***)(lVar1 + 0x48);
      uVar5 = uVar3;
      do {
        piVar2 = *ppiVar4;
        if (((double)(float)piVar2[2] <= param_2) && (param_2 < (double)(float)piVar2[3])) {
          if (0 < (int)uVar5) {
            dVar7 = *(double *)(piVar2 + 0x12);
          }
          return (ulonglong)(uint)((int)(dVar7 * (param_2 - (double)(float)piVar2[2])) + *piVar2);
        }
        uVar3 = uVar3 + 1;
        uVar5 = (ulonglong)((int)uVar5 + 1);
        ppiVar4 = ppiVar4 + 1;
      } while ((longlong)uVar3 < (longlong)iVar6);
    }
  }
  return 0;
}

/* Function: seq_edit_map_query_tick_to_sec */
void seq_edit_map_query_tick_to_sec(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int **ppiVar4;
  
                    /* 0x9b90  94  seq_edit_map_query_tick_to_sec */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return;
  }
  lVar3 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
  if (lVar3 == 0) {
    DAT_180039110 = 0xfffffbad;
    return;
  }
  if (-1 < param_2) {
    if (*(int *)(lVar3 + 0xc) == param_2 || *(int *)(lVar3 + 0xc) < param_2) {
      return;
    }
    if (*(longlong *)(lVar3 + 0x48) == *(longlong *)(lVar3 + 0x50)) {
      return;
    }
    iVar2 = (int)(*(longlong *)(lVar3 + 0x50) - *(longlong *)(lVar3 + 0x48) >> 3);
    if (0 < iVar2) {
      ppiVar4 = *(int ***)(lVar3 + 0x48);
      lVar3 = 0;
      do {
        piVar1 = *ppiVar4;
        if ((*piVar1 == param_2 || *piVar1 < param_2) && (param_2 < piVar1[1])) {
          return;
        }
        lVar3 = lVar3 + 1;
        ppiVar4 = ppiVar4 + 1;
      } while (lVar3 < iVar2);
    }
  }
  return;
}

/* Function: seq_edit_map_set_type */
undefined8 seq_edit_map_set_type(int param_1,undefined4 param_2)

{
  longlong lVar1;
  
                    /* 0x9be0  101  seq_edit_map_set_type */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
    if (lVar1 == 0) {
      DAT_180039110 = 0xfffffbad;
      return 0xfffffbad;
    }
    *(undefined4 *)(lVar1 + 0x40) = param_2;
    return 0;
  }
  DAT_180039110 = 0xffffff9b;
  return 0xffffff9b;
}

/* Function: seq_edit_map_get_type */
undefined4 seq_edit_map_get_type(int param_1)

{
  longlong lVar1;
  
                    /* 0x9c30  88  seq_edit_map_get_type */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
    if (lVar1 == 0) {
      DAT_180039110 = 0xfffffbad;
      return 0xfffffbad;
    }
    return *(undefined4 *)(lVar1 + 0x40);
  }
  DAT_180039110 = 0xffffff9b;
  return 0xffffff9b;
}

/* Function: seq_edit_tempo_new */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
seq_edit_tempo_new(undefined8 param_1,undefined8 param_2,double param_3,int param_4,int param_5,
                  undefined8 param_6,int param_7)

{
  int *piVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int local_88 [4];
  double local_78;
  int local_70;
  double local_68;
  double local_60;
  int local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
                    /* 0x9c80  113  seq_edit_tempo_new */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    uVar2 = 0xffffff9b;
  }
  else {
    piVar1 = *(int **)(DAT_180039128 + (longlong)param_4 * 8);
    if (piVar1 == (int *)0x0) {
      DAT_180039110 = 0xfffffbad;
      uVar2 = 0xfffffbad;
    }
    else {
      DAT_180039110 = 0;
      local_78 = param_3;
      FUN_180012b90((undefined (*) [16])local_88,0,0x70);
      local_50 = local_78 / _DAT_18002e7d0;
      local_30 = (double)param_7;
      local_68 = DAT_18002e7b8 / local_30;
      local_60 = *(double *)(piVar1 + 8) / local_30;
      local_40 = (double)piVar1[6] * local_50;
      local_58 = (int)(DAT_18002e7b8 / local_60 + _DAT_18002e7b0);
      local_48 = DAT_18002e7b8 / local_50;
      local_30 = local_50 / local_30;
      local_38 = DAT_18002e7b8 / local_40;
      local_28 = DAT_18002e7b8 / local_30;
      local_88[0] = param_5;
      local_70 = param_7;
      uVar3 = FUN_18000cc60((longlong)piVar1,local_88);
      uVar2 = DAT_180039110;
      if ((char)uVar3 != '\0') {
        *(bool *)(*piVar1 + DAT_180039130) = piVar1[0x27] != 0;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

/* Function: seq_edit_tempo_modify */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 seq_edit_tempo_modify(int param_1,int param_2,int param_3,undefined8 param_4,int param_5)

{
  int *piVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 in_XMM3_Qa;
  undefined4 uVar4;
  int local_88 [4];
  undefined8 local_78;
  int local_70;
  double local_68;
  double local_60;
  int local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
                    /* 0x9e10  112  seq_edit_tempo_modify */
  uVar3 = (undefined4)in_XMM3_Qa;
  uVar4 = (undefined4)((ulonglong)in_XMM3_Qa >> 0x20);
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    uVar3 = 0xffffff9b;
  }
  else {
    piVar1 = *(int **)(DAT_180039128 + (longlong)param_1 * 8);
    if (piVar1 == (int *)0x0) {
      DAT_180039110 = 0xfffffbad;
      uVar3 = 0xfffffbad;
    }
    else {
      DAT_180039110 = 0;
      FUN_180012b90((undefined (*) [16])local_88,0,0x70);
      local_78 = CONCAT44(uVar4,uVar3);
      local_50 = (double)CONCAT44(uVar4,uVar3) / _DAT_18002e7d0;
      local_70 = param_5;
      local_30 = (double)param_5;
      local_68 = DAT_18002e7b8 / local_30;
      local_60 = *(double *)(piVar1 + 8) / local_30;
      local_40 = (double)piVar1[6] * local_50;
      local_58 = (int)(DAT_18002e7b8 / local_60 + _DAT_18002e7b0);
      local_48 = DAT_18002e7b8 / local_50;
      local_30 = local_50 / local_30;
      local_38 = DAT_18002e7b8 / local_40;
      local_28 = DAT_18002e7b8 / local_30;
      local_88[0] = param_3;
      uVar2 = FUN_18000cdb0((longlong)piVar1,param_2,local_88);
      uVar3 = DAT_180039110;
      if ((char)uVar2 != '\0') {
        *(bool *)(*piVar1 + DAT_180039130) = piVar1[0x27] != 0;
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

/* Function: seq_edit_tempo_remove */
undefined4 seq_edit_tempo_remove(int param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
                    /* 0x9fa0  114  seq_edit_tempo_remove */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  piVar1 = *(int **)(DAT_180039128 + (longlong)param_1 * 8);
  if (piVar1 == (int *)0x0) {
    DAT_180039110 = 0xfffffbad;
    return 0xfffffbad;
  }
  DAT_180039110 = 0;
  uVar2 = FUN_18000ce80((longlong)piVar1,param_2);
  if ((char)uVar2 != '\0') {
    *(bool *)(*piVar1 + DAT_180039130) = piVar1[0x27] != 0;
    return 0;
  }
  return DAT_180039110;
}

/* Function: seq_edit_tempo_remove_all */
undefined4 seq_edit_tempo_remove_all(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
                    /* 0xa050  115  seq_edit_tempo_remove_all */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  piVar1 = *(int **)(DAT_180039128 + (longlong)param_1 * 8);
  if (piVar1 == (int *)0x0) {
    DAT_180039110 = 0xfffffbad;
    return 0xfffffbad;
  }
  DAT_180039110 = 0;
  uVar2 = FUN_18000cf30((longlong)piVar1);
  if ((char)uVar2 != '\0') {
    *(bool *)(*piVar1 + DAT_180039130) = piVar1[0x27] != 0;
    return 0;
  }
  return DAT_180039110;
}

/* Function: seq_edit_object_new */
int seq_edit_object_new(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
                    /* 0xa100  104  seq_edit_object_new */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  piVar1 = *(int **)(DAT_180039128 + (longlong)param_1 * 8);
  if (piVar1 == (int *)0x0) {
    DAT_180039110 = 0xfffffbad;
    return -0x453;
  }
  DAT_180039110 = 0;
  local_18 = param_4;
  local_14 = param_2;
  local_10 = param_3;
  iVar2 = FUN_18000cfc0((longlong)piVar1,&local_18);
  if (-1 < iVar2) {
    *(bool *)(*piVar1 + DAT_180039130) = piVar1[0x27] != 0;
    return iVar2;
  }
  return DAT_180039110;
}

/* Function: seq_edit_object_modify */
undefined4
seq_edit_object_modify
          (int param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5)

{
  int *piVar1;
  ulonglong uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
                    /* 0xa1c0  103  seq_edit_object_modify */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  piVar1 = *(int **)(DAT_180039128 + (longlong)param_1 * 8);
  if (piVar1 == (int *)0x0) {
    DAT_180039110 = 0xfffffbad;
    return 0xfffffbad;
  }
  DAT_180039110 = 0;
  local_18 = param_5;
  local_14 = param_3;
  local_10 = param_4;
  uVar2 = FUN_18000d100((longlong)piVar1,param_2,&local_18);
  if ((char)uVar2 != '\0') {
    *(bool *)(*piVar1 + DAT_180039130) = piVar1[0x27] != 0;
    return 0;
  }
  return DAT_180039110;
}

/* Function: seq_edit_object_remove */
undefined4 seq_edit_object_remove(int param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
                    /* 0xa280  105  seq_edit_object_remove */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  piVar1 = *(int **)(DAT_180039128 + (longlong)param_1 * 8);
  if (piVar1 == (int *)0x0) {
    DAT_180039110 = 0xfffffbad;
    return 0xfffffbad;
  }
  DAT_180039110 = 0;
  uVar2 = FUN_18000d200((longlong)piVar1,param_2);
  if ((char)uVar2 != '\0') {
    *(bool *)(*piVar1 + DAT_180039130) = piVar1[0x27] != 0;
    return 0;
  }
  return DAT_180039110;
}

/* Function: seq_edit_object_remove_all */
undefined4 seq_edit_object_remove_all(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
                    /* 0xa330  106  seq_edit_object_remove_all */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  piVar1 = *(int **)(DAT_180039128 + (longlong)param_1 * 8);
  if (piVar1 == (int *)0x0) {
    DAT_180039110 = 0xfffffbad;
    return 0xfffffbad;
  }
  DAT_180039110 = 0;
  uVar2 = FUN_18000d290((longlong)piVar1);
  if ((char)uVar2 != '\0') {
    *(bool *)(*piVar1 + DAT_180039130) = piVar1[0x27] != 0;
    return 0;
  }
  return DAT_180039110;
}

/* Function: seq_edit_channel_new */
int seq_edit_channel_new
              (undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,
              undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 local_res18;
  undefined4 local_res1c;
  
                    /* 0xa3e0  63  seq_edit_channel_new */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return -0x65;
  }
  piVar1 = *(int **)(DAT_180039128 + (longlong)param_3 * 8);
  if (piVar1 == (int *)0x0) {
    DAT_180039110 = 0xfffffbad;
    return -0x453;
  }
  DAT_180039110 = 0;
  local_res18 = 0;
  local_res1c = param_4;
  iVar2 = FUN_18000d340(param_1,param_2,(longlong)piVar1,(undefined8 *)&local_res18,param_5);
  if (-1 < iVar2) {
    *(bool *)(*piVar1 + DAT_180039130) = piVar1[0x27] != 0;
    return iVar2;
  }
  return DAT_180039110;
}

/* Function: seq_edit_channel_modify */
undefined8 seq_edit_channel_modify(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int *piVar2;
  
                    /* 0xa490  61  seq_edit_channel_modify */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    piVar2 = *(int **)(DAT_180039128 + (longlong)param_1 * 8);
    if (piVar2 == (int *)0x0) {
      DAT_180039110 = 0xfffffbad;
      return 0xfffffbad;
    }
    DAT_180039110 = 0;
    if ((-1 < param_2) &&
       (param_2 < (int)(*(longlong *)(piVar2 + 0x20) - *(longlong *)(piVar2 + 0x1e) >> 3))) {
      *(undefined4 *)(*(longlong *)(*(longlong *)(piVar2 + 0x1e) + (longlong)param_2 * 8) + 8) =
           param_3;
      puVar1 = (uint *)(piVar2 + 0x27);
      *puVar1 = *puVar1 | 0x40000;
      *(bool *)(*piVar2 + DAT_180039130) = *puVar1 != 0;
    }
    return 0;
  }
  DAT_180039110 = 0xffffff9b;
  return 0xffffff9b;
}

/* Function: seq_edit_channel_move */
undefined4
seq_edit_channel_move
          (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
          longlong param_6)

{
  int *piVar1;
  undefined8 uVar2;
  
                    /* 0xa530  62  seq_edit_channel_move */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  piVar1 = *(int **)(DAT_180039128 + (longlong)param_3 * 8);
  if (piVar1 == (int *)0x0) {
    DAT_180039110 = 0xfffffbad;
    return 0xfffffbad;
  }
  DAT_180039110 = 0;
  uVar2 = FUN_18000d6b0(param_1,param_2,(longlong)piVar1,param_4,param_5,param_6);
  if ((char)uVar2 != '\0') {
    *(bool *)(*piVar1 + DAT_180039130) = piVar1[0x27] != 0;
    return 0;
  }
  return DAT_180039110;
}

/* Function: seq_edit_channel_remove */
undefined4
seq_edit_channel_remove
          (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  undefined8 uVar2;
  
                    /* 0xa5e0  64  seq_edit_channel_remove */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  piVar1 = *(int **)(DAT_180039128 + (longlong)param_3 * 8);
  if (piVar1 == (int *)0x0) {
    DAT_180039110 = 0xfffffbad;
    return 0xfffffbad;
  }
  DAT_180039110 = 0;
  uVar2 = FUN_18000d490(param_1,param_2,(longlong)piVar1,param_4,param_5);
  if ((char)uVar2 != '\0') {
    *(bool *)(*piVar1 + DAT_180039130) = piVar1[0x27] != 0;
    return 0;
  }
  return DAT_180039110;
}

/* Function: seq_edit_channel_remove_all */
undefined4 seq_edit_channel_remove_all(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
                    /* 0xa690  65  seq_edit_channel_remove_all */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  piVar1 = *(int **)(DAT_180039128 + (longlong)param_1 * 8);
  if (piVar1 == (int *)0x0) {
    DAT_180039110 = 0xfffffbad;
    return 0xfffffbad;
  }
  DAT_180039110 = 0;
  uVar2 = FUN_18000d5c0((longlong)piVar1);
  if ((char)uVar2 != '\0') {
    *(bool *)(*piVar1 + DAT_180039130) = piVar1[0x27] != 0;
    return 0;
  }
  return DAT_180039110;
}

/* Function: seq_edit_event_new */
undefined4
seq_edit_event_new(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                  undefined4 param_6)

{
  int *piVar1;
  char cVar2;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
                    /* 0xa740  68  seq_edit_event_new */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  piVar1 = *(int **)(DAT_180039128 + (longlong)param_1 * 8);
  if (piVar1 == (int *)0x0) {
    DAT_180039110 = 0xfffffbad;
    return 0xfffffbad;
  }
  local_1c = param_5;
  local_18 = param_6;
  DAT_180039110 = 0;
  local_14 = 0;
  local_28 = param_3;
  local_24 = param_4;
  local_20 = param_2;
  cVar2 = FUN_18000d8f0((longlong)piVar1,param_2,&local_28);
  if (cVar2 != '\0') {
    *(bool *)(*piVar1 + DAT_180039130) = piVar1[0x27] != 0;
    return 0;
  }
  return DAT_180039110;
}

/* Function: seq_edit_event_modify */
undefined4
seq_edit_event_modify
          (int param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6,
          undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  undefined8 uVar2;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
                    /* 0xa810  67  seq_edit_event_modify */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  piVar1 = *(int **)(DAT_180039128 + (longlong)param_1 * 8);
  if (piVar1 == (int *)0x0) {
    DAT_180039110 = 0xfffffbad;
    return 0xfffffbad;
  }
  local_28 = param_5;
  local_24 = param_6;
  DAT_180039110 = 0;
  local_1c = param_7;
  local_18 = param_8;
  local_14 = 0;
  local_20 = param_4;
  uVar2 = FUN_18000d9e0((longlong)piVar1,param_2,param_3,&local_28);
  if ((char)uVar2 != '\0') {
    *(bool *)(*piVar1 + DAT_180039130) = piVar1[0x27] != 0;
    return 0;
  }
  return DAT_180039110;
}

/* Function: seq_edit_event_remove */
undefined4 seq_edit_event_remove(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
                    /* 0xa8f0  69  seq_edit_event_remove */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  piVar1 = *(int **)(DAT_180039128 + (longlong)param_1 * 8);
  if (piVar1 == (int *)0x0) {
    DAT_180039110 = 0xfffffbad;
    return 0xfffffbad;
  }
  DAT_180039110 = 0;
  uVar2 = FUN_18000dba0((longlong)piVar1,param_2,param_3);
  if ((char)uVar2 != '\0') {
    *(bool *)(*piVar1 + DAT_180039130) = piVar1[0x27] != 0;
    return 0;
  }
  return DAT_180039110;
}

/* Function: seq_edit_event_remove_all */
undefined4 seq_edit_event_remove_all(int param_1)

{
  int *piVar1;
  byte bVar2;
  
                    /* 0xa9a0  70  seq_edit_event_remove_all */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  piVar1 = *(int **)(DAT_180039128 + (longlong)param_1 * 8);
  if (piVar1 == (int *)0x0) {
    DAT_180039110 = 0xfffffbad;
    return 0xfffffbad;
  }
  DAT_180039110 = 0;
  bVar2 = FUN_18000dcb0((longlong)piVar1);
  if (bVar2 != 0) {
    *(bool *)(*piVar1 + DAT_180039130) = piVar1[0x27] != 0;
    return 0;
  }
  return DAT_180039110;
}

/* Function: seq_edit_event_remove_all_by_channel */
undefined4 seq_edit_event_remove_all_by_channel(int param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  ulonglong uVar3;
  
                    /* 0xaa50  71  seq_edit_event_remove_all_by_channel */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0xffffff9b;
  }
  piVar2 = *(int **)(DAT_180039128 + (longlong)param_1 * 8);
  if (piVar2 == (int *)0x0) {
    DAT_180039110 = 0xfffffbad;
    return 0xfffffbad;
  }
  DAT_180039110 = 0;
  if ((-1 < param_2) &&
     (param_2 < (int)(*(longlong *)(piVar2 + 0x20) - *(longlong *)(piVar2 + 0x1e) >> 3))) {
    uVar3 = FUN_18000b540(*(longlong *)(*(longlong *)(piVar2 + 0x1e) + (longlong)param_2 * 8));
    if ((char)uVar3 != '\0') {
      puVar1 = (uint *)(piVar2 + 0x27);
      *puVar1 = *puVar1 | 0x2000000;
      *(undefined8 *)(piVar2 + 0x24) = 0;
      *(bool *)(*piVar2 + DAT_180039130) = *puVar1 != 0;
      return 0;
    }
    return DAT_180039110;
  }
  DAT_180039110 = 0xfffffbb1;
  return 0xfffffbb1;
}

/* Function: seq_edit_get_info */
longlong seq_edit_get_info(int param_1)

{
  longlong lVar1;
  
                    /* 0xab40  75  seq_edit_get_info */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
    if (lVar1 == 0) {
      DAT_180039110 = 0xfffffbad;
      return lVar1;
    }
    return lVar1 + 8;
  }
  DAT_180039110 = 0xffffff9b;
  return 0;
}

/* Function: seq_edit_get_tempo */
undefined8 seq_edit_get_tempo(int param_1,int param_2)

{
  longlong lVar1;
  
                    /* 0xab90  78  seq_edit_get_tempo */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0;
  }
  lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
  if (lVar1 == 0) {
    DAT_180039110 = 0xfffffbad;
    return 0;
  }
  if ((-1 < param_2) &&
     (param_2 < (int)(*(longlong *)(lVar1 + 0x50) - *(longlong *)(lVar1 + 0x48) >> 3))) {
    return *(undefined8 *)(*(longlong *)(lVar1 + 0x48) + (longlong)param_2 * 8);
  }
  DAT_180039110 = 0xfffffbb1;
  return 0;
}

/* Function: seq_edit_get_object */
undefined8 seq_edit_get_object(int param_1,int param_2)

{
  longlong lVar1;
  
                    /* 0xac00  77  seq_edit_get_object */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0;
  }
  lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
  if (lVar1 == 0) {
    DAT_180039110 = 0xfffffbad;
    return 0;
  }
  if ((-1 < param_2) &&
     (param_2 < (int)(*(longlong *)(lVar1 + 0x68) - *(longlong *)(lVar1 + 0x60) >> 3))) {
    return *(undefined8 *)(*(longlong *)(lVar1 + 0x60) + (longlong)param_2 * 8);
  }
  DAT_180039110 = 0xfffffbb1;
  return 0;
}

/* Function: seq_edit_get_channel */
longlong seq_edit_get_channel(int param_1,int param_2)

{
  longlong lVar1;
  
                    /* 0xac70  73  seq_edit_get_channel */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0;
  }
  lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
  if (lVar1 == 0) {
    DAT_180039110 = 0xfffffbad;
    return 0;
  }
  if ((-1 < param_2) &&
     (param_2 < (int)(*(longlong *)(lVar1 + 0x80) - *(longlong *)(lVar1 + 0x78) >> 3))) {
    return *(longlong *)(*(longlong *)(lVar1 + 0x78) + (longlong)param_2 * 8) + 4;
  }
  DAT_180039110 = 0xfffffbb1;
  return 0;
}

/* Function: seq_edit_get_event */
undefined8 seq_edit_get_event(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
                    /* 0xacf0  74  seq_edit_get_event */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0;
  }
  lVar2 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
  if (lVar2 == 0) {
    DAT_180039110 = 0xfffffbad;
    return 0;
  }
  if (-1 < param_3) {
    iVar3 = 0;
    if ((-1 < param_2) &&
       (param_2 < (int)(*(longlong *)(lVar2 + 0x80) - *(longlong *)(lVar2 + 0x78) >> 3))) {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x78) + (longlong)param_2 * 8);
      iVar3 = (int)(*(longlong *)(lVar1 + 0x18) - *(longlong *)(lVar1 + 0x10) >> 3);
    }
    if (param_3 < iVar3) {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x78) + (longlong)param_2 * 8);
      if (param_3 < (int)(*(longlong *)(lVar2 + 0x18) - *(longlong *)(lVar2 + 0x10) >> 3)) {
        return *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + (longlong)param_3 * 8);
      }
      DAT_180039110 = 0xfffffbb1;
      return 0;
    }
  }
  DAT_180039110 = 0xfffffbb1;
  return 0;
}

/* Function: seq_edit_pick_tempo */
undefined8 seq_edit_pick_tempo(int param_1,int param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
                    /* 0xad40  110  seq_edit_pick_tempo */
  if ((DAT_1800390b0 == '\0') || (DAT_180039118 == '\0')) {
    DAT_180039110 = 0xffffff9b;
    return 0;
  }
  lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
  if (lVar1 == 0) {
    DAT_180039110 = 0xfffffbad;
    return 0;
  }
  if (param_3 == '\0') {
    uVar3 = FUN_18000c9e0(lVar1,param_2);
    iVar2 = (int)uVar3;
  }
  else {
    uVar3 = FUN_18000cb00(lVar1,param_2);
    iVar2 = (int)uVar3;
  }
  if (-1 < iVar2) {
    if ((int)(*(longlong *)(lVar1 + 0x50) - *(longlong *)(lVar1 + 0x48) >> 3) <= iVar2) {
      DAT_180039110 = 0xfffffbb1;
      return 0;
    }
    return *(undefined8 *)(*(longlong *)(lVar1 + 0x48) + (longlong)iVar2 * 8);
  }
  DAT_180039110 = 0xfffffbb0;
  return 0;
}

/* Function: seq_edit_pick_event */
undefined8 seq_edit_pick_event(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
                    /* 0xae00  108  seq_edit_pick_event */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
    if (lVar1 == 0) {
      DAT_180039110 = 0xfffffbad;
      return 0;
    }
    uVar2 = FUN_18000d850(lVar1,param_2,param_3,param_3);
    return uVar2;
  }
  DAT_180039110 = 0xffffff9b;
  return 0;
}

/* Function: seq_edit_pick_event_by_range */
undefined8 seq_edit_pick_event_by_range(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
                    /* 0xae50  109  seq_edit_pick_event_by_range */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
    if (lVar1 == 0) {
      DAT_180039110 = 0xfffffbad;
      return 0;
    }
    uVar2 = FUN_18000d850(lVar1,param_2,param_3,param_4);
    return uVar2;
  }
  DAT_180039110 = 0xffffff9b;
  return 0;
}

/* Function: seq_edit_search_tempo */
ulonglong seq_edit_search_tempo(int param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
                    /* 0xaea0  111  seq_edit_search_tempo */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
    if (lVar1 == 0) {
      DAT_180039110 = 0xfffffbad;
      return 0xfffffbad;
    }
    uVar2 = FUN_18000c9e0(lVar1,param_2);
    return uVar2;
  }
  DAT_180039110 = 0xffffff9b;
  return 0xffffff9b;
}

/* Function: seq_edit_is_know_last_event */
ulonglong seq_edit_is_know_last_event(int param_1)

{
  longlong lVar1;
  ulonglong in_RAX;
  
                    /* 0xaef0  79  seq_edit_is_know_last_event */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
    if (lVar1 == 0) {
      DAT_180039110 = 0xfffffbad;
      return DAT_180039128 & 0xffffffffffffff00;
    }
    return (ulonglong)(*(longlong *)(lVar1 + 0x90) != 0);
  }
  DAT_180039110 = 0xffffff9b;
  return in_RAX & 0xffffffffffffff00;
}

/* Function: seq_edit_get_last_event */
longlong seq_edit_get_last_event(int param_1)

{
  longlong lVar1;
  
                    /* 0xaf40  76  seq_edit_get_last_event */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
    if (lVar1 == 0) {
      DAT_180039110 = 0xfffffbad;
      return lVar1;
    }
    return *(longlong *)(lVar1 + 0x90);
  }
  DAT_180039110 = 0xffffff9b;
  return 0;
}

/* Function: seq_edit_find_last_event */
int * seq_edit_find_last_event(int param_1)

{
  longlong lVar1;
  int *piVar2;
  
                    /* 0xaf90  72  seq_edit_find_last_event */
  if ((DAT_1800390b0 != '\0') && (DAT_180039118 != '\0')) {
    lVar1 = *(longlong *)(DAT_180039128 + (longlong)param_1 * 8);
    if (lVar1 == 0) {
      DAT_180039110 = 0xfffffbad;
      return (int *)0x0;
    }
    piVar2 = FUN_18000e240(lVar1);
    return piVar2;
  }
  DAT_180039110 = 0xffffff9b;
  return (int *)0x0;
}

/* Function: FUN_18000afe0 */
ulonglong FUN_18000afe0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int **ppiVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 0x18)) {
    return 0xffffffffffffffff;
  }
  if ((~*(byte *)(param_1 + 0x30) & 1) != 0) {
    if ((DAT_180039140 & 1) == 0) {
      DAT_180039140 = DAT_180039140 | 1;
      DAT_180039148 = FUN_18000b170;
    }
    pcVar4 = DAT_180039148;
    ppiVar2 = *(int ***)(param_1 + 0x10);
    lVar6 = *(longlong *)(param_1 + 0x18) - (longlong)ppiVar2 >> 3;
    while (lVar3 = lVar6, 0 < lVar3) {
      lVar6 = lVar3 / 2;
      cVar5 = (*pcVar4)(ppiVar2[lVar6],param_2);
      if (cVar5 != '\0') {
        ppiVar2 = ppiVar2 + lVar6 + 1;
        lVar6 = lVar3 + (-1 - lVar6);
      }
    }
    if (((ppiVar2 != *(int ***)(param_1 + 0x18)) && (param_2 <= **ppiVar2)) &&
       (**ppiVar2 <= param_3)) {
      return (longlong)ppiVar2 - *(longlong *)(param_1 + 0x10) >> 3 & 0xffffffff;
    }
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x10) != *(longlong *)(param_1 + 0x18)) {
    uVar8 = 0;
    uVar9 = (uint)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3);
    if (uVar9 != 0) {
      do {
        iVar1 = **(int **)(*(longlong *)(param_1 + 0x10) + uVar8 * 8);
        if ((param_2 <= iVar1) && (iVar1 <= param_3)) {
          return uVar8;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < uVar9);
    }
  }
  return 0xffffffff;
}

/* Function: FUN_18000b170 */
bool FUN_18000b170(int *param_1,int param_2)

{
  return *param_1 < param_2;
}

/* Function: FUN_18000b180 */
bool FUN_18000b180(int *param_1,int *param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int *piVar7;
  int *local_res10;
  
  uVar6 = FUN_18000afe0((longlong)param_1,*param_2,*param_2);
  iVar5 = (int)uVar6;
  if (iVar5 == -1) {
    piVar7 = (int *)malloc(0x18);
    iVar5 = param_2[1];
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    *piVar7 = *param_2;
    piVar7[1] = iVar5;
    piVar7[2] = iVar3;
    piVar7[3] = iVar4;
    *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(param_2 + 4);
    piVar7[2] = *param_1;
    ppiVar1 = *(int ***)(param_1 + 6);
    local_res10 = piVar7;
    if ((&local_res10 < ppiVar1) && (ppiVar2 = *(int ***)(param_1 + 4), ppiVar2 <= &local_res10)) {
      if (ppiVar1 == *(int ***)(param_1 + 8)) {
        FUN_18000b5e0((void **)(param_1 + 4));
      }
      if (*(undefined8 **)(param_1 + 6) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 6) =
             *(undefined8 *)
              (*(longlong *)(param_1 + 4) + ((longlong)&local_res10 - (longlong)ppiVar2 >> 3) * 8);
      }
    }
    else {
      if (ppiVar1 == *(int ***)(param_1 + 8)) {
        FUN_18000b5e0((void **)(param_1 + 4));
      }
      if (*(int ***)(param_1 + 6) != (int **)0x0) {
        **(int ***)(param_1 + 6) = piVar7;
      }
    }
    *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + 8;
    param_1[0xc] = param_1[0xc] | 1;
    return true;
  }
  if ((-1 < iVar5) && (iVar5 < (int)(*(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4) >> 3)))
  {
    piVar7 = *(int **)(*(longlong *)(param_1 + 4) + (longlong)iVar5 * 8);
    if (piVar7 != param_2) {
      iVar5 = param_2[1];
      iVar3 = param_2[2];
      iVar4 = param_2[3];
      *piVar7 = *param_2;
      piVar7[1] = iVar5;
      piVar7[2] = iVar3;
      piVar7[3] = iVar4;
      *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(param_2 + 4);
      if (*piVar7 != *param_2) {
        param_1[0xc] = param_1[0xc] | 1;
      }
    }
    piVar7[2] = *param_1;
    return piVar7 != param_2;
  }
  DAT_180039110 = 0xfffffbb1;
  return false;
}

/* Function: FUN_18000b2c0 */
ulonglong FUN_18000b2c0(int *param_1,int param_2,int *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong in_RAX;
  
  if ((-1 < param_2) &&
     (in_RAX = *(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4) >> 3, param_2 < (int)in_RAX))
  {
    uVar1 = *(ulonglong *)(param_1 + 4);
    piVar2 = *(int **)(uVar1 + (longlong)param_2 * 8);
    if (piVar2 != param_3) {
      iVar3 = param_3[1];
      iVar4 = param_3[2];
      iVar5 = param_3[3];
      *piVar2 = *param_3;
      piVar2[1] = iVar3;
      piVar2[2] = iVar4;
      piVar2[3] = iVar5;
      *(undefined8 *)(piVar2 + 4) = *(undefined8 *)(param_3 + 4);
      if (*piVar2 != *param_3) {
        param_1[0xc] = param_1[0xc] | 1;
      }
    }
    piVar2[2] = *param_1;
    return uVar1 & 0xffffffffffffff00 | (ulonglong)(piVar2 != param_3);
  }
  DAT_180039110 = 0xfffffbb1;
  return in_RAX & 0xffffffffffffff00;
}

/* Function: FUN_18000b320 */
undefined8 FUN_18000b320(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  ulonglong in_RAX;
  undefined8 *puVar2;
  
  if ((-1 < param_2) &&
     (in_RAX = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3,
     param_2 < (int)in_RAX)) {
    free(*(void **)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x10)));
    puVar1 = (undefined8 *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x10));
    puVar2 = puVar1 + 1;
    puVar2 = FUN_18000f860(puVar1,puVar2,
                           *(longlong *)(param_1 + 0x18) - (longlong)puVar2 & 0xfffffffffffffff8);
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -8;
    return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
  }
  DAT_180039110 = 0xfffffbb1;
  return in_RAX & 0xffffffffffffff00;
}

/* Function: FUN_18000b3a0 */
ulonglong FUN_18000b3a0(int *param_1,int param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  int **ppiVar5;
  int **ppiVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong in_RAX;
  ulonglong uVar10;
  bool bVar11;
  int *local_res20;
  
  if ((param_2 < 0) ||
     (in_RAX = *(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4) >> 3, (int)in_RAX <= param_2)
     ) {
    DAT_180039110 = 0xfffffbb1;
  }
  else if (param_3 != param_1) {
    piVar3 = *(int **)((longlong)param_2 * 8 + *(longlong *)(param_1 + 4));
    bVar11 = true;
    local_res20 = piVar3;
    uVar10 = FUN_18000afe0((longlong)param_3,*piVar3,*piVar3);
    iVar9 = (int)uVar10;
    if (iVar9 == -1) {
      piVar3[2] = *param_3;
      ppiVar5 = *(int ***)(param_3 + 6);
      if ((&local_res20 < ppiVar5) && (ppiVar6 = *(int ***)(param_3 + 4), ppiVar6 <= &local_res20))
      {
        if (ppiVar5 == *(int ***)(param_3 + 8)) {
          FUN_18000b5e0((void **)(param_3 + 4));
        }
        if (*(undefined8 **)(param_3 + 6) != (undefined8 *)0x0) {
          **(undefined8 **)(param_3 + 6) =
               *(undefined8 *)
                (*(longlong *)(param_3 + 4) + ((longlong)&local_res20 - (longlong)ppiVar6 >> 3) * 8)
          ;
        }
      }
      else {
        if (ppiVar5 == *(int ***)(param_3 + 8)) {
          FUN_18000b5e0((void **)(param_3 + 4));
        }
        if (*(int ***)(param_3 + 6) != (int **)0x0) {
          **(int ***)(param_3 + 6) = piVar3;
        }
      }
      *(longlong *)(param_3 + 6) = *(longlong *)(param_3 + 6) + 8;
      param_3[0xc] = param_3[0xc] | 1;
    }
    else if ((iVar9 < 0) ||
            ((int)(*(longlong *)(param_3 + 6) - *(longlong *)(param_3 + 4) >> 3) <= iVar9)) {
      DAT_180039110 = 0xfffffbb1;
      bVar11 = false;
    }
    else {
      piVar4 = *(int **)(*(longlong *)(param_3 + 4) + (longlong)iVar9 * 8);
      bVar11 = piVar4 != piVar3;
      if (bVar11) {
        iVar9 = piVar3[1];
        iVar7 = piVar3[2];
        iVar8 = piVar3[3];
        *piVar4 = *piVar3;
        piVar4[1] = iVar9;
        piVar4[2] = iVar7;
        piVar4[3] = iVar8;
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(piVar3 + 4);
        if (*piVar4 != *piVar3) {
          param_3[0xc] = param_3[0xc] | 1;
        }
      }
      piVar4[2] = *param_3;
    }
    puVar2 = (undefined8 *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 4));
    puVar1 = puVar2 + 1;
    FUN_18000f860(puVar2,puVar1,*(longlong *)(param_1 + 6) - (longlong)puVar1 & 0xfffffffffffffff8);
    *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + -8;
    return (ulonglong)bVar11;
  }
  return in_RAX & 0xffffffffffffff00;
}

/* Function: FUN_18000b540 */
ulonglong FUN_18000b540(longlong param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  ppvVar1 = *(void ***)(param_1 + 0x18);
  if (*(void ***)(param_1 + 0x10) != ppvVar1) {
    ppvVar2 = *(void ***)(param_1 + 0x10);
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)ppvVar1 + (7 - (longlong)ppvVar2)) >> 3;
    if (ppvVar1 < ppvVar2) {
      uVar3 = uVar4;
    }
    if (uVar3 != 0) {
      do {
        free(*ppvVar2);
        uVar4 = uVar4 + 1;
        ppvVar2 = ppvVar2 + 1;
      } while (uVar4 != uVar3);
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
    return CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 8),1);
  }
  return (ulonglong)ppvVar1 & 0xffffffffffffff00;
}

/* Function: FUN_18000b5e0 */
void FUN_18000b5e0(void **param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((longlong)param_1[2] - (longlong)param_1[1] >> 3 != 0) {
    return;
  }
  lVar3 = (longlong)param_1[1] - (longlong)*param_1 >> 3;
  if (lVar3 != 0x1fffffffffffffff) {
    uVar4 = lVar3 + 1;
    uVar2 = (longlong)param_1[2] - (longlong)*param_1 >> 3;
    if (0x1fffffffffffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar4;
      }
      FUN_18000b670(param_1,uVar2);
      return;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar4) {
      uVar2 = uVar4;
    }
    FUN_18000b670(param_1,uVar2);
    return;
  }
  FUN_1800227f4("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

/* Function: FUN_18000b670 */
void FUN_18000b670(void **param_1,ulonglong param_2)

{
  void *_Memory;
  void *pvVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x0;
  if (param_2 != 0) {
    if (param_2 < 0x2000000000000000) {
      puVar3 = (undefined8 *)FUN_180010bb8(param_2 * 8);
      if (puVar3 != (undefined8 *)0x0) goto LAB_18000b6b0;
    }
    FUN_1800227b0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_18000b6b0:
  FUN_18000f860(puVar3,(undefined8 *)*param_1,
                (longlong)param_1[1] - (longlong)*param_1 & 0xfffffffffffffff8);
  _Memory = *param_1;
  pvVar1 = param_1[1];
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *param_1 = puVar3;
  param_1[2] = puVar3 + param_2;
  param_1[1] = puVar3 + ((longlong)pvVar1 - (longlong)_Memory >> 3);
  return;
}

/* Function: FUN_18000b720 */
void FUN_18000b720(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined *param_4)

{
  longlong lVar1;
  undefined8 *local_18;
  undefined8 *local_10;
  
  lVar1 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar1 = lVar1 >> 3;
    if (lVar1 < 0x21) {
LAB_18000b7e5:
      if (1 < lVar1) {
        FUN_18000bda0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar1) {
        if (8 < (longlong)((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
          FUN_18000bb20((longlong)param_1,(longlong)param_2,param_4);
        }
        FUN_18000bc50(param_1,(longlong)param_2,param_4);
        return;
      }
      goto LAB_18000b7e5;
    }
    FUN_18000b850(&local_18,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) <
        (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_18000b720(param_1,local_18,param_3,param_4);
      param_1 = local_10;
    }
    else {
      FUN_18000b720(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar1 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}

/* Function: FUN_18000b850 */
void FUN_18000b850(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar6 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 3) -
                      ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  FUN_18000ba40(param_2,puVar6,param_3 + -1,param_4);
  puVar2 = puVar6;
  while (puVar8 = puVar2, param_2 < puVar8) {
    puVar2 = puVar8 + -1;
    cVar3 = (*(code *)param_4)(puVar2,puVar8);
    if ((cVar3 != '\0') || (cVar3 = (*(code *)param_4)(puVar8,puVar2), cVar3 != '\0')) break;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar2 = puVar6;
    puVar4 = puVar8;
    if (param_3 <= puVar6) break;
    cVar3 = (*(code *)param_4)(puVar6,puVar8);
    if ((cVar3 != '\0') || (cVar3 = (*(code *)param_4)(puVar8,puVar6), cVar3 != '\0')) break;
  } while( true );
joined_r0x00018000b90a:
  puVar7 = puVar8;
  if (param_3 <= puVar2) {
joined_r0x00018000b94e:
    for (; param_2 < puVar8; puVar8 = puVar8 + -1) {
      puVar7 = puVar7 + -1;
      cVar3 = (*(code *)param_4)(puVar7,puVar4);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)param_4)(puVar4,puVar7);
        if (cVar3 != '\0') break;
        puVar4 = puVar4 + -1;
        if (puVar4 != puVar7) {
          uVar1 = *puVar4;
          *puVar4 = *puVar7;
          *puVar7 = uVar1;
        }
      }
    }
    if (puVar8 == param_2) {
      if (puVar2 == param_3) {
        *param_1 = puVar4;
        param_1[1] = puVar6;
        return;
      }
      if (puVar6 != puVar2) {
        uVar1 = *puVar4;
        *puVar4 = *puVar6;
        *puVar6 = uVar1;
      }
      puVar6 = puVar6 + 1;
      uVar1 = *puVar4;
      *puVar4 = *puVar2;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    else {
      puVar8 = puVar8 + -1;
      if (puVar2 == param_3) {
        puVar4 = puVar4 + -1;
        if (puVar8 != puVar4) {
          uVar1 = *puVar8;
          *puVar8 = *puVar4;
          *puVar4 = uVar1;
        }
        puVar7 = puVar6 + -1;
        uVar1 = *puVar4;
        puVar6 = puVar6 + -1;
        *puVar4 = *puVar7;
        *puVar6 = uVar1;
      }
      else {
        uVar1 = *puVar2;
        *puVar2 = *puVar8;
        *puVar8 = uVar1;
        puVar2 = puVar2 + 1;
      }
    }
    goto joined_r0x00018000b90a;
  }
  cVar3 = (*(code *)param_4)(puVar4,puVar2);
  puVar5 = puVar6;
  if (cVar3 == '\0') {
    cVar3 = (*(code *)param_4)(puVar2,puVar4);
    if (cVar3 != '\0') goto joined_r0x00018000b94e;
    puVar5 = puVar6 + 1;
    if (puVar6 != puVar2) {
      uVar1 = *puVar6;
      *puVar6 = *puVar2;
      *puVar2 = uVar1;
    }
  }
  puVar6 = puVar5;
  puVar2 = puVar2 + 1;
  goto joined_r0x00018000b90a;
}

/* Function: FUN_18000ba40 */
void FUN_18000ba40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_18000beb0(param_1,param_1 + lVar1,param_1 + lVar1 * 2,param_4);
    FUN_18000beb0(param_2 + -lVar1,param_2,param_2 + lVar1,param_4);
    FUN_18000beb0(param_3 + lVar1 * -2,param_3 + -lVar1,param_3,param_4);
    FUN_18000beb0(param_1 + lVar1,param_2,param_3 + -lVar1,param_4);
    return;
  }
  FUN_18000beb0(param_1,param_2,param_3,param_4);
  return;
}

/* Function: FUN_18000bb20 */
void FUN_18000bb20(longlong param_1,longlong param_2,undefined *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_res20;
  
  lVar8 = param_2 - param_1 >> 3;
  lVar5 = lVar8 - (param_2 - param_1 >> 0x3f) >> 1;
  if (0 < lVar5) {
    lVar7 = lVar5 * 2 + 2;
    do {
      local_res20 = *(undefined8 *)(param_1 + -8 + lVar5 * 8);
      lVar5 = lVar5 + -1;
      lVar7 = lVar7 + -2;
      lVar1 = lVar5;
      for (lVar6 = lVar7; lVar6 < lVar8; lVar6 = lVar6 * 2 + 2) {
        lVar2 = param_1 + lVar6 * 8;
        cVar4 = (*(code *)param_3)(lVar2,lVar2 + -8);
        if (cVar4 != '\0') {
          lVar6 = lVar6 + -1;
        }
        *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + lVar6 * 8);
        lVar1 = lVar6;
      }
      if (lVar6 == lVar8) {
        *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + -8 + lVar8 * 8);
        lVar1 = lVar8 + -1;
      }
      while (lVar5 < lVar1) {
        lVar6 = (lVar1 + -1) / 2;
        puVar3 = (undefined8 *)(param_1 + lVar6 * 8);
        cVar4 = (*(code *)param_3)(puVar3,&local_res20);
        if (cVar4 == '\0') break;
        *(undefined8 *)(param_1 + lVar1 * 8) = *puVar3;
        lVar1 = lVar6;
      }
      *(undefined8 *)(param_1 + lVar1 * 8) = local_res20;
    } while (0 < lVar5);
  }
  return;
}

/* Function: FUN_18000bc50 */
void FUN_18000bc50(undefined8 *param_1,longlong param_2,undefined *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 local_res8;
  longlong local_res10;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    local_res10 = -(longlong)param_1;
    puVar6 = (undefined8 *)(param_2 + -8);
    do {
      local_res8 = *puVar6;
      lVar2 = 2;
      lVar4 = local_res10 + (longlong)puVar6 >> 3;
      lVar3 = 0;
      *puVar6 = *param_1;
      bVar7 = lVar4 == 2;
      lVar5 = lVar3;
      if (2 < lVar4) {
        do {
          cVar1 = (*(code *)param_3)(param_1 + lVar2,param_1 + lVar2 + -1);
          lVar3 = lVar2;
          if (cVar1 != '\0') {
            lVar3 = lVar2 + -1;
          }
          param_1[lVar5] = param_1[lVar3];
          lVar2 = lVar3 * 2 + 2;
          bVar7 = lVar2 == lVar4;
          lVar5 = lVar3;
        } while (lVar2 < lVar4);
      }
      if (bVar7) {
        param_1[lVar3] = param_1[lVar4 + -1];
        lVar3 = lVar4 + -1;
      }
      while (0 < lVar3) {
        lVar2 = (lVar3 + -1) / 2;
        cVar1 = (*(code *)param_3)(param_1 + lVar2,&local_res8);
        if (cVar1 == '\0') break;
        param_1[lVar3] = param_1[lVar2];
        lVar3 = lVar2;
      }
      puVar6 = puVar6 + -1;
      param_1[lVar3] = local_res8;
    } while (8 < (longlong)((longlong)puVar6 + (8 - (longlong)param_1) & 0xfffffffffffffff8U));
  }
  return;
}

/* Function: FUN_18000bda0 */
void FUN_18000bda0(undefined8 *param_1,undefined8 *param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_res20;
  
  if (param_1 != param_2) {
    puVar6 = param_1;
    for (puVar5 = param_1 + 1; puVar5 != param_2; puVar5 = puVar5 + 1) {
      local_res20 = *puVar5;
      cVar3 = (*(code *)param_3)(&local_res20,param_1);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)param_3)(&local_res20,puVar6);
        puVar1 = puVar5;
        puVar2 = puVar6;
        while (cVar3 != '\0') {
          *puVar1 = *puVar2;
          cVar3 = (*(code *)param_3)(&local_res20,puVar2 + -1);
          puVar1 = puVar2;
          puVar2 = puVar2 + -1;
        }
        *puVar1 = local_res20;
      }
      else {
        lVar4 = (longlong)puVar5 - (longlong)param_1 >> 3;
        FUN_18000f860(puVar5 + (1 - lVar4),param_1,lVar4 * 8);
        *param_1 = local_res20;
      }
      puVar6 = puVar6 + 1;
    }
  }
  return;
}

/* Function: FUN_18000beb0 */
void FUN_18000beb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = (*(code *)param_4)(param_2,param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  cVar2 = (*(code *)param_4)(param_3,param_2);
  if (cVar2 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
    cVar2 = (*(code *)param_4)(param_2,param_1);
    if (cVar2 != '\0') {
      uVar1 = *param_2;
      *param_2 = *param_1;
      *param_1 = uVar1;
    }
  }
  return;
}

/* Function: FUN_18000bf30 */
undefined4 * FUN_18000bf30(undefined4 *param_1,undefined4 param_2)

{
  void **ppvVar1;
  
  ppvVar1 = (void **)(param_1 + 0x12);
  *ppvVar1 = (void *)0x0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  param_1[0x27] = 0;
  *param_1 = param_2;
  *(undefined *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((ulonglong)(*(longlong *)(param_1 + 0x16) - (longlong)*ppvVar1 >> 3) < 0x20) {
    FUN_18000b670(ppvVar1,0x20);
  }
  if ((ulonglong)(*(longlong *)(param_1 + 0x1c) - *(longlong *)(param_1 + 0x18) >> 3) < 0x100) {
    FUN_18000b670((void **)(param_1 + 0x18),0x100);
  }
  if ((ulonglong)(*(longlong *)(param_1 + 0x22) - *(longlong *)(param_1 + 0x1e) >> 3) < 0x20) {
    FUN_18000b670((void **)(param_1 + 0x1e),0x20);
  }
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[2] = 0xca;
  return param_1;
}

/* Function: FUN_18000c040 */
void FUN_18000c040(longlong param_1)

{
  if (*(char *)(param_1 + 0x98) != '\0') {
    *(undefined8 *)(param_1 + 0x90) = 0;
    FUN_18000d5c0(param_1);
    FUN_18000d290(param_1);
    FUN_18000cf30(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 8) = 0xca;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined *)(param_1 + 0x98) = 0;
  }
  if (*(void **)(param_1 + 0x78) != (void *)0x0) {
    free(*(void **)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    free(*(void **)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    free(*(void **)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}

/* Function: FUN_18000c110 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000c110(undefined8 param_1,undefined8 param_2,double param_3,longlong param_4,int param_5
                  ,undefined8 param_6,int param_7)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_88;
  int local_84;
  undefined4 local_80;
  float local_7c;
  double local_78;
  int local_70;
  double local_68;
  double local_60;
  int local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  undefined4 local_20;
  int local_1c;
  
  if (*(longlong *)(param_4 + 0x48) == *(longlong *)(param_4 + 0x50)) {
    local_50 = param_3 / _DAT_18002e7d0;
    local_30 = (double)param_7;
    local_68 = DAT_18002e7b8 / local_30;
    local_60 = *(double *)(param_4 + 0x20) / local_30;
    local_40 = (double)*(int *)(param_4 + 0x18) * local_50;
    local_38 = DAT_18002e7b8 / local_40;
    uVar2 = SUB84(local_38,0);
    uVar3 = (undefined4)((ulonglong)local_38 >> 0x20);
    local_58 = (int)(DAT_18002e7b8 / local_60 + _DAT_18002e7b0);
    local_48 = DAT_18002e7b8 / local_50;
    local_30 = local_50 / local_30;
    local_20 = 0;
    local_28 = DAT_18002e7b8 / local_30;
    local_78 = param_3;
    local_70 = param_7;
    fVar1 = FUN_180024a0c((float)param_5 / (float)local_58);
    local_88 = 0;
    local_1c = (int)fVar1;
    local_80 = 0;
    local_7c = (float)(int)((float)((double)param_5 * (double)CONCAT44(uVar3,uVar2)) * DAT_18002e7fc
                            + 0.0 + DAT_18002e794) * DAT_18002e78c;
    local_84 = param_5;
    FUN_18000cc60(param_4,&local_88);
  }
  return;
}

/* Function: FUN_18000c280 */
void FUN_18000c280(longlong param_1,int param_2,ulonglong param_3,undefined8 param_4,int param_5,
                  undefined4 param_6)

{
  ulonglong uVar1;
  undefined8 extraout_XMM0_Qa;
  double dVar2;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM3_Db;
  
  uVar1 = param_3 & 0xffffffff;
  if (*(char *)(param_1 + 0x98) != '\0') {
    *(undefined8 *)(param_1 + 0x90) = 0;
    FUN_18000d5c0(param_1);
    FUN_18000d290(param_1);
    FUN_18000cf30(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 8) = 0xca;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined *)(param_1 + 0x98) = 0;
  }
  dVar2 = DAT_18002e7b8;
  *(int *)(param_1 + 0x18) = param_2;
  dVar2 = dVar2 / (double)param_2;
  *(double *)(param_1 + 0x20) = dVar2;
  *(int *)(param_1 + 0xc) = (int)uVar1;
  *(undefined4 *)(param_1 + 0x40) = param_6;
  FUN_18000c110((double)param_2,dVar2,(double)CONCAT44(in_XMM3_Db,in_XMM3_Da),param_1,(int)uVar1,
                param_3,param_5);
  FUN_18000dda0(extraout_XMM0_Qa,dVar2,param_1,uVar1,param_3);
  FUN_18000df80(param_1);
  FUN_18000e0e0(param_1);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined *)(param_1 + 0x98) = 1;
  return;
}

/* Function: FUN_18000c380 */
void FUN_18000c380(undefined8 param_1,longlong param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (*(char *)(param_2 + 0x98) != '\0') {
    *(undefined8 *)(param_2 + 0x90) = 0;
    FUN_18000d5c0(param_2);
    FUN_18000d290(param_2);
    FUN_18000cf30(param_2);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_2 + 8) = 0xca;
    *(undefined4 *)(param_2 + 0x9c) = 0;
    *(undefined *)(param_2 + 0x98) = 0;
    param_1 = extraout_XMM0_Qa;
  }
  uVar10 = param_3[1];
  uVar11 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_2 + 8) = *param_3;
  *(undefined4 *)(param_2 + 0xc) = uVar10;
  *(undefined4 *)(param_2 + 0x10) = uVar11;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  uVar10 = param_3[5];
  uVar11 = param_3[6];
  uVar3 = param_3[7];
  *(undefined4 *)(param_2 + 0x18) = param_3[4];
  *(undefined4 *)(param_2 + 0x1c) = uVar10;
  *(undefined4 *)(param_2 + 0x20) = uVar11;
  *(undefined4 *)(param_2 + 0x24) = uVar3;
  uVar10 = param_3[9];
  uVar11 = param_3[10];
  uVar3 = param_3[0xb];
  *(undefined4 *)(param_2 + 0x28) = param_3[8];
  *(undefined4 *)(param_2 + 0x2c) = uVar10;
  *(undefined4 *)(param_2 + 0x30) = uVar11;
  *(undefined4 *)(param_2 + 0x34) = uVar3;
  uVar10 = param_3[0xc];
  uVar11 = param_3[0xd];
  uVar3 = param_3[0xe];
  uVar4 = param_3[0xf];
  *(undefined4 *)(param_2 + 0x38) = uVar10;
  *(undefined4 *)(param_2 + 0x3c) = uVar11;
  *(undefined4 *)(param_2 + 0x40) = uVar3;
  *(undefined4 *)(param_2 + 0x44) = uVar4;
  uVar5 = (ulonglong)*(int *)(param_2 + 0x28);
  if ((ulonglong)(*(longlong *)(param_2 + 0x58) - (longlong)*(void **)(param_2 + 0x48) >> 3) < uVar5
     ) {
    if (0x1fffffffffffffff < uVar5) {
      FUN_1800227f4("vector<T> too long");
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_1 = FUN_18000b670((void **)(param_2 + 0x48),uVar5);
  }
  if (0 < (int)*(uint *)(param_2 + 0x28)) {
    lVar9 = 0;
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x28);
    do {
      FUN_18000cc60(param_2,(int *)(*(longlong *)(param_3 + 0x10) + lVar9));
      lVar9 = lVar9 + 0x70;
      uVar5 = uVar5 - 1;
      param_1 = extraout_XMM0_Qa_00;
    } while (uVar5 != 0);
  }
  uVar5 = (ulonglong)*(int *)(param_2 + 0x2c);
  if ((ulonglong)(*(longlong *)(param_2 + 0x70) - (longlong)*(void **)(param_2 + 0x60) >> 3) < uVar5
     ) {
    if (0x1fffffffffffffff < uVar5) {
      FUN_1800227f4("vector<T> too long");
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_1 = FUN_18000b670((void **)(param_2 + 0x60),uVar5);
  }
  if (0 < (int)*(uint *)(param_2 + 0x2c)) {
    lVar9 = 0;
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x2c);
    do {
      FUN_18000cfc0(param_2,(undefined4 *)(*(longlong *)(param_3 + 0x12) + lVar9));
      lVar9 = lVar9 + 0x10;
      uVar5 = uVar5 - 1;
      param_1 = extraout_XMM0_Qa_01;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)(longlong)*(int *)(param_2 + 0x30);
  if ((undefined8 *)(*(longlong *)(param_2 + 0x88) - (longlong)*(void **)(param_2 + 0x78) >> 3) <
      puVar6) {
    if ((undefined8 *)0x1fffffffffffffff < puVar6) {
      FUN_1800227f4("vector<T> too long");
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_1 = FUN_18000b670((void **)(param_2 + 0x78),(ulonglong)puVar6);
  }
  if (0 < (int)*(uint *)(param_2 + 0x30)) {
    lVar9 = 0;
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x30);
    do {
      puVar6 = (undefined8 *)(*(longlong *)(param_3 + 0x14) + lVar9);
      FUN_18000d340(param_1,CONCAT44(uVar11,uVar10),param_2,puVar6,param_4);
      lVar9 = lVar9 + 8;
      uVar5 = uVar5 - 1;
      param_1 = extraout_XMM0_Qa_02;
    } while (uVar5 != 0);
  }
  lVar9 = (longlong)*(int *)(param_2 + 0x34);
  iVar8 = 0;
  if (0 < lVar9) {
    lVar7 = 0;
    do {
      param_4 = (int *)(*(longlong *)(param_3 + 0x16) + (longlong)iVar8 * 0x18);
      uVar1 = *(uint *)(*(longlong *)(param_3 + 0x16) + 8 + lVar7);
      puVar6 = (undefined8 *)(ulonglong)uVar1;
      param_1 = FUN_18000d8f0(param_2,uVar1,param_4);
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 0x18;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  FUN_18000dda0(param_1,CONCAT44(uVar11,uVar10),param_2,puVar6,param_4);
  FUN_18000df80(param_2);
  FUN_18000e0e0(param_2);
  *(undefined4 *)(param_2 + 0x9c) = 0;
  *(undefined *)(param_2 + 0x98) = 1;
  return;
}

/* Function: FUN_18000c7f0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18000c7f0(undefined8 param_1,double param_2,longlong param_3)

{
  ulonglong uVar1;
  int *piVar2;
  longlong lVar3;
  int **ppiVar4;
  int iVar5;
  
  if (0.0 <= param_2) {
    if (*(double *)(param_3 + 0x10) <= param_2) {
      return (ulonglong)*(uint *)(param_3 + 0xc);
    }
    uVar1 = *(ulonglong *)(param_3 + 0x50);
    if (*(ulonglong *)(param_3 + 0x48) == uVar1) {
      return uVar1 & 0xffffffff00000000 |
             (ulonglong)(uint)(int)((double)*(int *)(param_3 + 0x18) * _DAT_18002e7c8 * param_2);
    }
    iVar5 = (int)((longlong)(uVar1 - *(longlong *)(param_3 + 0x48)) >> 3);
    if (0 < iVar5) {
      ppiVar4 = *(int ***)(param_3 + 0x48);
      lVar3 = 0;
      do {
        piVar2 = *ppiVar4;
        if (((double)(float)piVar2[2] <= param_2) && (param_2 < (double)(float)piVar2[3])) {
          return (ulonglong)
                 (uint)((int)((param_2 - (double)(float)piVar2[2]) * *(double *)(piVar2 + 0x12)) +
                       *piVar2);
        }
        lVar3 = lVar3 + 1;
        ppiVar4 = ppiVar4 + 1;
      } while (lVar3 < iVar5);
    }
  }
  return 0;
}

/* Function: FUN_18000c9e0 */
ulonglong FUN_18000c9e0(longlong param_1,int param_2)

{
  int **ppiVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x48) == *(longlong *)(param_1 + 0x50)) {
    return 0xffffffff;
  }
  if ((DAT_180039164 & 1) == 0) {
    DAT_180039164 = DAT_180039164 | 1;
    DAT_180039170 = FUN_18000caf0;
  }
  pcVar3 = DAT_180039170;
  ppiVar1 = *(int ***)(param_1 + 0x48);
  lVar5 = *(longlong *)(param_1 + 0x50) - (longlong)ppiVar1 >> 3;
  while (lVar2 = lVar5, 0 < lVar2) {
    lVar5 = lVar2 / 2;
    cVar4 = (*pcVar3)();
    if (cVar4 != '\0') {
      ppiVar1 = ppiVar1 + lVar5 + 1;
      lVar5 = lVar2 + (-1 - lVar5);
    }
  }
  if ((ppiVar1 != *(int ***)(param_1 + 0x50)) && (**ppiVar1 == param_2)) {
    return (longlong)ppiVar1 - *(longlong *)(param_1 + 0x48) >> 3 & 0xffffffff;
  }
  return 0xffffffff;
}

/* Function: FUN_18000caf0 */
bool FUN_18000caf0(int *param_1,int *param_2)

{
  return *param_1 < *param_2;
}

/* Function: FUN_18000cb00 */
ulonglong FUN_18000cb00(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int local_res10 [2];
  
  if (*(longlong *)(param_1 + 0x48) == *(longlong *)(param_1 + 0x50)) {
    return 0xffffffff;
  }
  if ((~(byte)((uint)*(undefined4 *)(param_1 + 0x9c) >> 8) & 1) == 0) {
    uVar8 = 0;
    uVar9 = (uint)(*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3);
    if (uVar9 != 0) {
      do {
        piVar1 = *(int **)(*(longlong *)(param_1 + 0x48) + uVar8 * 8);
        if ((*piVar1 == param_2 || *piVar1 < param_2) && (param_2 < piVar1[1])) {
          return uVar8;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < uVar9);
    }
  }
  else {
    if ((DAT_180039180 & 1) == 0) {
      DAT_180039180 = DAT_180039180 | 1;
      DAT_180039188 = FUN_18000cc50;
    }
    pcVar4 = DAT_180039188;
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    lVar6 = *(longlong *)(param_1 + 0x50) - (longlong)puVar2 >> 3;
    local_res10[0] = param_2;
    while (lVar3 = lVar6, 0 < lVar3) {
      lVar6 = lVar3 / 2;
      cVar5 = (*pcVar4)(puVar2[lVar6],local_res10);
      if (cVar5 != '\0') {
        puVar2 = puVar2 + lVar6 + 1;
        lVar6 = lVar3 + (-1 - lVar6);
      }
    }
    if (puVar2 != *(undefined8 **)(param_1 + 0x50)) {
      return (longlong)puVar2 - *(longlong *)(param_1 + 0x48) >> 3 & 0xffffffff;
    }
  }
  return 0xffffffff;
}

/* Function: FUN_18000cc50 */
bool FUN_18000cc50(longlong param_1,int *param_2)

{
  return *(int *)(param_1 + 4) < *param_2;
}

/* Function: FUN_18000cc60 */
ulonglong FUN_18000cc60(longlong param_1,int *param_2)

{
  void **ppvVar1;
  int **ppiVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int *piVar7;
  int **ppiVar8;
  int *local_res10;
  
  uVar6 = FUN_18000c9e0(param_1,*param_2);
  if ((int)uVar6 != -1) {
    uVar6 = FUN_18000cdb0(param_1,(int)uVar6,param_2);
    return uVar6;
  }
  piVar7 = (int *)malloc(0x70);
  iVar3 = param_2[1];
  iVar4 = param_2[2];
  iVar5 = param_2[3];
  *piVar7 = *param_2;
  piVar7[1] = iVar3;
  piVar7[2] = iVar4;
  piVar7[3] = iVar5;
  iVar3 = param_2[5];
  iVar4 = param_2[6];
  iVar5 = param_2[7];
  piVar7[4] = param_2[4];
  piVar7[5] = iVar3;
  piVar7[6] = iVar4;
  piVar7[7] = iVar5;
  iVar3 = param_2[9];
  iVar4 = param_2[10];
  iVar5 = param_2[0xb];
  piVar7[8] = param_2[8];
  piVar7[9] = iVar3;
  piVar7[10] = iVar4;
  piVar7[0xb] = iVar5;
  iVar3 = param_2[0xd];
  iVar4 = param_2[0xe];
  iVar5 = param_2[0xf];
  piVar7[0xc] = param_2[0xc];
  piVar7[0xd] = iVar3;
  piVar7[0xe] = iVar4;
  piVar7[0xf] = iVar5;
  iVar3 = param_2[0x11];
  iVar4 = param_2[0x12];
  iVar5 = param_2[0x13];
  piVar7[0x10] = param_2[0x10];
  piVar7[0x11] = iVar3;
  piVar7[0x12] = iVar4;
  piVar7[0x13] = iVar5;
  iVar3 = param_2[0x15];
  iVar4 = param_2[0x16];
  iVar5 = param_2[0x17];
  piVar7[0x14] = param_2[0x14];
  piVar7[0x15] = iVar3;
  piVar7[0x16] = iVar4;
  piVar7[0x17] = iVar5;
  iVar3 = param_2[0x19];
  iVar4 = param_2[0x1a];
  iVar5 = param_2[0x1b];
  ppvVar1 = (void **)(param_1 + 0x48);
  piVar7[0x18] = param_2[0x18];
  piVar7[0x19] = iVar3;
  piVar7[0x1a] = iVar4;
  piVar7[0x1b] = iVar5;
  local_res10 = piVar7;
  if (*ppvVar1 == *(void **)(param_1 + 0x50)) {
    if (0 < *piVar7) {
      FUN_1800029d0(param_1 + 8,piVar7,0,piVar7[1] - *piVar7,*(double *)(piVar7 + 4),piVar7[6]);
    }
  }
  else {
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x100;
  }
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x10;
  ppiVar8 = *(int ***)(param_1 + 0x50);
  if ((&local_res10 < ppiVar8) && (ppiVar2 = (int **)*ppvVar1, ppiVar2 <= &local_res10)) {
    if (ppiVar8 == *(int ***)(param_1 + 0x58)) {
      ppiVar8 = (int **)FUN_18000b5e0(ppvVar1);
    }
    if (*(int ***)(param_1 + 0x50) != (int **)0x0) {
      ppiVar8 = (int **)*ppvVar1;
      **(int ***)(param_1 + 0x50) = ppiVar8[(longlong)&local_res10 - (longlong)ppiVar2 >> 3];
    }
  }
  else {
    if (ppiVar8 == *(int ***)(param_1 + 0x58)) {
      FUN_18000b5e0(ppvVar1);
    }
    ppiVar8 = *(int ***)(param_1 + 0x50);
    if (ppiVar8 != (int **)0x0) {
      *ppiVar8 = piVar7;
    }
  }
  *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 8;
  return CONCAT71((int7)((ulonglong)ppiVar8 >> 8),1);
}

/* Function: FUN_18000cdb0 */
ulonglong FUN_18000cdb0(longlong param_1,int param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = FUN_18000c9e0(param_1,param_2);
  iVar5 = (int)uVar6;
  if ((-1 < iVar5) &&
     (iVar5 < (int)(*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3))) {
    piVar2 = *(int **)(*(longlong *)(param_1 + 0x48) + (longlong)iVar5 * 8);
    if (piVar2 != param_3) {
      uVar1 = *(uint *)(param_1 + 0x9c);
      *(uint *)(param_1 + 0x9c) = uVar1 | 0x140;
      if (*piVar2 != *param_3) {
        *(uint *)(param_1 + 0x9c) = uVar1 | 0x1c0;
      }
      iVar5 = param_3[1];
      iVar3 = param_3[2];
      iVar4 = param_3[3];
      *piVar2 = *param_3;
      piVar2[1] = iVar5;
      piVar2[2] = iVar3;
      piVar2[3] = iVar4;
      iVar5 = param_3[5];
      iVar3 = param_3[6];
      iVar4 = param_3[7];
      piVar2[4] = param_3[4];
      piVar2[5] = iVar5;
      piVar2[6] = iVar3;
      piVar2[7] = iVar4;
      iVar5 = param_3[9];
      iVar3 = param_3[10];
      iVar4 = param_3[0xb];
      piVar2[8] = param_3[8];
      piVar2[9] = iVar5;
      piVar2[10] = iVar3;
      piVar2[0xb] = iVar4;
      iVar5 = param_3[0xd];
      iVar3 = param_3[0xe];
      iVar4 = param_3[0xf];
      piVar2[0xc] = param_3[0xc];
      piVar2[0xd] = iVar5;
      piVar2[0xe] = iVar3;
      piVar2[0xf] = iVar4;
      iVar5 = param_3[0x11];
      iVar3 = param_3[0x12];
      iVar4 = param_3[0x13];
      piVar2[0x10] = param_3[0x10];
      piVar2[0x11] = iVar5;
      piVar2[0x12] = iVar3;
      piVar2[0x13] = iVar4;
      iVar5 = param_3[0x15];
      iVar3 = param_3[0x16];
      iVar4 = param_3[0x17];
      piVar2[0x14] = param_3[0x14];
      piVar2[0x15] = iVar5;
      piVar2[0x16] = iVar3;
      piVar2[0x17] = iVar4;
      iVar5 = param_3[0x19];
      iVar3 = param_3[0x1a];
      iVar4 = param_3[0x1b];
      piVar2[0x18] = param_3[0x18];
      piVar2[0x19] = iVar5;
      piVar2[0x1a] = iVar3;
      piVar2[0x1b] = iVar4;
    }
    return (ulonglong)(piVar2 != param_3);
  }
  DAT_180039110 = 0xfffffbb0;
  return uVar6 & 0xffffffffffffff00;
}

/* Function: FUN_18000ce80 */
longlong FUN_18000ce80(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  uVar3 = FUN_18000c9e0(param_1,param_2);
  iVar2 = (int)uVar3;
  if ((-1 < iVar2) &&
     (iVar2 < (int)(*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3))) {
    lVar4 = *(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48);
    if ((int)(lVar4 >> 3) == 1) {
      DAT_180039110 = 0xfffffbac;
      return (ulonglong)(uint7)(lVar4 >> 0xb) << 8;
    }
    free(*(void **)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x48)));
    puVar1 = (undefined8 *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x48));
    puVar5 = puVar1 + 1;
    puVar5 = FUN_18000f860(puVar1,puVar5,
                           *(longlong *)(param_1 + 0x50) - (longlong)puVar5 & 0xfffffffffffffff8);
    *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + -8;
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x120;
    return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
  }
  DAT_180039110 = 0xfffffbb0;
  return uVar3 & 0xffffffffffffff00;
}

/* Function: FUN_18000cf30 */
ulonglong FUN_18000cf30(longlong param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  ppvVar1 = *(void ***)(param_1 + 0x50);
  if (*(void ***)(param_1 + 0x48) != ppvVar1) {
    ppvVar2 = *(void ***)(param_1 + 0x48);
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)ppvVar1 + (7 - (longlong)ppvVar2)) >> 3;
    if (ppvVar1 < ppvVar2) {
      uVar3 = uVar4;
    }
    if (uVar3 != 0) {
      do {
        free(*ppvVar2);
        uVar4 = uVar4 + 1;
        ppvVar2 = ppvVar2 + 1;
      } while (uVar4 != uVar3);
    }
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x20;
    return CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 8),1);
  }
  return (ulonglong)ppvVar1 & 0xffffffffffffff00;
}

/* Function: FUN_18000cfc0 */
int FUN_18000cfc0(longlong param_1,undefined4 *param_2)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined4 *local_res8;
  
  if (*(longlong *)(param_1 + 0x60) != *(longlong *)(param_1 + 0x68)) {
    uVar9 = 0;
    uVar10 = (uint)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3);
    if (uVar10 != 0) {
      do {
        if (param_2 == *(undefined4 **)(*(longlong *)(param_1 + 0x60) + uVar9 * 8)) {
          if ((int)uVar9 != -1) {
            return 0;
          }
          break;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < uVar10);
    }
  }
  puVar6 = (undefined4 *)malloc(0x10);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *puVar6 = *param_2;
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  local_res8 = puVar6;
  if (0 < (int)puVar6[1]) {
    puVar7 = (undefined8 *)malloc((longlong)(int)puVar6[1]);
    *(undefined8 **)(puVar6 + 2) = puVar7;
    FUN_18000f860(puVar7,*(undefined8 **)(param_2 + 2),(longlong)(int)puVar6[1]);
  }
  ppuVar1 = *(undefined4 ***)(param_1 + 0x68);
  if ((&local_res8 < ppuVar1) &&
     (ppuVar2 = *(undefined4 ***)(param_1 + 0x60), ppuVar2 <= &local_res8)) {
    if (ppuVar1 == *(undefined4 ***)(param_1 + 0x70)) {
      FUN_18000b5e0((void **)(param_1 + 0x60));
    }
    if (*(undefined8 **)(param_1 + 0x68) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x68) =
           *(undefined8 *)
            (*(longlong *)(param_1 + 0x60) + ((longlong)&local_res8 - (longlong)ppuVar2 >> 3) * 8);
    }
  }
  else {
    if (ppuVar1 == *(undefined4 ***)(param_1 + 0x70)) {
      FUN_18000b5e0((void **)(param_1 + 0x60));
    }
    if (*(undefined8 **)(param_1 + 0x68) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x68) = puVar6;
    }
  }
  *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 8;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x1000;
  return (int)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3) + -1;
}

/* Function: FUN_18000d100 */
ulonglong FUN_18000d100(longlong param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong in_RAX;
  void *pvVar4;
  ulonglong _Size;
  
  if ((param_2 < 0) ||
     (in_RAX = *(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3,
     (int)in_RAX <= param_2)) {
    DAT_180039110 = 0xfffffbb1;
    return in_RAX & 0xffffffffffffff00;
  }
  puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 0x60) + (longlong)param_2 * 8);
  if (puVar3 == param_3) goto LAB_18000d1c5;
  iVar1 = puVar3[1];
  iVar2 = param_3[1];
  _Size = (ulonglong)iVar2;
  if (iVar1 == iVar2) {
    _Size = (longlong)iVar1;
    if (0 < iVar1) goto LAB_18000d1a5;
  }
  else {
    if ((0 < iVar1) && (pvVar4 = *(void **)(puVar3 + 2), pvVar4 != *(void **)(param_3 + 2))) {
      if (pvVar4 != (void *)0x0) {
        free(pvVar4);
      }
      puVar3[1] = 0;
      *(undefined8 *)(puVar3 + 2) = 0;
    }
    puVar3[1] = iVar2;
    if (0 < iVar2) {
      if (*(longlong *)(puVar3 + 2) == 0) {
        pvVar4 = malloc(_Size);
        *(void **)(puVar3 + 2) = pvVar4;
      }
LAB_18000d1a5:
      FUN_18000f860(*(undefined8 **)(puVar3 + 2),*(undefined8 **)(param_3 + 2),_Size);
    }
  }
  *puVar3 = *param_3;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x2000;
LAB_18000d1c5:
  return (ulonglong)(puVar3 != param_3);
}

/* Function: FUN_18000d200 */
undefined8 FUN_18000d200(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  ulonglong in_RAX;
  undefined8 *puVar2;
  
  if ((-1 < param_2) &&
     (in_RAX = *(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3,
     param_2 < (int)in_RAX)) {
    free(*(void **)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x60)));
    puVar1 = (undefined8 *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x60));
    puVar2 = puVar1 + 1;
    puVar2 = FUN_18000f860(puVar1,puVar2,
                           *(longlong *)(param_1 + 0x68) - (longlong)puVar2 & 0xfffffffffffffff8);
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + -8;
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x2000;
    return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
  }
  DAT_180039110 = 0xfffffbb1;
  return in_RAX & 0xffffffffffffff00;
}

/* Function: FUN_18000d290 */
ulonglong FUN_18000d290(longlong param_1)

{
  void **ppvVar1;
  void *_Memory;
  void *_Memory_00;
  void **ppvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  ppvVar1 = *(void ***)(param_1 + 0x68);
  if (*(void ***)(param_1 + 0x60) != ppvVar1) {
    ppvVar2 = *(void ***)(param_1 + 0x60);
    uVar3 = 0;
    uVar4 = (ulonglong)((longlong)ppvVar1 + (7 - (longlong)ppvVar2)) >> 3;
    if (ppvVar1 < ppvVar2) {
      uVar4 = uVar3;
    }
    if (uVar4 != 0) {
      do {
        _Memory = *ppvVar2;
        _Memory_00 = *(void **)((longlong)_Memory + 8);
        if (_Memory_00 != (void *)0x0) {
          free(_Memory_00);
        }
        free(_Memory);
        uVar3 = uVar3 + 1;
        ppvVar2 = ppvVar2 + 1;
      } while (uVar3 != uVar4);
    }
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x2000;
    return CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 8),1);
  }
  return (ulonglong)ppvVar1 & 0xffffffffffffff00;
}

/* Function: FUN_18000d340 */
int FUN_18000d340(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 **ppuVar4;
  undefined4 **ppuVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_res8;
  
  puVar7 = (undefined4 *)0x0;
  if (((*(uint *)(param_3 + 0x9c) >> 0x11 & 1) != 0) ||
     ((*(uint *)(param_3 + 0x9c) >> 0x13 & 1) != 0)) {
    FUN_18000dda0(param_1,param_2,param_3,param_4,param_5);
    FUN_18000df80(param_3);
    FUN_18000e0e0(param_3);
    *(undefined4 *)(param_3 + 0x9c) = 0;
  }
  puVar6 = (undefined4 *)FUN_180010bb8(0x38);
  if (puVar6 != (undefined4 *)0x0) {
    lVar1 = *(longlong *)(param_3 + 0x80);
    lVar2 = *(longlong *)(param_3 + 0x78);
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0;
    *(undefined8 *)(puVar6 + 8) = 0;
    puVar6[0xc] = 0;
    *puVar6 = (int)(lVar1 - lVar2 >> 3);
    uVar3 = *param_4;
    *(longlong *)(puVar6 + 10) = param_3;
    *(undefined8 *)(puVar6 + 1) = uVar3;
    puVar6[1] = 0;
    puVar7 = puVar6;
  }
  ppuVar4 = *(undefined4 ***)(param_3 + 0x80);
  local_res8 = puVar7;
  if ((&local_res8 < ppuVar4) &&
     (ppuVar5 = *(undefined4 ***)(param_3 + 0x78), ppuVar5 <= &local_res8)) {
    if (ppuVar4 == *(undefined4 ***)(param_3 + 0x88)) {
      FUN_18000b5e0((void **)(param_3 + 0x78));
    }
    if (*(undefined8 **)(param_3 + 0x80) != (undefined8 *)0x0) {
      **(undefined8 **)(param_3 + 0x80) =
           *(undefined8 *)
            (*(longlong *)(param_3 + 0x78) + ((longlong)&local_res8 - (longlong)ppuVar5 >> 3) * 8);
    }
  }
  else {
    if (ppuVar4 == *(undefined4 ***)(param_3 + 0x88)) {
      FUN_18000b5e0((void **)(param_3 + 0x78));
    }
    if (*(longlong **)(param_3 + 0x80) != (longlong *)0x0) {
      **(longlong **)(param_3 + 0x80) = (longlong)puVar7;
    }
  }
  *(longlong *)(param_3 + 0x80) = *(longlong *)(param_3 + 0x80) + 8;
  *(uint *)(param_3 + 0x9c) = *(uint *)(param_3 + 0x9c) | 0x10000;
  return (int)(*(longlong *)(param_3 + 0x80) - *(longlong *)(param_3 + 0x78) >> 3) + -1;
}

/* Function: FUN_18000d490 */
undefined8
FUN_18000d490(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  void *_Memory;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  iVar5 = (int)param_4;
  uVar2 = *(uint *)(param_3 + 0x9c) >> 0x10;
  uVar3 = (ulonglong)uVar2;
  if (((uVar2 & 1) != 0) || ((*(uint *)(param_3 + 0x9c) >> 0x13 & 1) != 0)) {
    FUN_18000dda0(param_1,param_2,param_3,param_4,param_5);
    FUN_18000df80(param_3);
    uVar3 = FUN_18000e0e0(param_3);
    *(undefined4 *)(param_3 + 0x9c) = 0;
  }
  if ((-1 < iVar5) &&
     (uVar3 = *(longlong *)(param_3 + 0x80) - *(longlong *)(param_3 + 0x78) >> 3, iVar5 < (int)uVar3
     )) {
    _Memory = *(void **)((longlong)iVar5 * 8 + *(longlong *)(param_3 + 0x78));
    if (*(longlong *)((longlong)_Memory + 0x10) != *(longlong *)((longlong)_Memory + 0x18)) {
      if (*(longlong *)(param_3 + 0x90) != 0) {
        *(undefined8 *)(param_3 + 0x90) = 0;
      }
      *(uint *)(param_3 + 0x9c) = *(uint *)(param_3 + 0x9c) | 0x2000000;
    }
    if (_Memory != (void *)0x0) {
      FUN_18000b540((longlong)_Memory);
      if (*(void **)((longlong)_Memory + 0x10) != (void *)0x0) {
        free(*(void **)((longlong)_Memory + 0x10));
        *(undefined8 *)((longlong)_Memory + 0x10) = 0;
        *(undefined8 *)((longlong)_Memory + 0x18) = 0;
        *(undefined8 *)((longlong)_Memory + 0x20) = 0;
      }
      free(_Memory);
    }
    puVar1 = (undefined8 *)((longlong)iVar5 * 8 + *(longlong *)(param_3 + 0x78));
    puVar4 = puVar1 + 1;
    puVar4 = FUN_18000f860(puVar1,puVar4,
                           *(longlong *)(param_3 + 0x80) - (longlong)puVar4 & 0xfffffffffffffff8);
    *(longlong *)(param_3 + 0x80) = *(longlong *)(param_3 + 0x80) + -8;
    *(uint *)(param_3 + 0x9c) = *(uint *)(param_3 + 0x9c) | 0x120000;
    return CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}

/* Function: FUN_18000d5c0 */
ulonglong FUN_18000d5c0(longlong param_1)

{
  void **ppvVar1;
  void *_Memory;
  void **ppvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  ppvVar1 = *(void ***)(param_1 + 0x80);
  if (*(void ***)(param_1 + 0x78) != ppvVar1) {
    ppvVar2 = *(void ***)(param_1 + 0x78);
    uVar3 = 0;
    uVar4 = (ulonglong)((longlong)ppvVar1 + (7 - (longlong)ppvVar2)) >> 3;
    if (ppvVar1 < ppvVar2) {
      uVar4 = uVar3;
    }
    if (uVar4 != 0) {
      do {
        _Memory = *ppvVar2;
        if (*(longlong *)((longlong)_Memory + 0x10) != *(longlong *)((longlong)_Memory + 0x18)) {
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x2000000;
        }
        if (_Memory != (void *)0x0) {
          FUN_18000b540((longlong)_Memory);
          if (*(void **)((longlong)_Memory + 0x10) != (void *)0x0) {
            free(*(void **)((longlong)_Memory + 0x10));
            *(undefined8 *)((longlong)_Memory + 0x10) = 0;
            *(undefined8 *)((longlong)_Memory + 0x18) = 0;
            *(undefined8 *)((longlong)_Memory + 0x20) = 0;
          }
          free(_Memory);
        }
        uVar3 = uVar3 + 1;
        ppvVar2 = ppvVar2 + 1;
      } while (uVar3 != uVar4);
    }
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x20000;
    *(undefined8 *)(param_1 + 0x90) = 0;
    return CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 0x78) >> 8),1);
  }
  return (ulonglong)ppvVar1 & 0xffffffffffffff00;
}

/* Function: FUN_18000d6b0 */
undefined8
FUN_18000d6b0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  undefined8 in_stack_ffffffffffffffe8;
  
  uVar5 = *(uint *)(param_3 + 0x9c);
  iVar12 = (int)param_6;
  iVar11 = (int)param_5;
  uVar10 = (ulonglong)iVar11;
  iVar8 = (int)param_4;
  if ((((uVar5 >> 0x10 & 1) != 0) || (uVar7 = (ulonglong)(uVar5 >> 0x11), (uVar5 >> 0x11 & 1) != 0))
     || ((uVar5 >> 0x13 & 1) != 0)) {
    FUN_18000dda0(param_1,param_2,param_3,param_4,param_5);
    FUN_18000df80(param_3);
    uVar7 = FUN_18000e0e0(param_3);
    *(undefined4 *)(param_3 + 0x9c) = 0;
  }
  if ((iVar8 != iVar11) && (iVar12 != 0)) {
    if ((((iVar8 < 0) ||
         ((uVar7 = *(longlong *)(param_3 + 0x80) - *(longlong *)(param_3 + 0x78) >> 3,
          (int)uVar7 <= iVar8 || (iVar11 < 0)))) ||
        (uVar7 = *(longlong *)(param_3 + 0x80) - *(longlong *)(param_3 + 0x78) >> 3,
        (int)uVar7 <= iVar11)) ||
       ((((iVar8 + iVar12 < 0 ||
          (uVar7 = *(longlong *)(param_3 + 0x80) - *(longlong *)(param_3 + 0x78) >> 3,
          (int)uVar7 <= iVar8 + iVar12)) || (iVar11 + iVar12 < 0)) ||
        (uVar7 = *(longlong *)(param_3 + 0x80) - *(longlong *)(param_3 + 0x78) >> 3,
        (int)uVar7 <= iVar11 + iVar12)))) {
      return uVar7 & 0xffffffffffffff00;
    }
    if (iVar8 < iVar11) {
      lVar6 = *(longlong *)(param_3 + 0x80);
      lVar1 = lVar6 + (longlong)((int)(lVar6 - *(longlong *)(param_3 + 0x78) >> 3) - iVar8) * -8;
      lVar6 = lVar6 + (longlong)
                      (((int)(lVar6 - *(longlong *)(param_3 + 0x78) >> 3) - iVar11) - iVar12) * -8;
      uVar10 = (longlong)(iVar11 - iVar8) * 8;
      lVar9 = lVar6 + (longlong)(iVar11 - iVar8) * -8;
      if ((lVar6 != lVar9) && (lVar9 != lVar1)) {
        uVar10 = FUN_18000eb40(lVar6,lVar9,lVar1,param_6,in_stack_ffffffffffffffe8);
      }
    }
    else {
      lVar1 = *(longlong *)(param_3 + 0x78);
      puVar2 = (undefined8 *)(lVar1 + (longlong)iVar8 * 8);
      puVar3 = (undefined8 *)(lVar1 + uVar10 * 8);
      puVar4 = (undefined8 *)(lVar1 + ((longlong)iVar8 + (longlong)iVar12) * 8);
      if ((puVar3 != puVar2) && (puVar2 != puVar4)) {
        uVar10 = FUN_18000ec70(puVar3,(longlong)puVar2,puVar4);
      }
    }
    *(uint *)(param_3 + 0x9c) = *(uint *)(param_3 + 0x9c) | 0x1c0000;
    uVar7 = uVar10;
  }
  return CONCAT71((int7)(uVar7 >> 8),1);
}

/* Function: FUN_18000d850 */
undefined8 FUN_18000d850(longlong param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  if ((param_2 < 0) ||
     ((int)(*(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78) >> 3) <= param_2)) {
    return 0;
  }
  uVar3 = FUN_18000afe0(*(longlong *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x78)),param_3
                        ,param_4);
  iVar2 = (int)uVar3;
  if (iVar2 != -1) {
    lVar1 = *(longlong *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x78));
    if ((-1 < iVar2) &&
       (iVar2 < (int)(*(longlong *)(lVar1 + 0x18) - *(longlong *)(lVar1 + 0x10) >> 3))) {
      return *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar2 * 8);
    }
    DAT_180039110 = 0xfffffbb1;
  }
  return 0;
}

/* Function: FUN_18000d8f0 */
undefined FUN_18000d8f0(longlong param_1,int param_2,int *param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  if ((-1 < param_2) &&
     (param_2 < (int)(*(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78) >> 3))) {
    bVar2 = FUN_18000b180(*(int **)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x78)),param_3);
    if (bVar2 == false) {
      return bVar2;
    }
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar1 = *(longlong *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x78));
      iVar3 = (int)(*(longlong *)(lVar1 + 0x18) - *(longlong *)(lVar1 + 0x10) >> 3) + -1;
      if ((iVar3 < 0) ||
         ((int)(*(longlong *)(lVar1 + 0x18) - *(longlong *)(lVar1 + 0x10) >> 3) <= iVar3)) {
        DAT_180039110 = 0xfffffbb1;
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = *(int **)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar3 * 8);
      }
      if ((*(int **)(param_1 + 0x90))[1] + **(int **)(param_1 + 0x90) < piVar4[1] + *piVar4) {
        *(int **)(param_1 + 0x90) = piVar4;
      }
    }
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x11000000;
    return 1;
  }
  DAT_180039110 = 0xfffffbb1;
  return 0;
}

/* Function: FUN_18000d9e0 */
ulonglong FUN_18000d9e0(longlong param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((param_2 < 0) ||
     (in_RAX = *(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78) >> 3,
     (int)in_RAX <= param_2)) {
    DAT_180039110 = 0xfffffbb1;
    return in_RAX & 0xffffffffffffff00;
  }
  uVar5 = FUN_18000afe0(*(longlong *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x78)),param_3
                        ,param_3);
  iVar4 = (int)uVar5;
  if (-1 < iVar4) {
    lVar7 = *(longlong *)(param_1 + 0x78);
    piVar3 = *(int **)(lVar7 + (longlong)param_2 * 8);
    if (iVar4 < (int)(*(longlong *)(piVar3 + 6) - *(longlong *)(piVar3 + 4) >> 3)) {
      iVar1 = *param_4;
      iVar2 = param_4[2];
      bVar8 = param_2 != iVar2;
      if (bVar8) {
        if ((iVar2 < 0) || (uVar5 = *(longlong *)(param_1 + 0x80) - lVar7 >> 3, (int)uVar5 <= iVar2)
           ) {
          DAT_180039110 = 0xfffffbb1;
          goto LAB_18000daf4;
        }
        uVar5 = FUN_18000b3a0(piVar3,iVar4,*(int **)(lVar7 + (longlong)iVar2 * 8));
        if ((char)uVar5 == '\0') goto LAB_18000daf4;
        param_2 = param_4[2];
      }
      lVar7 = (longlong)param_2 * 8;
      uVar5 = FUN_18000b2c0(*(int **)(lVar7 + *(longlong *)(param_1 + 0x78)),iVar4,param_4);
      if ((char)uVar5 != '\0') {
        *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x4000000;
        if (param_3 == iVar1) {
          if (bVar8) {
            *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x18000000;
            return CONCAT71((int7)(uVar5 >> 8),1);
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x90) != 0) {
            piVar6 = (int *)FUN_180008cd0(*(longlong *)(lVar7 + *(longlong *)(param_1 + 0x78)),iVar4
                                         );
            piVar3 = *(int **)(param_1 + 0x90);
            if (piVar3 == piVar6) {
              *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x18000000;
              *(undefined8 *)(param_1 + 0x90) = 0;
              return CONCAT71((int7)((ulonglong)piVar3 >> 8),1);
            }
            uVar5 = (ulonglong)(uint)(piVar6[1] + *piVar6);
            if (piVar3[1] + *piVar3 < piVar6[1] + *piVar6) {
              *(int **)(param_1 + 0x90) = piVar6;
            }
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x18000000;
        }
        return CONCAT71((int7)(uVar5 >> 8),1);
      }
      goto LAB_18000daf4;
    }
  }
  DAT_180039110 = 0xfffffbb0;
LAB_18000daf4:
  return uVar5 & 0xffffffffffffff00;
}

/* Function: FUN_18000dba0 */
undefined8 FUN_18000dba0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  
  if ((param_2 < 0) ||
     (in_RAX = *(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78) >> 3,
     (int)in_RAX <= param_2)) {
    DAT_180039110 = 0xfffffbb1;
    return in_RAX & 0xffffffffffffff00;
  }
  lVar1 = (longlong)param_2 * 8;
  uVar3 = FUN_18000afe0(*(longlong *)(lVar1 + *(longlong *)(param_1 + 0x78)),param_3,param_3);
  iVar2 = (int)uVar3;
  if ((iVar2 < 0) ||
     (lVar4 = *(longlong *)(lVar1 + *(longlong *)(param_1 + 0x78)),
     (int)(*(longlong *)(lVar4 + 0x18) - *(longlong *)(lVar4 + 0x10) >> 3) <= iVar2)) {
    DAT_180039110 = 0xfffffbb0;
  }
  else {
    if (*(longlong *)(param_1 + 0x90) != 0) {
      if (iVar2 < (int)(*(longlong *)(lVar4 + 0x18) - *(longlong *)(lVar4 + 0x10) >> 3)) {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar2 * 8);
      }
      else {
        DAT_180039110 = 0xfffffbb1;
        lVar4 = 0;
      }
      if (*(longlong *)(param_1 + 0x90) == lVar4) {
        *(undefined8 *)(param_1 + 0x90) = 0;
      }
    }
    uVar3 = FUN_18000b320(*(longlong *)(lVar1 + *(longlong *)(param_1 + 0x78)),iVar2);
    if ((char)uVar3 != '\0') {
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x2000000;
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}

/* Function: FUN_18000dcb0 */
byte FUN_18000dcb0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  void **ppvVar3;
  byte bVar4;
  void **ppvVar5;
  ulonglong uVar6;
  longlong *plVar7;
  byte bVar8;
  ulonglong uVar9;
  
  plVar1 = *(longlong **)(param_1 + 0x80);
  plVar7 = *(longlong **)(param_1 + 0x78);
  bVar8 = 0;
  if (plVar7 == plVar1) {
    bVar8 = 0;
  }
  else {
    do {
      uVar6 = 0;
      lVar2 = *plVar7;
      ppvVar3 = *(void ***)(lVar2 + 0x18);
      if (*(void ***)(lVar2 + 0x10) == ppvVar3) {
        bVar4 = 0;
      }
      else {
        ppvVar5 = *(void ***)(lVar2 + 0x10);
        uVar9 = (ulonglong)((longlong)ppvVar3 + (7 - (longlong)ppvVar5)) >> 3;
        if (ppvVar3 < ppvVar5) {
          uVar9 = uVar6;
        }
        if (uVar9 != 0) {
          do {
            free(*ppvVar5);
            uVar6 = uVar6 + 1;
            ppvVar5 = ppvVar5 + 1;
          } while (uVar6 != uVar9);
        }
        *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar2 + 0x10);
        bVar4 = 1;
      }
      plVar7 = plVar7 + 1;
      bVar8 = bVar8 | bVar4;
    } while (plVar7 != plVar1);
    if (bVar8 != 0) {
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x2000000;
      return bVar8;
    }
  }
  return bVar8;
}

/* Function: FUN_18000dda0 */
void FUN_18000dda0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 extraout_XMM0_Qa;
  
  if (*(longlong *)(param_3 + 0x48) == *(longlong *)(param_3 + 0x50)) {
    piVar2 = *(int **)(param_3 + 0x90);
    if ((piVar2 == (int *)0x0) &&
       (piVar2 = FUN_18000e240(param_3), param_1 = extraout_XMM0_Qa, piVar2 == (int *)0x0)) {
      iVar4 = 0x180;
    }
    else {
      iVar4 = piVar2[1] + *piVar2;
    }
    FUN_18000c110(param_1,param_2,DAT_18002e7d8,param_3,iVar4,param_5,4);
    *(uint *)(param_3 + 0x9c) = *(uint *)(param_3 + 0x9c) & 0xfffffeff;
    return;
  }
  if ((~(byte)((uint)*(undefined4 *)(param_3 + 0x9c) >> 8) & 1) == 0) {
    if ((DAT_180039160 & 1) == 0) {
      DAT_180039160 = DAT_180039160 | 1;
      DAT_180039168 = &LAB_18000b5d0;
    }
    FUN_18000b720(*(undefined8 **)(param_3 + 0x48),*(undefined8 **)(param_3 + 0x50),
                  (longlong)*(undefined8 **)(param_3 + 0x50) -
                  (longlong)*(undefined8 **)(param_3 + 0x48) >> 3,DAT_180039168);
    iVar4 = (int)(*(longlong *)(param_3 + 0x50) - *(longlong *)(param_3 + 0x48) >> 3);
    lVar5 = (longlong)iVar4;
    if (0 < iVar4) {
      iVar4 = -1;
      lVar8 = -8;
      do {
        lVar6 = *(longlong *)(param_3 + 0x48);
        piVar2 = *(int **)(lVar8 + 8 + lVar6);
        if ((iVar4 + 2 < 0) || ((int)(*(longlong *)(param_3 + 0x50) - lVar6 >> 3) <= iVar4 + 2)) {
          piVar3 = *(int **)(param_3 + 0x90);
          if ((piVar3 == (int *)0x0) && (piVar3 = FUN_18000e240(param_3), piVar3 == (int *)0x0)) {
LAB_18000deed:
            iVar7 = piVar2[0xc] * 2;
          }
          else {
            if (*piVar3 + piVar3[1] <= *piVar2) goto LAB_18000deed;
            iVar7 = (*piVar3 - *piVar2) + piVar3[1];
          }
          iVar1 = *(int *)(param_3 + 0xc) - *piVar2;
          if (iVar7 < iVar1) {
            iVar7 = iVar1;
          }
        }
        else {
          iVar7 = **(int **)(lVar8 + 0x10 + lVar6) - *piVar2;
        }
        if ((iVar4 < 0) ||
           ((int)(*(longlong *)(param_3 + 0x50) - *(longlong *)(param_3 + 0x48) >> 3) <= iVar4)) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(longlong *)(lVar8 + *(longlong *)(param_3 + 0x48));
        }
        FUN_1800029d0(param_3 + 8,piVar2,lVar6,iVar7,*(double *)(piVar2 + 4),piVar2[6]);
        iVar4 = iVar4 + 1;
        lVar8 = lVar8 + 8;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    *(uint *)(param_3 + 0x9c) = *(uint *)(param_3 + 0x9c) & 0xfffffeff;
  }
  return;
}

/* Function: FUN_18000df80 */
void FUN_18000df80(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = 0;
  if ((~(byte)(*(uint *)(param_1 + 0x9c) >> 0x14) & 1) == 0) {
    iVar3 = (int)(*(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78) >> 3);
    uVar7 = uVar8;
    uVar9 = uVar8;
    if (0 < iVar3) {
      do {
        piVar1 = *(int **)(*(longlong *)(param_1 + 0x78) + uVar9 * 8);
        iVar6 = (int)uVar7;
        if (iVar6 != *piVar1) {
          plVar4 = *(longlong **)(piVar1 + 4);
          *piVar1 = iVar6;
          uVar7 = (*(longlong *)(piVar1 + 6) - (longlong)plVar4) + 7U >> 3;
          if (*(longlong **)(piVar1 + 6) <= plVar4 && plVar4 != *(longlong **)(piVar1 + 6)) {
            uVar7 = uVar8;
          }
          uVar5 = uVar8;
          if (uVar7 != 0) {
            do {
              lVar2 = *plVar4;
              uVar5 = uVar5 + 1;
              plVar4 = plVar4 + 1;
              *(int *)(lVar2 + 8) = *piVar1;
            } while (uVar5 != uVar7);
          }
        }
        uVar9 = uVar9 + 1;
        uVar7 = (ulonglong)(iVar6 + 1);
      } while ((longlong)uVar9 < (longlong)iVar3);
    }
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffefffff;
  }
  iVar3 = (int)(*(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78) >> 3);
  if (0 < iVar3) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + uVar8 * 8);
      if ((~*(byte *)(lVar2 + 0x30) & 1) == 0) {
        if ((DAT_180039158 & 1) == 0) {
          DAT_180039158 = DAT_180039158 | 1;
          DAT_180039150 = &LAB_18000b5d0;
        }
        FUN_18000b720(*(undefined8 **)(lVar2 + 0x10),*(undefined8 **)(lVar2 + 0x18),
                      (longlong)*(undefined8 **)(lVar2 + 0x18) -
                      (longlong)*(undefined8 **)(lVar2 + 0x10) >> 3,DAT_180039150);
        *(uint *)(lVar2 + 0x30) = *(uint *)(lVar2 + 0x30) & 0xfffffffe;
      }
      uVar8 = uVar8 + 1;
      *(int *)(lVar2 + 4) = (int)(*(longlong *)(lVar2 + 0x18) - *(longlong *)(lVar2 + 0x10) >> 3);
    } while ((longlong)uVar8 < (longlong)iVar3);
  }
  return;
}

/* Function: FUN_18000e0e0 */
void FUN_18000e0e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  
  if (*(int *)(param_1 + 0x9c) != 0) {
    uVar4 = 0;
    *(int *)(param_1 + 0x28) =
         (int)(*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3);
    *(int *)(param_1 + 0x2c) =
         (int)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3);
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(int *)(param_1 + 0x30) =
         (int)(*(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78) >> 3);
    plVar3 = *(longlong **)(param_1 + 0x78);
    uVar8 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x80) + (7 - (longlong)plVar3)) >> 3;
    if (*(longlong **)(param_1 + 0x80) < plVar3) {
      uVar8 = uVar4;
    }
    uVar6 = uVar4;
    uVar7 = uVar4;
    if (uVar8 != 0) {
      do {
        lVar1 = *plVar3;
        uVar7 = uVar7 + 1;
        plVar3 = plVar3 + 1;
        uVar5 = (int)uVar6 + (int)(*(longlong *)(lVar1 + 0x18) - *(longlong *)(lVar1 + 0x10) >> 3);
        *(uint *)(param_1 + 0x34) = uVar5;
        uVar6 = (ulonglong)uVar5;
      } while (uVar7 != uVar8);
    }
    plVar3 = *(longlong **)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x38) = 0;
    uVar8 = (*(longlong *)(param_1 + 0x50) - (longlong)plVar3) + 7U >> 3;
    if (*(longlong **)(param_1 + 0x50) <= plVar3 && plVar3 != *(longlong **)(param_1 + 0x50)) {
      uVar8 = uVar4;
    }
    plVar2 = plVar3;
    uVar6 = uVar4;
    if (uVar8 != 0) {
      do {
        uVar6 = uVar6 + 1;
        uVar5 = (int)uVar4 + *(int *)(*plVar2 + 0x6c);
        uVar4 = (ulonglong)uVar5;
        *(uint *)(param_1 + 0x38) = uVar5;
        plVar2 = plVar2 + 1;
      } while (uVar6 != uVar8);
    }
    if ((int)(*(longlong *)(param_1 + 0x50) - (longlong)plVar3 >> 3) != 0) {
      lVar1 = plVar3[(int)(*(longlong *)(param_1 + 0x50) - (longlong)plVar3 >> 3) + -1];
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 4);
      *(double *)(param_1 + 0x10) = (double)*(float *)(lVar1 + 0xc);
      fVar9 = FUN_180024a0c((float)*(int *)(param_1 + 0xc) / (float)*(int *)(param_1 + 0x18));
      *(int *)(param_1 + 0x3c) = (int)fVar9;
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}

/* Function: FUN_18000e240 */
int * FUN_18000e240(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  
  *(undefined8 *)(param_1 + 0x90) = 0;
  piVar6 = (int *)0x0;
  iVar11 = 0;
  lVar7 = 0;
  iVar2 = (int)(*(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78) >> 3);
  if (iVar2 < 1) {
    return *(int **)(param_1 + 0x90);
  }
  do {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + lVar7 * 8);
    if (*(longlong *)(lVar1 + 0x10) != *(longlong *)(lVar1 + 0x18)) {
      piVar10 = (int *)0x0;
      iVar9 = 0;
      iVar8 = 0;
      lVar3 = 0;
      iVar4 = (int)(*(longlong *)(lVar1 + 0x18) - *(longlong *)(lVar1 + 0x10) >> 3);
      if (0 < iVar4) {
        do {
          if ((lVar3 < 0) ||
             ((int)(*(longlong *)(lVar1 + 0x18) - *(longlong *)(lVar1 + 0x10) >> 3) <= iVar8)) {
            DAT_180039110 = 0xfffffbb1;
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = *(int **)(*(longlong *)(lVar1 + 0x10) + lVar3 * 8);
          }
          if ((piVar10 == (int *)0x0) || (iVar9 < piVar5[1] + *piVar5)) {
            piVar10 = piVar5;
            iVar9 = piVar5[1] + *piVar5;
          }
          lVar3 = lVar3 + 1;
          iVar8 = iVar8 + 1;
        } while (lVar3 < iVar4);
      }
      if ((piVar6 == (int *)0x0) || (iVar11 < iVar9)) {
        piVar6 = piVar10;
        iVar11 = iVar9;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 < iVar2);
  if (piVar6 == (int *)0x0) {
    return *(int **)(param_1 + 0x90);
  }
  *(int **)(param_1 + 0x90) = piVar6;
  return piVar6;
}

/* Function: FUN_18000e390 */
int * FUN_18000e390(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *_Memory;
  void *_Memory_00;
  void *_Memory_01;
  undefined4 *puVar17;
  int *piVar18;
  void **ppvVar19;
  longlong lVar20;
  longlong lVar21;
  
  if (*(int *)(param_3 + 0x9c) != 0) {
    FUN_18000dda0(param_1,param_2,param_3,param_4,param_5);
    FUN_18000df80(param_3);
    FUN_18000e0e0(param_3);
    *(undefined4 *)(param_3 + 0x9c) = 0;
  }
  iVar1 = *(int *)(param_3 + 0xc);
  iVar2 = *(int *)(param_3 + 0x10);
  iVar3 = *(int *)(param_3 + 0x14);
  iVar4 = *(int *)(param_3 + 0x18);
  iVar5 = *(int *)(param_3 + 0x1c);
  iVar6 = *(int *)(param_3 + 0x20);
  iVar7 = *(int *)(param_3 + 0x24);
  iVar8 = *(int *)(param_3 + 0x28);
  iVar9 = *(int *)(param_3 + 0x2c);
  iVar10 = *(int *)(param_3 + 0x30);
  iVar11 = *(int *)(param_3 + 0x34);
  iVar12 = *(int *)(param_3 + 0x38);
  iVar13 = *(int *)(param_3 + 0x3c);
  iVar14 = *(int *)(param_3 + 0x40);
  iVar15 = *(int *)(param_3 + 0x44);
  _Memory = FUN_18000e620(param_3);
  if ((_Memory == (undefined4 *)0x0) && (0 < iVar8)) {
    DAT_180039110 = 0xfffffb4f;
    return (int *)0x0;
  }
  _Memory_00 = FUN_18000e6c0(param_3);
  if ((_Memory_00 == (void *)0x0) && (0 < iVar9)) {
    if (_Memory != (undefined4 *)0x0) {
      free(_Memory);
    }
    DAT_180039110 = 0xfffffb4e;
    return (int *)0x0;
  }
  iVar16 = (int)(*(longlong *)(param_3 + 0x80) - *(longlong *)(param_3 + 0x78) >> 3);
  if (iVar16 == 0) {
    _Memory_01 = (void *)0x0;
  }
  else {
    lVar21 = (longlong)iVar16;
    _Memory_01 = malloc(lVar21 * 8);
    lVar20 = 0;
    if (0 < lVar21) {
      do {
        lVar20 = lVar20 + 1;
        *(undefined8 *)((longlong)_Memory_01 + lVar20 * 8 + -8) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_3 + 0x78) + -8 + lVar20 * 8) + 4);
      } while (lVar20 < lVar21);
    }
    if (_Memory_01 != (void *)0x0) goto LAB_18000e540;
  }
  if (0 < iVar10) {
    if (_Memory != (undefined4 *)0x0) {
      free(_Memory);
    }
    if (_Memory_00 != (void *)0x0) {
      lVar20 = (longlong)iVar9;
      if (0 < lVar20) {
        ppvVar19 = (void **)((longlong)_Memory_00 + 8);
        do {
          if (0 < *(int *)((longlong)ppvVar19 + -4)) {
            free(*ppvVar19);
          }
          ppvVar19 = ppvVar19 + 2;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      free(_Memory_00);
    }
    DAT_180039110 = 0xfffffb4d;
    return (int *)0x0;
  }
LAB_18000e540:
  puVar17 = FUN_18000e7b0(param_3,(int)param_4);
  if ((puVar17 == (undefined4 *)0x0) && (0 < iVar11)) {
    if (_Memory != (undefined4 *)0x0) {
      free(_Memory);
    }
    if (_Memory_00 != (void *)0x0) {
      lVar20 = (longlong)iVar9;
      if (0 < lVar20) {
        ppvVar19 = (void **)((longlong)_Memory_00 + 8);
        do {
          if (0 < *(int *)((longlong)ppvVar19 + -4)) {
            free(*ppvVar19);
          }
          ppvVar19 = ppvVar19 + 2;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      free(_Memory_00);
    }
    if (_Memory_01 != (void *)0x0) {
      free(_Memory_01);
    }
    DAT_180039110 = 0xfffffb4c;
    piVar18 = (int *)0x0;
  }
  else {
    piVar18 = (int *)malloc(0x68);
    *piVar18 = (int)param_4;
    piVar18[1] = iVar1;
    piVar18[2] = iVar2;
    piVar18[3] = iVar3;
    piVar18[4] = iVar4;
    piVar18[5] = iVar5;
    piVar18[6] = iVar6;
    piVar18[7] = iVar7;
    *(undefined4 **)(piVar18 + 0x10) = _Memory;
    *(void **)(piVar18 + 0x12) = _Memory_00;
    *(void **)(piVar18 + 0x14) = _Memory_01;
    *(undefined4 **)(piVar18 + 0x16) = puVar17;
    *(undefined8 *)(piVar18 + 0x18) = 0;
    piVar18[8] = iVar8;
    piVar18[9] = iVar9;
    piVar18[10] = iVar10;
    piVar18[0xb] = iVar11;
    piVar18[0xc] = iVar12;
    piVar18[0xd] = iVar13;
    piVar18[0xe] = iVar14;
    piVar18[0xf] = iVar15;
  }
  return piVar18;
}

/* Function: FUN_18000e620 */
undefined4 * FUN_18000e620(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  
  iVar10 = (int)(*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3);
  if (iVar10 == 0) {
    return (undefined4 *)0x0;
  }
  lVar13 = (longlong)iVar10;
  puVar11 = (undefined4 *)malloc(lVar13 * 0x70);
  if (0 < lVar13) {
    plVar14 = *(longlong **)(param_1 + 0x48);
    puVar12 = puVar11;
    do {
      puVar1 = (undefined4 *)*plVar14;
      plVar14 = plVar14 + 1;
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      uVar5 = puVar1[4];
      uVar6 = puVar1[5];
      uVar7 = puVar1[6];
      uVar8 = puVar1[7];
      *puVar12 = *puVar1;
      puVar12[1] = uVar2;
      puVar12[2] = uVar3;
      puVar12[3] = uVar4;
      uVar2 = puVar1[8];
      uVar3 = puVar1[9];
      uVar4 = puVar1[10];
      uVar9 = puVar1[0xb];
      puVar12[4] = uVar5;
      puVar12[5] = uVar6;
      puVar12[6] = uVar7;
      puVar12[7] = uVar8;
      uVar5 = puVar1[0xc];
      uVar6 = puVar1[0xd];
      uVar7 = puVar1[0xe];
      uVar8 = puVar1[0xf];
      puVar12[8] = uVar2;
      puVar12[9] = uVar3;
      puVar12[10] = uVar4;
      puVar12[0xb] = uVar9;
      uVar2 = puVar1[0x10];
      uVar3 = puVar1[0x11];
      uVar4 = puVar1[0x12];
      uVar9 = puVar1[0x13];
      puVar12[0xc] = uVar5;
      puVar12[0xd] = uVar6;
      puVar12[0xe] = uVar7;
      puVar12[0xf] = uVar8;
      uVar5 = puVar1[0x14];
      uVar6 = puVar1[0x15];
      uVar7 = puVar1[0x16];
      uVar8 = puVar1[0x17];
      puVar12[0x10] = uVar2;
      puVar12[0x11] = uVar3;
      puVar12[0x12] = uVar4;
      puVar12[0x13] = uVar9;
      uVar2 = puVar1[0x18];
      uVar3 = puVar1[0x19];
      uVar4 = puVar1[0x1a];
      uVar9 = puVar1[0x1b];
      puVar12[0x14] = uVar5;
      puVar12[0x15] = uVar6;
      puVar12[0x16] = uVar7;
      puVar12[0x17] = uVar8;
      puVar12[0x18] = uVar2;
      puVar12[0x19] = uVar3;
      puVar12[0x1a] = uVar4;
      puVar12[0x1b] = uVar9;
      lVar13 = lVar13 + -1;
      puVar12 = puVar12 + 0x1c;
    } while (lVar13 != 0);
  }
  return puVar11;
}

/* Function: FUN_18000e6c0 */
void * FUN_18000e6c0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar5 = (int)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3);
  if (iVar5 != 0) {
    lVar10 = (longlong)iVar5;
    pvVar6 = malloc(lVar10 << 4);
    lVar9 = 0;
    if (0 < lVar10) {
      piVar8 = (int *)((longlong)pvVar6 + 4);
      do {
        piVar1 = *(int **)(*(longlong *)(param_1 + 0x60) + lVar9 * 8);
        iVar5 = piVar1[1];
        iVar3 = piVar1[2];
        iVar4 = piVar1[3];
        piVar8[-1] = *piVar1;
        *piVar8 = iVar5;
        piVar8[1] = iVar3;
        piVar8[2] = iVar4;
        iVar5 = *piVar8;
        if (iVar5 < 1) {
          *(undefined8 *)(piVar8 + 1) = 0;
        }
        else {
          puVar7 = (undefined8 *)malloc((longlong)iVar5);
          puVar2 = *(undefined8 **)(piVar1 + 2);
          *(undefined8 **)(piVar8 + 1) = puVar7;
          FUN_18000f860(puVar7,puVar2,(longlong)iVar5);
        }
        lVar9 = lVar9 + 1;
        piVar8 = piVar8 + 4;
      } while (lVar9 < lVar10);
    }
    return pvVar6;
  }
  return (void *)0x0;
}

/* Function: FUN_18000e7b0 */
undefined4 * FUN_18000e7b0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  int iVar15;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    puVar6 = (undefined4 *)malloc((longlong)iVar1 * 0x18);
    lVar11 = 0;
    iVar8 = (int)(*(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78) >> 3);
    if (0 < iVar8) {
      lVar12 = 0;
      do {
        iVar15 = 0;
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + lVar11 * 8);
        lVar7 = 0;
        iVar9 = (int)(*(longlong *)(lVar2 + 0x18) - *(longlong *)(lVar2 + 0x10) >> 3);
        lVar13 = lVar12;
        if (0 < iVar9) {
          lVar13 = lVar12 + iVar9;
          puVar14 = puVar6 + lVar12 * 6;
          do {
            if ((lVar7 < 0) ||
               ((int)(*(longlong *)(lVar2 + 0x18) - *(longlong *)(lVar2 + 0x10) >> 3) <= iVar15)) {
              DAT_180039110 = 0xfffffbb1;
              puVar10 = (undefined4 *)0x0;
            }
            else {
              puVar10 = *(undefined4 **)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
            }
            uVar3 = puVar10[1];
            uVar4 = puVar10[2];
            uVar5 = puVar10[3];
            lVar7 = lVar7 + 1;
            iVar15 = iVar15 + 1;
            *puVar14 = *puVar10;
            puVar14[1] = uVar3;
            puVar14[2] = uVar4;
            puVar14[3] = uVar5;
            *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(puVar10 + 4);
            puVar14 = puVar14 + 6;
          } while (lVar7 < iVar9);
        }
        lVar11 = lVar11 + 1;
        lVar12 = lVar13;
      } while (lVar11 < iVar8);
    }
    if (param_2 - 100U < 100) {
      if ((DAT_18003915c & 1) == 0) {
        DAT_18003915c = DAT_18003915c | 1;
        DAT_180039178 = &LAB_18000e940;
      }
      FUN_18000e9a0(puVar6,puVar6 + (longlong)iVar1 * 6,
                    ((longlong)(puVar6 + (longlong)iVar1 * 6) - (longlong)puVar6) / 0x18,
                    DAT_180039178);
    }
    return puVar6;
  }
  return (undefined4 *)0x0;
}

/* Function: FUN_18000e9a0 */
void FUN_18000e9a0(undefined4 *param_1,undefined4 *param_2,longlong param_3,undefined *param_4)

{
  longlong lVar1;
  undefined4 *local_18;
  undefined4 *local_10;
  
  lVar1 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar1 = lVar1 / 0x18;
    if (lVar1 < 0x21) {
LAB_18000eacb:
      if (1 < lVar1) {
        FUN_18000f3c0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar1) {
        if (1 < ((longlong)param_2 - (longlong)param_1) / 0x18) {
          FUN_18000f0f0((longlong)param_1,(longlong)param_2,param_4);
        }
        FUN_18000f2c0(param_1,(longlong)param_2,param_4);
        return;
      }
      goto LAB_18000eacb;
    }
    FUN_18000ed30(&local_18,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    lVar1 = ((longlong)param_2 - (longlong)local_10) / 6 +
            ((longlong)param_2 - (longlong)local_10 >> 0x3f);
    if (((longlong)local_18 - (longlong)param_1) / 0x18 < (lVar1 >> 2) - (lVar1 >> 0x3f)) {
      FUN_18000e9a0(param_1,local_18,param_3,param_4);
      param_1 = local_10;
    }
    else {
      FUN_18000e9a0(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar1 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}

/* Function: FUN_18000eb40 */
void FUN_18000eb40(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_res20;
  longlong local_28;
  longlong local_20;
  
  local_res20 = param_4;
  lVar7 = param_1 - param_3 >> 3;
  lVar9 = param_1 - param_2 >> 3;
  lVar5 = lVar9;
  lVar4 = lVar7;
  while (lVar8 = lVar5, lVar8 != 0) {
    lVar5 = lVar4 % lVar8;
    lVar4 = lVar8;
  }
  if ((lVar4 < lVar7) && (0 < lVar4)) {
    lVar5 = lVar4 * 8;
    do {
      lVar7 = param_1 - lVar5;
      param_5 = lVar7 + lVar9 * -8;
      if (param_5 == param_3) {
        local_res20 = param_1;
        plVar3 = &local_res20;
      }
      else {
        plVar3 = &param_5;
      }
      lVar8 = *plVar3;
      lVar6 = lVar7;
      do {
        lVar2 = lVar8;
        uVar1 = *(undefined8 *)(lVar6 + -8);
        *(undefined8 *)(lVar6 + -8) = *(undefined8 *)(lVar2 + -8);
        *(undefined8 *)(lVar2 + -8) = uVar1;
        lVar8 = lVar2 - param_3 >> 3;
        if (lVar9 < lVar8) {
          local_28 = lVar2 + lVar9 * -8;
          plVar3 = &local_28;
        }
        else {
          local_20 = param_1 + (lVar8 - lVar9) * 8;
          plVar3 = &local_20;
        }
        lVar8 = *plVar3;
        lVar6 = lVar2;
      } while (*plVar3 != lVar7);
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + -8;
    } while (0 < lVar4);
  }
  return;
}

/* Function: FUN_18000ec70 */
void FUN_18000ec70(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  lVar6 = (longlong)param_3 - (longlong)param_1 >> 3;
  lVar8 = param_2 - (longlong)param_1 >> 3;
  lVar10 = lVar6;
  lVar4 = lVar8;
  while (lVar4 != 0) {
    lVar5 = lVar10 % lVar4;
    lVar10 = lVar4;
    lVar4 = lVar5;
  }
  if ((lVar10 < lVar6) && (0 < lVar10)) {
    puVar7 = param_1 + lVar10;
    do {
      puVar3 = puVar7 + lVar8;
      puVar9 = puVar7;
      if (puVar7 + lVar8 == param_3) {
        puVar3 = param_1;
      }
      do {
        puVar2 = puVar3;
        uVar1 = *puVar9;
        *puVar9 = *puVar2;
        *puVar2 = uVar1;
        lVar4 = (longlong)param_3 - (longlong)puVar2 >> 3;
        if (lVar8 < lVar4) {
          puVar3 = puVar2 + lVar8;
        }
        else {
          puVar3 = param_1 + (lVar8 - lVar4);
        }
        puVar9 = puVar2;
      } while (puVar3 != puVar7);
      lVar10 = lVar10 + -1;
      puVar7 = puVar7 + -1;
    } while (0 < lVar10);
  }
  return;
}

/* Function: FUN_18000ed30 */
void FUN_18000ed30(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  
  puVar12 = param_2 + ((((longlong)param_3 - (longlong)param_2) / 0x18) / 2) * 6;
  FUN_18000eff0(param_2,puVar12,param_3 + -6,param_4);
  puVar16 = puVar12;
  while (puVar10 = puVar16, param_2 < puVar10) {
    puVar16 = puVar10 + -6;
    cVar9 = (*(code *)param_4)(puVar16,puVar10);
    if ((cVar9 != '\0') || (cVar9 = (*(code *)param_4)(puVar10,puVar16), cVar9 != '\0')) break;
  }
  do {
    puVar12 = puVar12 + 6;
    puVar15 = puVar12;
    puVar16 = puVar10;
    if (param_3 <= puVar12) break;
    cVar9 = (*(code *)param_4)(puVar12,puVar10);
    if ((cVar9 != '\0') || (cVar9 = (*(code *)param_4)(puVar10,puVar12), cVar9 != '\0')) break;
  } while( true );
LAB_18000ee00:
  puVar17 = puVar16;
  if (puVar15 < param_3) {
    puVar11 = puVar12;
    puVar13 = puVar12 + -6;
    do {
      cVar9 = (*(code *)param_4)(puVar10,puVar15);
      puVar12 = puVar11;
      puVar14 = puVar13;
      if (cVar9 == '\0') {
        cVar9 = (*(code *)param_4)(puVar15,puVar10);
        if (cVar9 != '\0') break;
        puVar14 = puVar13 + 6;
        puVar12 = puVar11 + 6;
        if (puVar11 != puVar15) {
          uVar2 = puVar15[1];
          uVar3 = puVar15[2];
          uVar4 = puVar15[3];
          uVar5 = *puVar14;
          uVar6 = puVar13[7];
          uVar7 = puVar13[8];
          uVar8 = puVar13[9];
          uVar1 = *(undefined8 *)(puVar13 + 10);
          *puVar14 = *puVar15;
          puVar13[7] = uVar2;
          puVar13[8] = uVar3;
          puVar13[9] = uVar4;
          *(undefined8 *)(puVar13 + 10) = *(undefined8 *)(puVar15 + 4);
          *puVar15 = uVar5;
          puVar15[1] = uVar6;
          puVar15[2] = uVar7;
          puVar15[3] = uVar8;
          *(undefined8 *)(puVar15 + 4) = uVar1;
        }
      }
      puVar15 = puVar15 + 6;
      puVar11 = puVar12;
      puVar13 = puVar14;
    } while (puVar15 < param_3);
  }
  do {
    if (puVar16 <= param_2) break;
    puVar13 = puVar17 + -6;
    cVar9 = (*(code *)param_4)(puVar13,puVar10);
    puVar11 = puVar10;
    if (cVar9 == '\0') {
      cVar9 = (*(code *)param_4)(puVar10,puVar13);
      if (cVar9 != '\0') break;
      puVar11 = puVar10 + -6;
      if (puVar11 != puVar13) {
        uVar2 = puVar17[-5];
        uVar3 = puVar17[-4];
        uVar4 = puVar17[-3];
        uVar5 = *puVar11;
        uVar6 = puVar10[-5];
        uVar7 = puVar10[-4];
        uVar8 = puVar10[-3];
        uVar1 = *(undefined8 *)(puVar10 + -2);
        *puVar11 = *puVar13;
        puVar10[-5] = uVar2;
        puVar10[-4] = uVar3;
        puVar10[-3] = uVar4;
        *(undefined8 *)(puVar10 + -2) = *(undefined8 *)(puVar17 + -2);
        *puVar13 = uVar5;
        puVar17[-5] = uVar6;
        puVar17[-4] = uVar7;
        puVar17[-3] = uVar8;
        *(undefined8 *)(puVar17 + -2) = uVar1;
      }
    }
    puVar16 = puVar16 + -6;
    puVar10 = puVar11;
    puVar17 = puVar13;
  } while( true );
  if (puVar16 == param_2) {
    if (puVar15 == param_3) {
      *param_1 = puVar10;
      param_1[1] = puVar12;
      return;
    }
    if (puVar12 != puVar15) {
      uVar2 = puVar12[1];
      uVar3 = puVar12[2];
      uVar4 = puVar12[3];
      uVar5 = *puVar10;
      uVar6 = puVar10[1];
      uVar7 = puVar10[2];
      uVar8 = puVar10[3];
      uVar1 = *(undefined8 *)(puVar10 + 4);
      *puVar10 = *puVar12;
      puVar10[1] = uVar2;
      puVar10[2] = uVar3;
      puVar10[3] = uVar4;
      *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar12 + 4);
      *puVar12 = uVar5;
      puVar12[1] = uVar6;
      puVar12[2] = uVar7;
      puVar12[3] = uVar8;
      *(undefined8 *)(puVar12 + 4) = uVar1;
    }
    uVar2 = puVar15[1];
    uVar3 = puVar15[2];
    uVar4 = puVar15[3];
    uVar5 = *puVar10;
    uVar6 = puVar10[1];
    uVar7 = puVar10[2];
    uVar8 = puVar10[3];
    uVar1 = *(undefined8 *)(puVar10 + 4);
    *puVar10 = *puVar15;
    puVar10[1] = uVar2;
    puVar10[2] = uVar3;
    puVar10[3] = uVar4;
    *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar15 + 4);
    *puVar15 = uVar5;
    puVar15[1] = uVar6;
    puVar15[2] = uVar7;
    puVar15[3] = uVar8;
    *(undefined8 *)(puVar15 + 4) = uVar1;
    puVar10 = puVar10 + 6;
    puVar12 = puVar12 + 6;
    puVar15 = puVar15 + 6;
  }
  else {
    puVar17 = puVar16 + -6;
    if (puVar15 == param_3) {
      puVar11 = puVar10 + -6;
      if (puVar17 != puVar11) {
        uVar2 = puVar10[-5];
        uVar3 = puVar10[-4];
        uVar4 = puVar10[-3];
        uVar5 = *puVar17;
        uVar6 = puVar16[-5];
        uVar7 = puVar16[-4];
        uVar8 = puVar16[-3];
        uVar1 = *(undefined8 *)(puVar16 + -2);
        *puVar17 = *puVar11;
        puVar16[-5] = uVar2;
        puVar16[-4] = uVar3;
        puVar16[-3] = uVar4;
        *(undefined8 *)(puVar16 + -2) = *(undefined8 *)(puVar10 + -2);
        *puVar11 = uVar5;
        puVar10[-5] = uVar6;
        puVar10[-4] = uVar7;
        puVar10[-3] = uVar8;
        *(undefined8 *)(puVar10 + -2) = uVar1;
      }
      uVar2 = puVar12[-5];
      uVar3 = puVar12[-4];
      uVar4 = puVar12[-3];
      uVar5 = *puVar11;
      uVar6 = puVar10[-5];
      uVar7 = puVar10[-4];
      uVar8 = puVar10[-3];
      uVar1 = *(undefined8 *)(puVar10 + -2);
      *puVar11 = puVar12[-6];
      puVar10[-5] = uVar2;
      puVar10[-4] = uVar3;
      puVar10[-3] = uVar4;
      *(undefined8 *)(puVar10 + -2) = *(undefined8 *)(puVar12 + -2);
      puVar12[-6] = uVar5;
      puVar12[-5] = uVar6;
      puVar12[-4] = uVar7;
      puVar12[-3] = uVar8;
      *(undefined8 *)(puVar12 + -2) = uVar1;
      puVar10 = puVar11;
      puVar12 = puVar12 + -6;
      puVar16 = puVar17;
    }
    else {
      uVar5 = *puVar15;
      uVar6 = puVar15[1];
      uVar7 = puVar15[2];
      uVar8 = puVar15[3];
      uVar1 = *(undefined8 *)(puVar15 + 4);
      uVar2 = puVar16[-5];
      uVar3 = puVar16[-4];
      uVar4 = puVar16[-3];
      *puVar15 = *puVar17;
      puVar15[1] = uVar2;
      puVar15[2] = uVar3;
      puVar15[3] = uVar4;
      *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(puVar16 + -2);
      *puVar17 = uVar5;
      puVar16[-5] = uVar6;
      puVar16[-4] = uVar7;
      puVar16[-3] = uVar8;
      *(undefined8 *)(puVar16 + -2) = uVar1;
      puVar15 = puVar15 + 6;
      puVar16 = puVar17;
    }
  }
  goto LAB_18000ee00;
}

/* Function: FUN_18000eff0 */
void FUN_18000eff0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  longlong lVar1;
  
  lVar1 = ((longlong)param_3 - (longlong)param_1) / 0x18;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_18000f500(param_1,param_1 + lVar1 * 6,param_1 + lVar1 * 0xc,param_4);
    FUN_18000f500(param_2 + lVar1 * -6,param_2,param_2 + lVar1 * 6,param_4);
    FUN_18000f500(param_3 + lVar1 * -0xc,param_3 + lVar1 * -6,param_3,param_4);
    FUN_18000f500(param_1 + lVar1 * 6,param_2,param_3 + lVar1 * -6,param_4);
    return;
  }
  FUN_18000f500(param_1,param_2,param_3,param_4);
  return;
}

/* Function: FUN_18000f0f0 */
void FUN_18000f0f0(longlong param_1,longlong param_2,undefined *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined auStack136 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack92;
  undefined4 uStack88;
  undefined4 uStack84;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180036000 ^ (ulonglong)auStack136;
  lVar8 = (param_2 - param_1) / 6 + (param_2 - param_1 >> 0x3f);
  lVar12 = (lVar8 >> 2) - (lVar8 >> 0x3f);
  lVar8 = lVar12 / 2;
  if (0 < lVar8) {
    lVar11 = lVar8 * 2 + 2;
    local_68 = param_1 + lVar8 * 0x18;
    do {
      local_60 = *(undefined4 *)(local_68 + -0x18);
      uStack92 = *(undefined4 *)(local_68 + -0x14);
      uStack88 = *(undefined4 *)(local_68 + -0x10);
      uStack84 = *(undefined4 *)(local_68 + -0xc);
      local_50 = *(undefined8 *)(local_68 + -8);
      local_68 = local_68 + -0x18;
      lVar11 = lVar11 + -2;
      lVar8 = lVar8 + -1;
      lVar1 = lVar11;
      lVar10 = lVar8;
      while (lVar9 = lVar1, lVar9 < lVar12) {
        lVar1 = param_1 + lVar9 * 0x18;
        cVar7 = (*(code *)param_3)(lVar1,lVar1 + -0x18);
        if (cVar7 != '\0') {
          lVar9 = lVar9 + -1;
        }
        puVar2 = (undefined4 *)(param_1 + lVar9 * 0x18);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        puVar3 = (undefined4 *)(param_1 + lVar10 * 0x18);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar3[2] = uVar5;
        puVar3[3] = uVar6;
        *(undefined8 *)(param_1 + 0x10 + lVar10 * 0x18) =
             *(undefined8 *)(param_1 + 0x10 + lVar9 * 0x18);
        lVar10 = lVar9;
        lVar1 = lVar9 * 2 + 2;
      }
      lVar1 = lVar10;
      if (lVar9 == lVar12) {
        lVar1 = lVar12 + -1;
        puVar3 = (undefined4 *)(param_1 + -0x18 + lVar12 * 0x18);
        uVar4 = puVar3[1];
        uVar5 = puVar3[2];
        uVar6 = puVar3[3];
        puVar2 = (undefined4 *)(param_1 + lVar10 * 0x18);
        *puVar2 = *puVar3;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        *(undefined8 *)(param_1 + 0x10 + lVar10 * 0x18) =
             *(undefined8 *)(param_1 + -8 + lVar12 * 0x18);
      }
      while (lVar8 < lVar1) {
        lVar10 = (lVar1 + -1) / 2;
        puVar2 = (undefined4 *)(param_1 + lVar10 * 0x18);
        cVar7 = (*(code *)param_3)(puVar2,&local_60);
        if (cVar7 == '\0') break;
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        puVar3 = (undefined4 *)(param_1 + lVar1 * 0x18);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar3[2] = uVar5;
        puVar3[3] = uVar6;
        *(undefined8 *)(param_1 + 0x10 + lVar1 * 0x18) = *(undefined8 *)(puVar2 + 4);
        lVar1 = lVar10;
      }
      puVar2 = (undefined4 *)(param_1 + lVar1 * 0x18);
      *puVar2 = local_60;
      puVar2[1] = uStack92;
      puVar2[2] = uStack88;
      puVar2[3] = uStack84;
      *(undefined8 *)(param_1 + 0x10 + lVar1 * 0x18) = local_50;
    } while (0 < lVar8);
  }
  FUN_18000f730(local_48 ^ (ulonglong)auStack136);
  return;
}

/* Function: FUN_18000f2c0 */
void FUN_18000f2c0(undefined4 *param_1,longlong param_2,undefined *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined auStackY104 [32];
  undefined4 local_38;
  undefined4 uStack52;
  undefined4 uStack48;
  undefined4 uStack44;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180036000 ^ (ulonglong)auStackY104;
  lVar5 = param_2 - (longlong)param_1;
  if (1 < lVar5 / 0x18) {
    puVar4 = (undefined4 *)(param_2 + -0x18);
    do {
      local_38 = *puVar4;
      uStack52 = puVar4[1];
      uStack48 = puVar4[2];
      uStack44 = puVar4[3];
      local_28 = *(undefined8 *)(puVar4 + 4);
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      *puVar4 = *param_1;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_1 + 4);
      FUN_18000f5c0((longlong)param_1,0,(lVar5 + -0x18) / 0x18,&local_38,param_3);
      puVar4 = puVar4 + -6;
      lVar5 = (longlong)puVar4 + (0x18 - (longlong)param_1);
    } while (1 < lVar5 / 0x18);
  }
  FUN_18000f730(local_20 ^ (ulonglong)auStackY104);
  return;
}

/* Function: FUN_18000f3c0 */
void FUN_18000f3c0(undefined4 *param_1,undefined4 *param_2,undefined *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined auStack104 [32];
  undefined4 local_48;
  undefined4 uStack68;
  undefined4 uStack64;
  undefined4 uStack60;
  undefined8 local_38;
  ulonglong local_30;
  
  if (param_1 != param_2) {
    local_30 = DAT_180036000 ^ (ulonglong)auStack104;
    puVar8 = param_1;
    for (puVar7 = param_1 + 6; puVar7 != param_2; puVar7 = puVar7 + 6) {
      local_48 = *puVar7;
      uStack68 = puVar7[1];
      uStack64 = puVar7[2];
      uStack60 = puVar7[3];
      local_38 = *(undefined8 *)(puVar7 + 4);
      cVar6 = (*(code *)param_3)(&local_48,param_1);
      puVar4 = puVar7;
      if (cVar6 == '\0') {
        cVar6 = (*(code *)param_3)(&local_48,puVar8);
        puVar5 = puVar8;
        while (cVar6 != '\0') {
          uVar1 = puVar5[1];
          uVar2 = puVar5[2];
          uVar3 = puVar5[3];
          *puVar4 = *puVar5;
          puVar4[1] = uVar1;
          puVar4[2] = uVar2;
          puVar4[3] = uVar3;
          *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar5 + 4);
          cVar6 = (*(code *)param_3)(&local_48,puVar5 + -6);
          puVar4 = puVar5;
          puVar5 = puVar5 + -6;
        }
        *puVar4 = local_48;
        puVar4[1] = uStack68;
        puVar4[2] = uStack64;
        puVar4[3] = uStack60;
        *(undefined8 *)(puVar4 + 4) = local_38;
      }
      else {
        for (; param_1 != puVar4; puVar4 = puVar4 + -6) {
          *puVar4 = puVar4[-6];
          puVar4[1] = puVar4[-5];
          puVar4[2] = puVar4[-4];
          puVar4[3] = puVar4[-3];
          *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar4 + -2);
        }
        *param_1 = local_48;
        param_1[1] = uStack68;
        param_1[2] = uStack64;
        param_1[3] = uStack60;
        *(undefined8 *)(param_1 + 4) = local_38;
      }
      puVar8 = puVar8 + 6;
    }
    FUN_18000f730(local_30 ^ (ulonglong)auStack104);
  }
  return;
}

/* Function: FUN_18000f500 */
void FUN_18000f500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  
  cVar9 = (*(code *)param_4)(param_2,param_1);
  if (cVar9 != '\0') {
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    uVar1 = *(undefined8 *)(param_2 + 4);
    *param_2 = *param_1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
    *param_1 = uVar5;
    param_1[1] = uVar6;
    param_1[2] = uVar7;
    param_1[3] = uVar8;
    *(undefined8 *)(param_1 + 4) = uVar1;
  }
  cVar9 = (*(code *)param_4)(param_3,param_2);
  if (cVar9 != '\0') {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar1 = *(undefined8 *)(param_3 + 4);
    *param_3 = *param_2;
    param_3[1] = uVar2;
    param_3[2] = uVar3;
    param_3[3] = uVar4;
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
    *param_2 = uVar5;
    param_2[1] = uVar6;
    param_2[2] = uVar7;
    param_2[3] = uVar8;
    *(undefined8 *)(param_2 + 4) = uVar1;
    cVar9 = (*(code *)param_4)(param_2,param_1);
    if (cVar9 != '\0') {
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      uVar5 = *param_2;
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      uVar1 = *(undefined8 *)(param_2 + 4);
      *param_2 = *param_1;
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
      *param_1 = uVar5;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
      *(undefined8 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

/* Function: FUN_18000f5c0 */
void FUN_18000f5c0(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  undefined *param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar4 = param_2 * 2;
  lVar10 = param_2;
  while (lVar9 = lVar4 + 2, lVar9 < param_3) {
    lVar1 = param_1 + lVar9 * 0x18;
    cVar8 = (*(code *)param_5)(lVar1,lVar1 + -0x18);
    if (cVar8 != '\0') {
      lVar9 = lVar4 + 1;
    }
    puVar2 = (undefined4 *)(param_1 + lVar9 * 0x18);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (undefined4 *)(param_1 + lVar10 * 0x18);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    *(undefined8 *)(param_1 + 0x10 + lVar10 * 0x18) = *(undefined8 *)(param_1 + 0x10 + lVar9 * 0x18)
    ;
    lVar10 = lVar9;
    lVar4 = lVar9 * 2;
  }
  lVar4 = lVar10;
  if (lVar9 == param_3) {
    lVar4 = param_3 + -1;
    puVar3 = (undefined4 *)(param_1 + -0x18 + param_3 * 0x18);
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    puVar2 = (undefined4 *)(param_1 + lVar10 * 0x18);
    *puVar2 = *puVar3;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    *(undefined8 *)(param_1 + 0x10 + lVar10 * 0x18) = *(undefined8 *)(param_1 + -8 + param_3 * 0x18)
    ;
  }
  while (param_2 < lVar4) {
    lVar10 = (lVar4 + -1) / 2;
    puVar2 = (undefined4 *)(param_1 + lVar10 * 0x18);
    cVar8 = (*(code *)param_5)(puVar2,param_4);
    if (cVar8 == '\0') break;
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (undefined4 *)(param_1 + lVar4 * 0x18);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    *(undefined8 *)(param_1 + 0x10 + lVar4 * 0x18) = *(undefined8 *)(puVar2 + 4);
    lVar4 = lVar10;
  }
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  puVar2 = (undefined4 *)(param_1 + lVar4 * 0x18);
  *puVar2 = *param_4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  *(undefined8 *)(param_1 + 0x10 + lVar4 * 0x18) = *(undefined8 *)(param_4 + 4);
  return;
}

/* Function: FUN_18000f710 */
undefined8 FUN_18000f710(void)

{
  return 1;
}

/* Function: FUN_18000f730 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000f730(longlong param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined *puVar3;
  undefined auStack56 [8];
  undefined auStack48 [48];
  
  if ((param_1 == DAT_180036000) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  puVar3 = auStack56;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack48;
  }
  *(undefined8 *)(puVar3 + -8) = 0x180010f96;
  FUN_180016dfc((PCONTEXT)&DAT_180037d80);
  _DAT_180037cf0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180037e18 = puVar3 + 0x40;
  _DAT_180037e00 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180037ce0 = 0xc0000409;
  _DAT_180037ce4 = 1;
  _DAT_180037cf8 = 1;
  DAT_180037d00 = 2;
  *(longlong *)(puVar3 + 0x20) = DAT_180036000;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180036008;
  *(undefined8 *)(puVar3 + -8) = 0x180011038;
  DAT_180037e78 = _DAT_180037cf0;
  FUN_180010f20((_EXCEPTION_POINTERS *)&PTR_DAT_1800273d0);
  return;
}

/* Function: free */
/* Library Function - Single Match
    free
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void free(void *_Memory)

{
  BOOL BVar1;
  DWORD DVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if ((_Memory != (void *)0x0) && (BVar1 = HeapFree(DAT_180038258,0,_Memory), BVar1 == 0)) {
    puVar4 = __doserrno();
    DVar2 = GetLastError();
    uVar3 = FUN_1800110d0(DVar2);
    *puVar4 = uVar3;
  }
  return;
}

/* Function: malloc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    malloc
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void * malloc(size_t _Size)

{
  int iVar1;
  void *pvVar2;
  ulong *puVar3;
  SIZE_T dwBytes;
  
  if (_Size < 0xffffffffffffffe1) {
    dwBytes = 1;
    if (_Size != 0) {
      dwBytes = _Size;
    }
    do {
      if (DAT_180038258 == (HANDLE)0x0) {
        _FF_MSGBANNER();
        FUN_180011814(0x1e);
        __crtExitProcess(0xff);
      }
      pvVar2 = HeapAlloc(DAT_180038258,0,dwBytes);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      if (_DAT_1800388f8 == 0) {
        puVar3 = __doserrno();
        *puVar3 = 0xc;
        break;
      }
      iVar1 = _callnewh(_Size);
    } while (iVar1 != 0);
    puVar3 = __doserrno();
    *puVar3 = 0xc;
  }
  else {
    _callnewh(_Size);
    puVar3 = __doserrno();
    *puVar3 = 0xc;
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}

/* Function: FUN_18000f860 */
undefined8 * FUN_18000f860(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined (*pauVar9) [16];
  undefined4 *puVar10;
  undefined (*pauVar11) [16];
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  if (0x10 < param_3) {
    lVar12 = (longlong)param_2 - (longlong)param_1;
    if ((param_2 < param_1) && ((longlong)param_1 < (longlong)((longlong)param_2 + param_3))) {
      if ((DAT_1800388fc >> 2 & 1) != 0) {
        if (0x20 < param_3) {
          uVar13 = (longlong)param_1 + param_3;
          if ((uVar13 & 0xf) == 0) {
            pauVar9 = (undefined (*) [16])(uVar13 - 0x10);
            puVar1 = (undefined4 *)(lVar12 + (longlong)pauVar9);
            uVar15 = *puVar1;
            uVar16 = puVar1[1];
            uVar17 = puVar1[2];
            uVar18 = puVar1[3];
            uVar13 = param_3 - 0x10;
          }
          else {
            puVar10 = (undefined4 *)(uVar13 - 0x10);
            puVar1 = (undefined4 *)(lVar12 + (longlong)puVar10);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            pauVar9 = (undefined (*) [16])((ulonglong)puVar10 & 0xfffffffffffffff0);
            puVar2 = (undefined4 *)(lVar12 + (longlong)pauVar9);
            uVar15 = *puVar2;
            uVar16 = puVar2[1];
            uVar17 = puVar2[2];
            uVar18 = puVar2[3];
            *puVar10 = *puVar1;
            *(undefined4 *)(uVar13 - 0xc) = uVar4;
            *(undefined4 *)(uVar13 - 8) = uVar5;
            *(undefined4 *)(uVar13 - 4) = uVar6;
            uVar13 = (longlong)pauVar9 - (longlong)param_1;
          }
          uVar14 = uVar13 >> 7;
          if (uVar14 != 0) {
            *pauVar9 = CONCAT412(uVar18,CONCAT48(uVar17,CONCAT44(uVar16,uVar15)));
            pauVar11 = pauVar9;
            while( true ) {
              puVar1 = (undefined4 *)(lVar12 + -0x10 + (longlong)pauVar11);
              uVar15 = puVar1[1];
              uVar16 = puVar1[2];
              uVar17 = puVar1[3];
              puVar2 = (undefined4 *)(lVar12 + -0x20 + (longlong)pauVar11);
              uVar18 = *puVar2;
              uVar4 = puVar2[1];
              uVar5 = puVar2[2];
              uVar6 = puVar2[3];
              pauVar9 = pauVar11[-8];
              *(undefined4 *)pauVar11[-1] = *puVar1;
              *(undefined4 *)(pauVar11[-1] + 4) = uVar15;
              *(undefined4 *)(pauVar11[-1] + 8) = uVar16;
              *(undefined4 *)(pauVar11[-1] + 0xc) = uVar17;
              *(undefined4 *)pauVar11[-2] = uVar18;
              *(undefined4 *)(pauVar11[-2] + 4) = uVar4;
              *(undefined4 *)(pauVar11[-2] + 8) = uVar5;
              *(undefined4 *)(pauVar11[-2] + 0xc) = uVar6;
              puVar1 = (undefined4 *)(lVar12 + 0x50 + (longlong)pauVar9);
              uVar15 = puVar1[1];
              uVar16 = puVar1[2];
              uVar17 = puVar1[3];
              puVar2 = (undefined4 *)(lVar12 + 0x40 + (longlong)pauVar9);
              uVar18 = *puVar2;
              uVar4 = puVar2[1];
              uVar5 = puVar2[2];
              uVar6 = puVar2[3];
              uVar14 = uVar14 - 1;
              *(undefined4 *)pauVar11[-3] = *puVar1;
              *(undefined4 *)(pauVar11[-3] + 4) = uVar15;
              *(undefined4 *)(pauVar11[-3] + 8) = uVar16;
              *(undefined4 *)(pauVar11[-3] + 0xc) = uVar17;
              *(undefined4 *)pauVar11[-4] = uVar18;
              *(undefined4 *)(pauVar11[-4] + 4) = uVar4;
              *(undefined4 *)(pauVar11[-4] + 8) = uVar5;
              *(undefined4 *)(pauVar11[-4] + 0xc) = uVar6;
              puVar1 = (undefined4 *)(lVar12 + 0x30 + (longlong)pauVar9);
              uVar15 = puVar1[1];
              uVar16 = puVar1[2];
              uVar17 = puVar1[3];
              puVar2 = (undefined4 *)(lVar12 + 0x20 + (longlong)pauVar9);
              uVar18 = *puVar2;
              uVar4 = puVar2[1];
              uVar5 = puVar2[2];
              uVar6 = puVar2[3];
              *(undefined4 *)pauVar11[-5] = *puVar1;
              *(undefined4 *)(pauVar11[-5] + 4) = uVar15;
              *(undefined4 *)(pauVar11[-5] + 8) = uVar16;
              *(undefined4 *)(pauVar11[-5] + 0xc) = uVar17;
              *(undefined4 *)pauVar11[-6] = uVar18;
              *(undefined4 *)(pauVar11[-6] + 4) = uVar4;
              *(undefined4 *)(pauVar11[-6] + 8) = uVar5;
              *(undefined4 *)(pauVar11[-6] + 0xc) = uVar6;
              puVar2 = (undefined4 *)(lVar12 + 0x10 + (longlong)pauVar9);
              uVar4 = puVar2[1];
              uVar5 = puVar2[2];
              uVar6 = puVar2[3];
              puVar1 = (undefined4 *)(lVar12 + (longlong)pauVar9);
              uVar15 = *puVar1;
              uVar16 = puVar1[1];
              uVar17 = puVar1[2];
              uVar18 = puVar1[3];
              if (uVar14 == 0) break;
              *(undefined4 *)pauVar11[-7] = *puVar2;
              *(undefined4 *)(pauVar11[-7] + 4) = uVar4;
              *(undefined4 *)(pauVar11[-7] + 8) = uVar5;
              *(undefined4 *)(pauVar11[-7] + 0xc) = uVar6;
              *(undefined4 *)*pauVar9 = uVar15;
              *(undefined4 *)(pauVar11[-8] + 4) = uVar16;
              *(undefined4 *)(pauVar11[-8] + 8) = uVar17;
              *(undefined4 *)(pauVar11[-8] + 0xc) = uVar18;
              pauVar11 = pauVar9;
            }
            *(undefined4 *)pauVar11[-7] = *puVar2;
            *(undefined4 *)(pauVar11[-7] + 4) = uVar4;
            *(undefined4 *)(pauVar11[-7] + 8) = uVar5;
            *(undefined4 *)(pauVar11[-7] + 0xc) = uVar6;
            uVar13 = uVar13 & 0x7f;
          }
          for (uVar14 = uVar13 >> 4; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pauVar9 = CONCAT412(uVar18,CONCAT48(uVar17,CONCAT44(uVar16,uVar15)));
            pauVar9 = pauVar9[-1];
            puVar1 = (undefined4 *)(lVar12 + (longlong)pauVar9);
            uVar15 = *puVar1;
            uVar16 = puVar1[1];
            uVar17 = puVar1[2];
            uVar18 = puVar1[3];
          }
          if ((uVar13 & 0xf) != 0) {
            uVar4 = *(undefined4 *)((longlong)param_2 + 4);
            uVar5 = *(undefined4 *)(param_2 + 1);
            uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
            *(undefined4 *)param_1 = *(undefined4 *)param_2;
            *(undefined4 *)((longlong)param_1 + 4) = uVar4;
            *(undefined4 *)(param_1 + 1) = uVar5;
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
          }
          *pauVar9 = CONCAT412(uVar18,CONCAT48(uVar17,CONCAT44(uVar16,uVar15)));
          return param_1;
        }
LAB_18000fbf0:
        uVar15 = *(undefined4 *)((longlong)param_2 + 4);
        uVar16 = *(undefined4 *)(param_2 + 1);
        uVar17 = *(undefined4 *)((longlong)param_2 + 0xc);
        puVar2 = (undefined4 *)((param_3 - 0x10) + (longlong)param_1);
        puVar1 = (undefined4 *)(lVar12 + (longlong)puVar2);
        uVar18 = *puVar1;
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        *(undefined4 *)param_1 = *(undefined4 *)param_2;
        *(undefined4 *)((longlong)param_1 + 4) = uVar15;
        *(undefined4 *)(param_1 + 1) = uVar16;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar17;
        *puVar2 = uVar18;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        return param_1;
      }
      puVar7 = (undefined8 *)((longlong)param_1 + param_3);
      if (((ulonglong)puVar7 & 7) != 0) {
        if (((ulonglong)puVar7 & 1) != 0) {
          puVar7 = (undefined8 *)((longlong)puVar7 + -1);
          param_3 = param_3 - 1;
          *(undefined *)puVar7 = *(undefined *)(lVar12 + (longlong)puVar7);
        }
        if (((ulonglong)puVar7 & 2) != 0) {
          puVar7 = (undefined8 *)((longlong)puVar7 + -2);
          param_3 = param_3 - 2;
          *(undefined2 *)puVar7 = *(undefined2 *)(lVar12 + (longlong)puVar7);
        }
        if (((ulonglong)puVar7 & 4) != 0) {
          puVar7 = (undefined8 *)((longlong)puVar7 + -4);
          param_3 = param_3 - 4;
          *(undefined4 *)puVar7 = *(undefined4 *)(lVar12 + (longlong)puVar7);
        }
      }
      uVar13 = param_3 >> 5;
      puVar8 = puVar7;
      if (uVar13 != 0) {
        do {
          uVar3 = *(undefined8 *)(lVar12 + -0x10 + (longlong)puVar8);
          puVar7 = puVar8 + -4;
          puVar8[-1] = *(undefined8 *)(lVar12 + -8 + (longlong)puVar8);
          puVar8[-2] = uVar3;
          uVar3 = *(undefined8 *)(lVar12 + (longlong)puVar7);
          uVar13 = uVar13 - 1;
          puVar8[-3] = *(undefined8 *)(lVar12 + 8 + (longlong)puVar7);
          *puVar7 = uVar3;
          puVar8 = puVar7;
        } while (uVar13 != 0);
        param_3 = param_3 & 0x1f;
      }
      uVar13 = param_3 >> 3;
      if (uVar13 != 0) {
        do {
          puVar7 = puVar7 + -1;
          uVar13 = uVar13 - 1;
          *puVar7 = *(undefined8 *)(lVar12 + (longlong)puVar7);
        } while (uVar13 != 0);
        param_3 = param_3 & 7;
      }
      if (param_3 == 0) {
        return param_1;
      }
      param_1 = (undefined8 *)((longlong)puVar7 - param_3);
      param_2 = (undefined8 *)(lVar12 + (longlong)param_1);
    }
    else {
      puVar7 = param_1;
      if ((DAT_1800388fc >> 1 & 1) != 0) {
        for (; param_3 != 0; param_3 = param_3 - 1) {
          *(undefined *)puVar7 = *(undefined *)param_2;
          param_2 = (undefined8 *)((longlong)param_2 + 1);
          puVar7 = (undefined8 *)((longlong)puVar7 + 1);
        }
        return param_1;
      }
      if ((DAT_1800388fc >> 2 & 1) != 0) {
        if (0x20 < param_3) {
          if (((ulonglong)param_1 & 0xf) == 0) {
            puVar1 = (undefined4 *)(lVar12 + (longlong)param_1);
            uVar15 = *puVar1;
            uVar16 = puVar1[1];
            uVar17 = puVar1[2];
            uVar18 = puVar1[3];
            puVar7 = param_1 + 2;
            uVar13 = param_3 - 0x10;
          }
          else {
            puVar1 = (undefined4 *)(lVar12 + (longlong)param_1);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            puVar7 = (undefined8 *)((ulonglong)(param_1 + 4) & 0xfffffffffffffff0);
            puVar2 = (undefined4 *)(lVar12 + -0x10 + (longlong)puVar7);
            uVar15 = *puVar2;
            uVar16 = puVar2[1];
            uVar17 = puVar2[2];
            uVar18 = puVar2[3];
            *(undefined4 *)param_1 = *puVar1;
            *(undefined4 *)((longlong)param_1 + 4) = uVar4;
            *(undefined4 *)(param_1 + 1) = uVar5;
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
            uVar13 = param_3 - ((longlong)puVar7 - (longlong)param_1);
          }
          uVar14 = uVar13 >> 7;
          if (uVar14 != 0) {
            *(undefined (*) [16])(puVar7 + -2) =
                 CONCAT412(uVar18,CONCAT48(uVar17,CONCAT44(uVar16,uVar15)));
            puVar8 = puVar7;
            while( true ) {
              puVar1 = (undefined4 *)(lVar12 + (longlong)puVar8);
              uVar15 = puVar1[1];
              uVar16 = puVar1[2];
              uVar17 = puVar1[3];
              puVar2 = (undefined4 *)(lVar12 + 0x10 + (longlong)puVar8);
              uVar18 = *puVar2;
              uVar4 = puVar2[1];
              uVar5 = puVar2[2];
              uVar6 = puVar2[3];
              puVar7 = puVar8 + 0x10;
              *(undefined4 *)puVar8 = *puVar1;
              *(undefined4 *)((longlong)puVar8 + 4) = uVar15;
              *(undefined4 *)(puVar8 + 1) = uVar16;
              *(undefined4 *)((longlong)puVar8 + 0xc) = uVar17;
              *(undefined4 *)(puVar8 + 2) = uVar18;
              *(undefined4 *)((longlong)puVar8 + 0x14) = uVar4;
              *(undefined4 *)(puVar8 + 3) = uVar5;
              *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar6;
              puVar1 = (undefined4 *)(lVar12 + -0x60 + (longlong)puVar7);
              uVar15 = puVar1[1];
              uVar16 = puVar1[2];
              uVar17 = puVar1[3];
              puVar2 = (undefined4 *)(lVar12 + -0x50 + (longlong)puVar7);
              uVar18 = *puVar2;
              uVar4 = puVar2[1];
              uVar5 = puVar2[2];
              uVar6 = puVar2[3];
              uVar14 = uVar14 - 1;
              *(undefined4 *)(puVar8 + 4) = *puVar1;
              *(undefined4 *)((longlong)puVar8 + 0x24) = uVar15;
              *(undefined4 *)(puVar8 + 5) = uVar16;
              *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar17;
              *(undefined4 *)(puVar8 + 6) = uVar18;
              *(undefined4 *)((longlong)puVar8 + 0x34) = uVar4;
              *(undefined4 *)(puVar8 + 7) = uVar5;
              *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar6;
              puVar1 = (undefined4 *)(lVar12 + -0x40 + (longlong)puVar7);
              uVar15 = puVar1[1];
              uVar16 = puVar1[2];
              uVar17 = puVar1[3];
              puVar2 = (undefined4 *)(lVar12 + -0x30 + (longlong)puVar7);
              uVar18 = *puVar2;
              uVar4 = puVar2[1];
              uVar5 = puVar2[2];
              uVar6 = puVar2[3];
              *(undefined4 *)(puVar8 + 8) = *puVar1;
              *(undefined4 *)((longlong)puVar8 + 0x44) = uVar15;
              *(undefined4 *)(puVar8 + 9) = uVar16;
              *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar17;
              *(undefined4 *)(puVar8 + 10) = uVar18;
              *(undefined4 *)((longlong)puVar8 + 0x54) = uVar4;
              *(undefined4 *)(puVar8 + 0xb) = uVar5;
              *(undefined4 *)((longlong)puVar8 + 0x5c) = uVar6;
              puVar1 = (undefined4 *)(lVar12 + -0x20 + (longlong)puVar7);
              uVar4 = puVar1[1];
              uVar5 = puVar1[2];
              uVar6 = puVar1[3];
              puVar2 = (undefined4 *)(lVar12 + -0x10 + (longlong)puVar7);
              uVar15 = *puVar2;
              uVar16 = puVar2[1];
              uVar17 = puVar2[2];
              uVar18 = puVar2[3];
              if (uVar14 == 0) break;
              *(undefined4 *)(puVar8 + 0xc) = *puVar1;
              *(undefined4 *)((longlong)puVar8 + 100) = uVar4;
              *(undefined4 *)(puVar8 + 0xd) = uVar5;
              *(undefined4 *)((longlong)puVar8 + 0x6c) = uVar6;
              *(undefined4 *)(puVar8 + 0xe) = uVar15;
              *(undefined4 *)((longlong)puVar8 + 0x74) = uVar16;
              *(undefined4 *)(puVar8 + 0xf) = uVar17;
              *(undefined4 *)((longlong)puVar8 + 0x7c) = uVar18;
              puVar8 = puVar7;
            }
            *(undefined4 *)(puVar8 + 0xc) = *puVar1;
            *(undefined4 *)((longlong)puVar8 + 100) = uVar4;
            *(undefined4 *)(puVar8 + 0xd) = uVar5;
            *(undefined4 *)((longlong)puVar8 + 0x6c) = uVar6;
            uVar13 = uVar13 & 0x7f;
          }
          for (uVar14 = uVar13 >> 4; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined (*) [16])(puVar7 + -2) =
                 CONCAT412(uVar18,CONCAT48(uVar17,CONCAT44(uVar16,uVar15)));
            puVar1 = (undefined4 *)(lVar12 + (longlong)puVar7);
            uVar15 = *puVar1;
            uVar16 = puVar1[1];
            uVar17 = puVar1[2];
            uVar18 = puVar1[3];
            puVar7 = puVar7 + 2;
          }
          uVar13 = uVar13 & 0xf;
          if (uVar13 != 0) {
            puVar1 = (undefined4 *)((longlong)puVar7 + lVar12 + -0x10 + uVar13);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(undefined4 *)((longlong)puVar7 + (uVar13 - 0x10)) = *puVar1;
            *(undefined4 *)((longlong)puVar7 + (uVar13 - 0xc)) = uVar4;
            *(undefined4 *)((longlong)puVar7 + (uVar13 - 8)) = uVar5;
            *(undefined4 *)((longlong)puVar7 + (uVar13 - 4)) = uVar6;
          }
          *(undefined (*) [16])(puVar7 + -2) =
               CONCAT412(uVar18,CONCAT48(uVar17,CONCAT44(uVar16,uVar15)));
          return param_1;
        }
        goto LAB_18000fbf0;
      }
      if (((ulonglong)param_1 & 7) != 0) {
        if (((ulonglong)param_1 & 1) != 0) {
          param_3 = param_3 - 1;
          *(undefined *)param_1 = *(undefined *)(lVar12 + (longlong)param_1);
          puVar7 = (undefined8 *)((longlong)param_1 + 1);
        }
        if (((ulonglong)puVar7 & 2) != 0) {
          param_3 = param_3 - 2;
          *(undefined2 *)puVar7 = *(undefined2 *)(lVar12 + (longlong)puVar7);
          puVar7 = (undefined8 *)((longlong)puVar7 + 2);
        }
        if (((ulonglong)puVar7 & 4) != 0) {
          param_3 = param_3 - 4;
          *(undefined4 *)puVar7 = *(undefined4 *)(lVar12 + (longlong)puVar7);
          puVar7 = (undefined8 *)((longlong)puVar7 + 4);
        }
      }
      uVar13 = param_3 >> 5;
      puVar8 = puVar7;
      if (uVar13 != 0) {
        do {
          uVar3 = *(undefined8 *)(lVar12 + 8 + (longlong)puVar8);
          puVar7 = puVar8 + 4;
          *puVar8 = *(undefined8 *)(lVar12 + (longlong)puVar8);
          puVar8[1] = uVar3;
          uVar3 = *(undefined8 *)(lVar12 + -8 + (longlong)puVar7);
          uVar13 = uVar13 - 1;
          puVar8[2] = *(undefined8 *)(lVar12 + -0x10 + (longlong)puVar7);
          puVar8[3] = uVar3;
          puVar8 = puVar7;
        } while (uVar13 != 0);
        param_3 = param_3 & 0x1f;
      }
      uVar13 = param_3 >> 3;
      if (uVar13 != 0) {
        do {
          *puVar7 = *(undefined8 *)(lVar12 + (longlong)puVar7);
          puVar7 = puVar7 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        param_3 = param_3 & 7;
      }
      if (param_3 == 0) {
        return param_1;
      }
      param_2 = (undefined8 *)(lVar12 + (longlong)puVar7);
      param_1 = puVar7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018000f93e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar7 = (undefined8 *)
           (*(code *)((ulonglong)*(uint *)(&DAT_18000f940 + param_3 * 4) + 0x180000000))
                     (param_1,param_2);
  return puVar7;
}

/* Function: FUN_18000fdc8 */
ulonglong FUN_18000fdc8(undefined *param_1,char *param_2,ulonglong param_3,longlong param_4,
                       undefined8 param_5,undefined8 param_6)

{
  ulong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined local_48 [8];
  int local_40;
  char *local_38;
  int local_30;
  
  local_48 = (char *)0x0;
  FUN_180012b90((undefined (*) [16])&local_40,0,0x28);
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (char *)0x0)))) {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_180011d8c();
    uVar2 = 0xffffffff;
  }
  else {
    local_40 = (int)param_3;
    if (0x7fffffff < param_3) {
      local_40 = 0x7fffffff;
    }
    local_30 = 0x42;
    local_48 = param_2;
    local_38 = param_2;
    uVar2 = (*(code *)param_1)(local_48,param_4,param_5,param_6);
    if (param_2 != (char *)0x0) {
      if (-1 < (int)uVar2) {
        local_40 = local_40 + -1;
        if (-1 < local_40) {
          *local_48 = '\0';
          return uVar2 & 0xffffffff;
        }
        uVar3 = FUN_180011de8(0,(FILE *)local_48);
        if ((int)uVar3 != -1) {
          return uVar2 & 0xffffffff;
        }
      }
      param_2[param_3 - 1] = '\0';
      uVar2 = (ulonglong)((-1 < local_40) - 2);
    }
  }
  return uVar2;
}

/* Function: FUN_18000feb0 */
ulonglong FUN_18000feb0(char *param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5)

{
  ulonglong uVar1;
  ulong *puVar2;
  
  if (((param_3 == 0) || (param_1 == (char *)0x0)) || (param_2 == 0)) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
  }
  else {
    uVar1 = FUN_18000fdc8(FUN_18001201c,param_1,param_2,param_3,param_4,param_5);
    if ((int)uVar1 < 0) {
      *param_1 = '\0';
    }
    if ((int)uVar1 != -2) {
      return uVar1;
    }
    puVar2 = __doserrno();
    *puVar2 = 0x22;
  }
  FUN_180011d8c();
  return 0xffffffff;
}

/* Function: FUN_18000ff20 */
void FUN_18000ff20(char *param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  FUN_18000feb0(param_1,param_2,param_3,0,param_4);
  return;
}

/* Function: FID_conflict:_rmdir */
/* Library Function - Multiple Matches With Different Base Names
    _rmdir
    remove
   
   Library: Visual Studio 2012 Release */

int FID_conflict__rmdir(char *_Path)

{
  int iVar1;
  undefined8 uVar2;
  wchar_t *local_res8 [4];
  
  local_res8[0] = (wchar_t *)0x0;
  if ((_Path == (char *)0x0) || (uVar2 = FUN_180011188(_Path,local_res8), (int)uVar2 != 0)) {
    iVar1 = FID_conflict__wrmdir(local_res8[0]);
    free(local_res8[0]);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

/* Function: FUN_18000ff80 */
undefined8 * FUN_18000ff80(LPCSTR param_1,char *param_2,int param_3)

{
  ulong *puVar1;
  FILE *_File;
  undefined8 *puVar2;
  undefined auStack56 [32];
  undefined *local_18;
  
  local_18 = auStack56;
  if (((param_1 == (LPCSTR)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    local_18 = auStack56;
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_180011d8c();
  }
  else {
    _File = (FILE *)FUN_180012fc8();
    if (_File != (FILE *)0x0) {
      if (*param_1 == '\0') {
        puVar1 = __doserrno();
        *puVar1 = 0x16;
        FUN_1800135b0(local_18,(PVOID)0x18001001c);
        return (undefined8 *)0x0;
      }
      puVar2 = FUN_180013100(param_1,param_2,param_3,(undefined8 *)_File);
      _unlock_file(_File);
      return puVar2;
    }
    puVar1 = __doserrno();
    *puVar1 = 0x18;
  }
  return (undefined8 *)0x0;
}

/* Function: FUN_180010058 */
ulong FUN_180010058(undefined8 *param_1,LPCSTR param_2,char *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = __doserrno();
    uVar3 = 0x16;
    *puVar1 = 0x16;
    FUN_180011d8c();
  }
  else {
    puVar2 = FUN_18000ff80(param_2,param_3,0x80);
    *param_1 = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = __doserrno();
      uVar3 = *puVar1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

/* Function: FUN_1800100ac */
ulonglong FUN_1800100ac(undefined (*param_1) [16],ulonglong param_2,ulonglong param_3,
                       ulonglong param_4,FILE *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined (*pauVar10) [16];
  uint local_res8;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 == (undefined (*) [16])0x0) {
LAB_1800100e8:
    puVar4 = __doserrno();
    *puVar4 = 0x16;
  }
  else {
    if ((param_5 == (FILE *)0x0) ||
       (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / ZEXT816(param_3),0) < param_4))
    {
      if (param_2 != 0xffffffffffffffff) {
        FUN_180012b90(param_1,0,param_2);
      }
      if ((param_5 == (FILE *)0x0) ||
         (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / ZEXT816(param_3),0) < param_4)
         ) goto LAB_1800100e8;
    }
    uVar6 = param_3 * param_4;
    uVar7 = uVar6;
    pauVar10 = param_1;
    uVar2 = param_2;
    if ((param_5->_flag & 0x10cU) == 0) {
      local_res8 = 0x1000;
    }
    else {
      local_res8 = param_5->_bufsiz;
    }
    while( true ) {
      if (uVar7 == 0) {
        return param_4;
      }
      if ((param_5->_flag & 0x10cU) == 0) break;
      iVar5 = param_5->_cnt;
      if (iVar5 == 0) break;
      if (iVar5 < 0) {
LAB_1800102b1:
        param_5->_flag = param_5->_flag | 0x20;
LAB_1800102b5:
        return (uVar6 - uVar7) / param_3;
      }
      uVar9 = (longlong)iVar5;
      if (uVar7 < (ulonglong)(longlong)iVar5) {
        uVar9 = uVar7;
      }
      uVar9 = uVar9 & 0xffffffff;
      if (uVar2 < uVar9) goto LAB_18001028e;
      FUN_180013780(pauVar10,uVar2,(undefined8 *)param_5->_ptr,uVar9);
      param_5->_cnt = param_5->_cnt - (int)uVar9;
      param_5->_ptr = param_5->_ptr + uVar9;
LAB_1800101cf:
      uVar7 = uVar7 - uVar9;
      pauVar10 = (undefined (*) [16])(*pauVar10 + uVar9);
      lVar1 = -uVar9;
LAB_180010273:
      uVar2 = uVar2 + lVar1;
    }
    if (uVar7 < local_res8) {
      uVar9 = FUN_180013614(param_5);
      if ((int)uVar9 == -1) goto LAB_1800102b5;
      if (uVar2 != 0) {
        (*pauVar10)[0] = (char)uVar9;
        local_res8 = param_5->_bufsiz;
        uVar7 = uVar7 - 1;
        pauVar10 = (undefined (*) [16])(*pauVar10 + 1);
        lVar1 = -1;
        goto LAB_180010273;
      }
    }
    else {
      uVar8 = (uint)uVar7;
      if (local_res8 == 0) {
        if (0x7fffffff < uVar7) {
          uVar8 = 0x7fffffff;
        }
      }
      else {
        if (uVar7 < 0x80000000) {
          iVar5 = (int)(uVar7 % (ulonglong)local_res8);
        }
        else {
          uVar8 = 0x7fffffff;
          iVar5 = (int)(0x7fffffff % (ulonglong)local_res8);
        }
        uVar8 = uVar8 - iVar5;
      }
      if (uVar8 <= uVar2) {
        uVar3 = _fileno(param_5);
        uVar8 = FUN_180013924(uVar3,(LPWSTR)pauVar10,(ulonglong)uVar8);
        if (uVar8 == 0) {
          param_5->_flag = param_5->_flag | 0x10;
          goto LAB_1800102b5;
        }
        if (uVar8 != 0xffffffff) {
          uVar9 = (ulonglong)uVar8;
          goto LAB_1800101cf;
        }
        goto LAB_1800102b1;
      }
    }
LAB_18001028e:
    if (param_2 != 0xffffffffffffffff) {
      FUN_180012b90(param_1,0,param_2);
    }
    puVar4 = __doserrno();
    *puVar4 = 0x22;
  }
  FUN_180011d8c();
  return 0;
}

/* Function: FUN_1800102cc */
void FUN_1800102cc(undefined (*param_1) [16],ulonglong param_2,ulonglong param_3,FILE *param_4)

{
  FUN_1800102ec(param_1,0xffffffffffffffff,param_2,param_3,param_4);
  return;
}

/* Function: FUN_1800102ec */
ulonglong FUN_1800102ec(undefined (*param_1) [16],ulonglong param_2,ulonglong param_3,
                       ulonglong param_4,FILE *param_5)

{
  ulong *puVar1;
  ulonglong uVar2;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    if (param_5 != (FILE *)0x0) {
      _lock_file(param_5);
      uVar2 = FUN_1800100ac(param_1,param_2,param_3,param_4,param_5);
      _unlock_file(param_5);
      return uVar2;
    }
    if (param_2 != 0xffffffffffffffff) {
      FUN_180012b90(param_1,0,param_2);
    }
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_180011d8c();
  }
  return 0;
}

/* Function: FUN_180010394 */
ulonglong FUN_180010394(undefined8 *param_1,ulonglong param_2,ulonglong param_3,FILE *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (FILE *)0x0) &&
       ((param_1 != (undefined8 *)0x0 &&
        (param_3 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / ZEXT816(param_2),0))
        ))) {
      uVar8 = param_2 * param_3;
      uVar7 = uVar8;
      if ((param_4->_flag & 0x10cU) == 0) {
        uVar9 = 0x1000;
      }
      else {
        uVar9 = param_4->_bufsiz;
      }
joined_r0x000180010431:
      do {
        if (uVar7 == 0) {
          return param_3;
        }
        uVar2 = param_4->_flag & 0x108;
        uVar6 = (uint)uVar7;
        if (uVar2 != 0) {
          uVar1 = param_4->_cnt;
          uVar5 = (ulonglong)uVar1;
          if (uVar1 != 0) {
            if ((int)uVar1 < 0) goto LAB_1800104d2;
            if (uVar7 < uVar5) {
              uVar5 = uVar7 & 0xffffffff;
            }
            FUN_18000f860((undefined8 *)param_4->_ptr,param_1,uVar5);
            param_4->_cnt = param_4->_cnt - (int)uVar5;
            param_4->_ptr = param_4->_ptr + uVar5;
            uVar7 = uVar7 - uVar5;
            param_1 = (undefined8 *)((longlong)param_1 + uVar5);
            goto joined_r0x000180010431;
          }
        }
        if (uVar7 < uVar9) {
          uVar5 = FUN_180011de8((int)*(char *)param_1,param_4);
          if ((int)uVar5 == -1) goto LAB_1800104d6;
          param_1 = (undefined8 *)((longlong)param_1 + 1);
          uVar7 = uVar7 - 1;
          uVar9 = 1;
          if (0 < param_4->_bufsiz) {
            uVar9 = param_4->_bufsiz;
          }
        }
        else {
          if ((uVar2 != 0) && (uVar4 = FUN_180014ab8(param_4), (int)uVar4 != 0)) goto LAB_1800104d6;
          if (uVar9 != 0) {
            uVar6 = uVar6 - (int)(uVar7 % (ulonglong)uVar9);
          }
          uVar2 = _fileno(param_4);
          uVar2 = FUN_180014194(uVar2,(WCHAR *)param_1,uVar6);
          if (uVar2 == 0xffffffff) goto LAB_1800104d2;
          uVar1 = uVar2;
          if (uVar6 < uVar2) {
            uVar1 = uVar6;
          }
          uVar7 = uVar7 - uVar1;
          param_1 = (undefined8 *)((longlong)param_1 + (ulonglong)uVar1);
          if (uVar2 < uVar6) {
LAB_1800104d2:
            param_4->_flag = param_4->_flag | 0x20;
LAB_1800104d6:
            return (uVar8 - uVar7) / param_2;
          }
        }
      } while( true );
    }
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_180011d8c();
  }
  return 0;
}

/* Function: FUN_180010524 */
ulonglong FUN_180010524(undefined8 *param_1,ulonglong param_2,ulonglong param_3,FILE *param_4)

{
  ulong *puVar1;
  ulonglong uVar2;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if (param_4 != (FILE *)0x0) {
      _lock_file(param_4);
      uVar2 = FUN_180010394(param_1,param_2,param_3,param_4);
      _unlock_file(param_4);
      return uVar2;
    }
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_180011d8c();
  }
  return 0;
}

/* Function: FUN_1800105b4 */
void FUN_1800105b4(FILE *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  HANDLE hFile;
  uint uVar6;
  int iVar7;
  BOOL BVar8;
  int iVar9;
  longlong lVar10;
  ulong *puVar11;
  longlong lVar12;
  char *pcVar13;
  ulonglong uVar14;
  byte *pbVar15;
  ulonglong uVar16;
  longlong lVar17;
  DWORD aDStackX8 [2];
  undefined8 uStack48;
  
  uStack48 = 0x1800105d6;
  lVar10 = FUN_180015000();
  lVar10 = -lVar10;
  *(ulonglong *)(&stack0x00001018 + lVar10) =
       DAT_180036000 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar10);
  if (param_1 == (FILE *)0x0) {
    *(undefined8 *)((longlong)&uStack48 + lVar10) = 0x1800105fa;
    puVar11 = __doserrno();
    *puVar11 = 0x16;
    *(undefined8 *)((longlong)&uStack48 + lVar10) = 0x180010605;
    FUN_180011d8c();
  }
  else {
    *(undefined8 *)((longlong)&uStack48 + lVar10) = 0x180010612;
    uVar6 = _fileno(param_1);
    if (param_1->_cnt < 0) {
      param_1->_cnt = 0;
    }
    *(undefined8 *)((longlong)&uStack48 + lVar10) = 0x18001062a;
    iVar7 = FUN_180014c28(uVar6,0,1);
    if (-1 < iVar7) {
      uVar1 = param_1->_flag;
      lVar12 = (&DAT_180038910)[(longlong)(int)uVar6 >> 5];
      lVar17 = (ulonglong)(uVar6 & 0x1f) * 0x58;
      if ((uVar1 & 0x108) != 0) {
        iVar2 = *(int *)&param_1->_ptr;
        if ((uVar1 & 3) == 0) {
          if (-1 < (char)uVar1) {
            *(undefined8 *)((longlong)&uStack48 + lVar10) = 0x1800107ac;
            puVar11 = __doserrno();
            *puVar11 = 0x16;
            goto LAB_180010894;
          }
        }
        else {
          if (((char)(*(char *)(lVar12 + 0x38 + lVar17) * '\x02') >> 1 == '\x01') &&
             (*(int *)(lVar12 + 0x48 + lVar17) != 0)) {
            uVar16 = (ulonglong)((longlong)param_1->_ptr - (longlong)param_1->_base) >> 1;
            if (param_1->_cnt != 0) {
              uVar5 = *(undefined8 *)(lVar12 + 0x40 + lVar17);
              *(undefined8 *)((longlong)&uStack48 + lVar10) = 0x1800106b6;
              lVar12 = FUN_180014df0(uVar6,uVar5,0);
              if (lVar12 == *(longlong *)
                             ((&DAT_180038910)[(longlong)(int)uVar6 >> 5] + 0x40 + lVar17)) {
                hFile = *(HANDLE *)((&DAT_180038910)[(longlong)(int)uVar6 >> 5] + lVar17);
                *(undefined8 *)(&stack0xfffffffffffffff8 + lVar10) = 0;
                *(undefined8 *)((longlong)&uStack48 + lVar10) = 0x1800106f5;
                BVar8 = ReadFile(hFile,&stack0x00000018 + lVar10,0x1000,
                                 (LPDWORD)((longlong)aDStackX8 + lVar10),
                                 *(LPOVERLAPPED *)(&stack0xfffffffffffffff8 + lVar10));
                if (BVar8 != 0) {
                  *(undefined8 *)((longlong)&uStack48 + lVar10) = 0x180010709;
                  iVar7 = FUN_180014c28(uVar6,iVar7,0);
                  if (((-1 < iVar7) && (uVar16 <= *(uint *)((longlong)aDStackX8 + lVar10))) &&
                     (pbVar15 = &stack0x00000018 + lVar10, uVar16 != 0)) {
                    do {
                      uVar16 = uVar16 - 1;
                      if (&stack0x00000018 +
                          (ulonglong)*(uint *)((longlong)aDStackX8 + lVar10) + lVar10 <= pbVar15)
                      break;
                      if (*pbVar15 == 0xd) {
                        if ((pbVar15 < &stack0x00000018 +
                                       (ulonglong)*(uint *)((longlong)aDStackX8 + lVar10) + lVar10 +
                                       -1) && (pbVar15[1] == 10)) {
                          pbVar15 = pbVar15 + 1;
                        }
                      }
                      else {
                        pbVar15 = pbVar15 + (char)(&DAT_180036560)[*pbVar15];
                      }
                      pbVar15 = pbVar15 + 1;
                    } while (uVar16 != 0);
                  }
                }
              }
            }
            goto LAB_180010894;
          }
          if ((*(byte *)(lVar12 + 8 + lVar17) & 0x80) != 0) {
            for (pcVar13 = param_1->_base; pcVar13 < param_1->_ptr; pcVar13 = pcVar13 + 1) {
            }
          }
        }
        if (((iVar7 != 0) && ((uVar1 & 1) != 0)) &&
           ((param_1->_cnt != 0 &&
            (iVar3 = *(int *)&param_1->_base, iVar4 = param_1->_cnt,
            (*(byte *)(lVar12 + 8 + lVar17) & 0x80) != 0)))) {
          *(undefined8 *)((longlong)&uStack48 + lVar10) = 0x1800107ed;
          iVar9 = FUN_180014c28(uVar6,0,2);
          if (iVar9 == iVar7) {
            pcVar13 = param_1->_base;
            uVar16 = (longlong)(pcVar13 + (uint)((iVar2 - iVar3) + iVar4)) - (longlong)pcVar13;
            if (pcVar13 + (uint)((iVar2 - iVar3) + iVar4) < pcVar13) {
              uVar16 = 0;
            }
            if (uVar16 != 0) {
              uVar14 = 0;
              do {
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar16);
            }
          }
          else {
            *(undefined8 *)((longlong)&uStack48 + lVar10) = 0x18001083f;
            FUN_180014c28(uVar6,iVar7,0);
          }
        }
      }
    }
  }
LAB_180010894:
  *(undefined8 *)((longlong)&uStack48 + lVar10) = 0x1800108a4;
  FUN_18000f730(*(ulonglong *)(&stack0x00001018 + lVar10) ^
                (ulonglong)(&stack0xffffffffffffffd8 + lVar10));
  return;
}

/* Function: ftell */
/* Library Function - Single Match
    ftell
   
   Library: Visual Studio 2012 Release */

long ftell(FILE *_File)

{
  long lVar1;
  ulong *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_180011d8c();
    lVar1 = -1;
  }
  else {
    _lock_file(_File);
    lVar1 = FUN_1800105b4(_File);
    _unlock_file(_File);
  }
  return lVar1;
}

/* Function: FUN_180010920 */
int FUN_180010920(FILE *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  
  if ((param_1->_flag & 0x83U) == 0) {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    iVar1 = -1;
  }
  else {
    param_1->_flag = param_1->_flag & 0xffffffef;
    if (param_3 == 1) {
      iVar1 = FUN_1800105b4(param_1);
      param_3 = 0;
      param_2 = param_2 + iVar1;
    }
    FUN_180014ab8(param_1);
    uVar2 = param_1->_flag;
    if ((char)uVar2 < '\0') {
      param_1->_flag = uVar2 & 0xfffffffc;
    }
    else if ((((uVar2 & 1) != 0) && ((uVar2 & 8) != 0)) && ((uVar2 >> 10 & 1) == 0)) {
      param_1->_bufsiz = 0x200;
    }
    uVar2 = _fileno(param_1);
    iVar1 = FUN_180014c28(uVar2,param_2,param_3);
    iVar1 = (iVar1 != -1) - 1;
  }
  return iVar1;
}

/* Function: FUN_1800109cc */
int FUN_1800109cc(FILE *param_1,int param_2,uint param_3)

{
  int iVar1;
  ulong *puVar2;
  
  if ((param_1 == (FILE *)0x0) || (2 < param_3)) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_180011d8c();
    iVar1 = -1;
  }
  else {
    _lock_file(param_1);
    iVar1 = FUN_180010920(param_1,param_2,param_3);
    _unlock_file(param_1);
  }
  return iVar1;
}

/* Function: _fclose_nolock */
/* Library Function - Single Match
    _fclose_nolock
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

int _fclose_nolock(FILE *_File)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  iVar1 = -1;
  if (_File == (FILE *)0x0) {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_180011d8c();
    iVar1 = -1;
  }
  else {
    if ((*(byte *)&_File->_flag & 0x83) != 0) {
      uVar4 = FUN_180014ab8(_File);
      iVar1 = (int)uVar4;
      _freebuf(_File);
      uVar2 = _fileno(_File);
      uVar5 = FUN_1800153f4(uVar2);
      if ((int)uVar5 < 0) {
        iVar1 = -1;
      }
      else if (_File->_tmpfname != (char *)0x0) {
        free(_File->_tmpfname);
        _File->_tmpfname = (char *)0x0;
      }
    }
    _File->_flag = 0;
  }
  return iVar1;
}

/* Function: fclose */
/* Library Function - Single Match
    fclose
   
   Library: Visual Studio 2012 Release */

int fclose(FILE *_File)

{
  int iVar1;
  ulong *puVar2;
  
  iVar1 = -1;
  if (_File == (FILE *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_180011d8c();
    iVar1 = -1;
  }
  else if ((*(byte *)&_File->_flag & 0x40) == 0) {
    _lock_file(_File);
    iVar1 = _fclose_nolock(_File);
    _unlock_file(_File);
  }
  else {
    _File->_flag = 0;
  }
  return iVar1;
}

/* Function: FUN_180010b24 */
undefined4 FUN_180010b24(LPCSTR param_1,undefined (*param_2) [16])

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined (*local_res8) [16];
  
  local_res8 = (undefined (*) [16])0x0;
  if ((param_1 == (LPCSTR)0x0) ||
     (uVar2 = FUN_180011188(param_1,(LPWSTR *)&local_res8), (int)uVar2 != 0)) {
    uVar1 = FUN_180015668(local_res8,param_2);
    free(local_res8);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* Function: free */
void free(void *_Memory)

{
  BOOL BVar1;
  DWORD DVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if ((_Memory != (void *)0x0) && (BVar1 = HeapFree(DAT_180038258,0,_Memory), BVar1 == 0)) {
    puVar4 = __doserrno();
    DVar2 = GetLastError();
    uVar3 = FUN_1800110d0(DVar2);
    *puVar4 = uVar3;
  }
  return;
}

/* Function: FUN_180010b84 */
undefined8 * FUN_180010b84(undefined8 *param_1,exception *param_2)

{
  std::exception::exception((exception *)param_1,param_2);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}

/* Function: FUN_180010bb8 */
void FUN_180010bb8(size_t param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  char *local_res10 [3];
  undefined **local_28 [4];
  
  do {
    pvVar3 = malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return;
    }
    iVar2 = _callnewh(param_1);
  } while (iVar2 != 0);
  local_res10[0] = "bad allocation";
  FUN_180016008(local_28,local_res10);
  local_28[0] = std::bad_alloc::vftable;
  FUN_180016178((longlong *)local_28,&DAT_180033b90);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

/* Function: FUN_180010c24 */
undefined8 * FUN_180010c24(undefined8 *param_1,uint param_2)

{
  *param_1 = std::bad_alloc::vftable;
  FUN_180016050(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

/* Function: FUN_180010c60 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180010c60(undefined8 param_1,int param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  longlong lVar5;
  DWORD *_Memory;
  
  if (param_2 == 1) {
    bVar1 = FUN_180011120();
    if ((int)CONCAT71(extraout_var,bVar1) != 0) {
      iVar2 = _mtinit();
      if (iVar2 != 0) {
        FUN_1800175a0();
        DAT_18003a2e0 = GetCommandLineA();
        DAT_180037cc8 = FUN_180016c98();
        uVar4 = FUN_180015050();
        if (-1 < (int)uVar4) {
          uVar4 = FUN_1800167fc();
          if (((-1 < (int)uVar4) && (uVar4 = FUN_180016ab8(), -1 < (int)uVar4)) &&
             (uVar4 = FUN_180011464(), (int)uVar4 == 0)) {
            DAT_180037cc0 = DAT_180037cc0 + 1;
            goto LAB_180010db4;
          }
          _ioterm();
        }
        FUN_1800167d8();
      }
      FUN_180011140();
    }
LAB_180010c7b:
    uVar4 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_180037cc0 < 1) goto LAB_180010c7b;
      DAT_180037cc0 = DAT_180037cc0 + -1;
      if (_DAT_1800382a8 == 0) {
        FUN_180011454();
      }
      FUN_1800112e4();
      if (param_3 == 0) {
        _ioterm();
        FUN_1800167d8();
        FUN_180011140();
        if (DAT_1800366c4 != -1) {
          FUN_1800167d8();
        }
      }
    }
    else if (param_2 == 2) {
      lVar5 = FUN_180016ea8();
      if (lVar5 == 0) {
        _Memory = (DWORD *)FUN_18001739c(1,0x478);
        if (_Memory != (DWORD *)0x0) {
          iVar2 = FUN_180016ec4();
          if (iVar2 != 0) {
            FUN_180016694((longlong)_Memory,0);
            DVar3 = GetCurrentThreadId();
            *_Memory = DVar3;
            *(undefined8 *)(_Memory + 2) = 0xffffffffffffffff;
            goto LAB_180010db4;
          }
          free(_Memory);
        }
        goto LAB_180010c7b;
      }
    }
    else if (param_2 == 3) {
      _freeptd((_ptiddata)0x0);
    }
LAB_180010db4:
    uVar4 = 1;
  }
  return uVar4;
}

/* Function: entry */
ulonglong entry(undefined8 param_1,int param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if (param_2 == 1) {
    FUN_180016bec();
  }
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_180037cc0 == 0)) {
    uVar2 = 0;
  }
  else {
    if (param_2 - 1U < 2) {
      if (DAT_1800273c8 != (code *)0x0) {
        iVar1 = (*DAT_1800273c8)();
      }
      if ((iVar1 == 0) || (uVar3 = FUN_180010c60(param_1,param_2,param_3), (int)uVar3 == 0)) {
        return 0;
      }
    }
    uVar4 = FUN_18000f710();
    uVar2 = uVar4 & 0xffffffff;
    if ((param_2 == 1) && ((int)uVar4 == 0)) {
      FUN_18000f710();
      FUN_180010c60(param_1,0,param_3);
      if (DAT_1800273c8 != (code *)0x0) {
        (*DAT_1800273c8)(param_1,0,param_3);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar3 = FUN_180010c60(param_1,param_2,param_3);
      uVar5 = -(uint)((int)uVar3 != 0) & (uint)uVar2;
      uVar2 = (ulonglong)uVar5;
      if ((uVar5 != 0) && (DAT_1800273c8 != (code *)0x0)) {
        uVar5 = (*DAT_1800273c8)(param_1,param_2,param_3);
        uVar2 = (ulonglong)uVar5;
      }
    }
  }
  return uVar2;
}

/* Function: FUN_180010f20 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180010f20(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  
  _DAT_180038250 = IsDebuggerPresent();
  FUN_180017610();
  FUN_18001737c(param_1);
  if (_DAT_180038250 == 0) {
    FUN_180017610();
  }
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000180017374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000409);
  return;
}

/* Function: __doserrno */
/* Library Function - Single Match
    __doserrno
   
   Library: Visual Studio 2012 Release */

ulong * __doserrno(void)

{
  _ptiddata p_Var1;
  ulong *puVar2;
  
  p_Var1 = _getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    puVar2 = &DAT_18003617c;
  }
  else {
    puVar2 = &p_Var1->_tdoserrno;
  }
  return puVar2;
}

/* Function: _dosmaperr */
/* Library Function - Single Match
    _dosmaperr
   
   Library: Visual Studio 2012 Release */

void _dosmaperr(ulong param_1)

{
  int iVar1;
  _ptiddata p_Var2;
  ulong *puVar3;
  int *piVar4;
  
  p_Var2 = _getptd_noexit();
  if (p_Var2 == (_ptiddata)0x0) {
    puVar3 = &DAT_18003617c;
  }
  else {
    puVar3 = &p_Var2->_tdoserrno;
  }
  *puVar3 = param_1;
  p_Var2 = _getptd_noexit();
  piVar4 = (int *)&DAT_180036178;
  if (p_Var2 != (_ptiddata)0x0) {
    piVar4 = &p_Var2->_terrno;
  }
  iVar1 = FUN_1800110d0(param_1);
  *piVar4 = iVar1;
  return;
}

/* Function: __doserrno */
/* Library Function - Single Match
    __doserrno
   
   Library: Visual Studio 2012 Release */

ulong * __doserrno(void)

{
  _ptiddata p_Var1;
  int *piVar2;
  
  p_Var1 = _getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    piVar2 = (int *)&DAT_180036178;
  }
  else {
    piVar2 = &p_Var1->_terrno;
  }
  return (ulong *)piVar2;
}

/* Function: FUN_1800110d0 */
undefined4 FUN_1800110d0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  piVar3 = &DAT_180036010;
  do {
    if (param_1 == *piVar3) {
      return (&DAT_180036014)[(longlong)(int)uVar2 * 2];
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 2;
  } while (uVar2 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  uVar1 = 0x16;
  if (param_1 - 0xbcU < 0xf) {
    uVar1 = 8;
  }
  return uVar1;
}

/* Function: FUN_180011120 */
bool FUN_180011120(void)

{
  DAT_180038258 = GetProcessHeap();
  return DAT_180038258 != (HANDLE)0x0;
}

/* Function: FUN_180011140 */
void FUN_180011140(void)

{
  DAT_180038258 = 0;
  return;
}

/* Function: _callnewh */
/* Library Function - Single Match
    _callnewh
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

int _callnewh(size_t _Size)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = (code *)DecodePointer(DAT_180038260);
  if ((pcVar2 != (code *)0x0) && (iVar1 = (*pcVar2)(_Size), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

/* Function: FUN_180011180 */
void FUN_180011180(undefined8 param_1)

{
  DAT_180038260 = param_1;
  return;
}

/* Function: FUN_180011188 */
undefined8 FUN_180011188(LPCSTR param_1,LPWSTR *param_2)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  DWORD DVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  LPWSTR lpWideCharStr;
  UINT CodePage;
  
  CodePage = 0;
  if ((param_1 == (LPCSTR)0x0) || (param_2 == (LPWSTR *)0x0)) {
    puVar5 = __doserrno();
    *puVar5 = 0x16;
    FUN_180011d8c();
    uVar6 = 0x16;
  }
  else {
    bVar1 = FUN_180016f0c();
    if (((int)CONCAT71(extraout_var,bVar1) == 0) && (BVar2 = AreFileApisANSI(), BVar2 == 0)) {
      CodePage = 1;
    }
    *param_2 = (LPWSTR)0x0;
    iVar3 = MultiByteToWideChar(CodePage,0,param_1,-1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      _dosmaperr(DVar4);
    }
    else {
      lpWideCharStr = (LPWSTR)FUN_18001741c((longlong)iVar3 * 2);
      *param_2 = lpWideCharStr;
      if (lpWideCharStr != (LPWSTR)0x0) {
        iVar3 = MultiByteToWideChar(CodePage,0,param_1,-1,lpWideCharStr,iVar3);
        if (iVar3 != 0) {
          return 1;
        }
        DVar4 = GetLastError();
        _dosmaperr(DVar4);
        free(*param_2);
        *param_2 = (LPWSTR)0x0;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}

/* Function: __crtCorExitProcess */
/* Library Function - Single Match
    __crtCorExitProcess
   
   Library: Visual Studio 2012 Release */

void __crtCorExitProcess(int param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_res10 [3];
  uint extraout_var;
  
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",local_res10);
  if (BVar1 != 0) {
    pFVar2 = GetProcAddress(local_res10[0],"CorExitProcess");
    extraout_var = (uint)((ulonglong)pFVar2 >> 0x20);
    if (((ulonglong)pFVar2 & 0xffffffff | (ulonglong)extraout_var << 0x20) != 0) {
      (*(code *)((ulonglong)pFVar2 & 0xffffffff | (ulonglong)extraout_var << 0x20))(param_1);
    }
  }
  return;
}

/* Function: __crtExitProcess */
/* Library Function - Single Match
    __crtExitProcess
   
   Library: Visual Studio 2012 Release */

void __crtExitProcess(int param_1)

{
  __crtCorExitProcess(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

/* Function: FUN_1800112e4 */
void FUN_1800112e4(void)

{
  int iVar1;
  PVOID _Memory;
  void **ppvVar2;
  
  _Memory = DecodePointer(DAT_18003a2d0);
  for (ppvVar2 = DAT_180038288; (ppvVar2 != (void **)0x0 && (*ppvVar2 != (void *)0x0));
      ppvVar2 = ppvVar2 + 1) {
    free(*ppvVar2);
  }
  free(DAT_180038288);
  DAT_180038288 = (void **)0x0;
  for (ppvVar2 = DAT_180038280; (ppvVar2 != (void **)0x0 && (*ppvVar2 != (void *)0x0));
      ppvVar2 = ppvVar2 + 1) {
    free(*ppvVar2);
  }
  free(DAT_180038280);
  DAT_180038280 = (void **)0x0;
  free(DAT_180038278);
  free(DAT_180038270);
  DAT_180038278 = (void *)0x0;
  DAT_180038270 = (void *)0x0;
  if ((_Memory != (PVOID)0xffffffffffffffff) && (DAT_18003a2d0 != (PVOID)0x0)) {
    free(_Memory);
  }
  DAT_18003a2d0 = EncodePointer((PVOID)0xffffffffffffffff);
  if (DAT_180038ec8 != (void *)0x0) {
    free(DAT_180038ec8);
    DAT_180038ec8 = (void *)0x0;
  }
  if (DAT_180038ed0 != (void *)0x0) {
    free(DAT_180038ed0);
    DAT_180038ed0 = (void *)0x0;
  }
  LOCK();
  iVar1 = *(int *)PTR_DAT_180036e90;
  *(int *)PTR_DAT_180036e90 = *(int *)PTR_DAT_180036e90 + -1;
  if ((iVar1 == 1) && ((undefined4 *)PTR_DAT_180036e90 != &DAT_180036b70)) {
    free(PTR_DAT_180036e90);
    PTR_DAT_180036e90 = (undefined *)&DAT_180036b70;
  }
  return;
}

/* Function: FUN_18001142c */
void FUN_18001142c(int param_1)

{
  code *pcVar1;
  
  _FF_MSGBANNER();
  FUN_180011814(param_1);
  FUN_180011608(0xff,1,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

/* Function: FUN_180011454 */
void FUN_180011454(void)

{
  FUN_180011608(0,0,1);
  return;
}

/* Function: FUN_180011464 */
undefined8 FUN_180011464(void)

{
  BOOL BVar1;
  undefined8 uVar2;
  undefined4 in_ECX;
  
  if (PTR_thunk_FUN_180015f50_180028098 != (undefined *)0x0) {
    BVar1 = _IsNonwritableInCurrentImage((PBYTE)&PTR_thunk_FUN_180015f50_180028098);
    if (BVar1 != 0) {
      (*(code *)PTR_thunk_FUN_180015f50_180028098)(in_ECX);
    }
  }
  _initp_misc_cfltcvt_tab();
  uVar2 = _initterm_e((undefined **)&DAT_1800272f0,(undefined **)&DAT_180027320);
  if ((int)uVar2 == 0) {
    FUN_180017a40(&LAB_1800175d8);
    FUN_180011554((undefined **)&DAT_1800272c8,(undefined **)&DAT_1800272e8);
    if (DAT_18003a2c0 != (code *)0x0) {
      BVar1 = _IsNonwritableInCurrentImage((PBYTE)&DAT_18003a2c0);
      if (BVar1 != 0) {
        (*DAT_18003a2c0)(0,2);
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* Function: FUN_1800114fc */
void FUN_1800114fc(UINT param_1)

{
  FUN_180011608(param_1,1,0);
  return;
}

/* Function: FUN_180011508 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180011508(void)

{
  PVOID pvVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  
  pvVar1 = EncodePointer((PVOID)0x0);
  FUN_180011180(pvVar1);
  FUN_180011d1c(pvVar1);
  FUN_180017af4(pvVar1);
  FUN_180017b0c(pvVar1);
  FUN_180017ad4();
  FUN_180017d60(pvVar1);
  hModule = GetModuleHandleW(L"kernel32.dll");
  pFVar2 = GetProcAddress(hModule,"FlsAlloc");
  DAT_1800391a0 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"FlsFree");
  DAT_1800391a8 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"FlsGetValue");
  DAT_1800391b0 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"FlsSetValue");
  DAT_1800391b8 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"InitializeCriticalSectionEx");
  DAT_1800391c0 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"CreateEventExW");
  _DAT_1800391c8 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"CreateSemaphoreExW");
  _DAT_1800391d0 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"SetThreadStackGuarantee");
  _DAT_1800391d8 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"CreateThreadpoolTimer");
  _DAT_1800391e0 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"SetThreadpoolTimer");
  _DAT_1800391e8 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"WaitForThreadpoolTimerCallbacks");
  _DAT_1800391f0 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"CloseThreadpoolTimer");
  _DAT_1800391f8 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"CreateThreadpoolWait");
  _DAT_180039200 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"SetThreadpoolWait");
  _DAT_180039208 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"CloseThreadpoolWait");
  _DAT_180039210 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"FlushProcessWriteBuffers");
  _DAT_180039218 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"FreeLibraryWhenCallbackReturns");
  _DAT_180039220 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"GetCurrentProcessorNumber");
  _DAT_180039228 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"GetLogicalProcessorInformation");
  _DAT_180039230 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"CreateSymbolicLinkW");
  _DAT_180039238 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"SetDefaultDllDirectories");
  _DAT_180039240 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"EnumSystemLocalesEx");
  _DAT_180039250 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"CompareStringEx");
  DAT_180039248 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"GetDateFormatEx");
  _DAT_180039258 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"GetLocaleInfoEx");
  _DAT_180039260 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"GetTimeFormatEx");
  _DAT_180039268 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"GetUserDefaultLocaleName");
  _DAT_180039270 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"IsValidLocaleName");
  _DAT_180039278 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"LCMapStringEx");
  DAT_180039280 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"GetCurrentPackageId");
  DAT_180039288 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"GetTickCount64");
  _DAT_180039290 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"GetFileInformationByHandleExW");
  _DAT_180039298 = (ulonglong)pFVar2 ^ DAT_180036000;
  pFVar2 = GetProcAddress(hModule,"SetFileInformationByHandleW");
  _DAT_1800392a0 = (ulonglong)pFVar2 ^ DAT_180036000;
  return;
}

/* Function: FUN_180011554 */
void FUN_180011554(undefined **param_1,undefined **param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  uVar1 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar1 = uVar2;
  }
  if (uVar1 != 0) {
    do {
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)();
      }
      uVar2 = uVar2 + 1;
      param_1 = (code **)param_1 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}

/* Function: _initterm_e */
/* Library Function - Single Match
    _initterm_e
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void _initterm_e(undefined **param_1,undefined **param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 < param_2) {
    do {
      if (iVar1 != 0) {
        return;
      }
      if ((code *)*param_1 != (code *)0x0) {
        iVar1 = (*(code *)*param_1)();
      }
      param_1 = (code **)param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}

/* Function: FUN_1800115f0 */
void FUN_1800115f0(void)

{
  _lock(8);
  return;
}

/* Function: FUN_1800115fc */
void FUN_1800115fc(void)

{
  FUN_180017808(8);
  return;
}

/* Function: FUN_180011608 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180011608(UINT param_1,int param_2,int param_3)

{
  PVOID *ppvVar1;
  PVOID *ppvVar2;
  PVOID pvVar3;
  code *pcVar4;
  PVOID *ppvVar5;
  PVOID *ppvVar6;
  PVOID *ppvVar7;
  PVOID *ppvVar8;
  
  _lock(8);
  if (_DAT_180038268 != 1) {
    _DAT_1800382a8 = 1;
    DAT_1800382a4 = (undefined)param_3;
    if (param_2 == 0) {
      ppvVar1 = (PVOID *)DecodePointer(DAT_18003a2d0);
      if (ppvVar1 != (PVOID *)0x0) {
        ppvVar2 = (PVOID *)DecodePointer(DAT_18003a2c8);
        ppvVar7 = ppvVar1;
        ppvVar8 = ppvVar2;
        while (ppvVar2 = ppvVar2 + -1, ppvVar1 <= ppvVar2) {
          pvVar3 = EncodePointer((PVOID)0x0);
          if (*ppvVar2 != pvVar3) {
            if (ppvVar2 < ppvVar1) break;
            pcVar4 = (code *)DecodePointer(*ppvVar2);
            pvVar3 = EncodePointer((PVOID)0x0);
            *ppvVar2 = pvVar3;
            (*pcVar4)();
            ppvVar5 = (PVOID *)DecodePointer(DAT_18003a2d0);
            ppvVar6 = (PVOID *)DecodePointer(DAT_18003a2c8);
            if ((ppvVar7 != ppvVar5) || (ppvVar8 != ppvVar6)) {
              ppvVar1 = ppvVar5;
              ppvVar2 = ppvVar6;
              ppvVar7 = ppvVar5;
              ppvVar8 = ppvVar6;
            }
          }
        }
      }
      FUN_180011554((undefined **)&DAT_180027328,(undefined **)&DAT_180027348);
    }
    FUN_180011554((undefined **)&DAT_180027350,(undefined **)&DAT_180027358);
  }
  if ((param_3 != 0) && (FUN_180017808(8), param_3 != 0)) {
    return;
  }
  _DAT_180038268 = 1;
  FUN_180017808(8);
  __crtCorExitProcess(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

/* Function: _FF_MSGBANNER */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _FF_MSGBANNER
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void _FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = _set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = _set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (_DAT_1800382c0 != 1) {
      return;
    }
  }
  FUN_180011814(0xfc);
  FUN_180011814(0xff);
  return;
}

/* Function: FUN_1800117e4 */
undefined * FUN_1800117e4(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = &DAT_180027410;
  do {
    if (param_1 == *piVar2) {
      return (&PTR_u_R6002___floating_point_support_n_180027418)[(longlong)(int)uVar1 * 2];
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (uVar1 < 0x17);
  return (undefined *)0x0;
}

/* Function: FUN_180011814 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180011814(int param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  DWORD DVar4;
  short *psVar5;
  longlong lVar6;
  HANDLE hFile;
  char *pcVar7;
  ulonglong *puVar8;
  uint uVar9;
  undefined auStackY616 [32];
  DWORD local_238 [4];
  ulonglong local_228 [62];
  undefined local_35;
  ulonglong local_28;
  
  local_28 = DAT_180036000 ^ (ulonglong)auStackY616;
  psVar5 = (short *)FUN_1800117e4(param_1);
  uVar9 = 0;
  if (psVar5 != (short *)0x0) {
    iVar2 = _set_error_mode(3);
    if (iVar2 != 1) {
      iVar2 = _set_error_mode(3);
      if ((iVar2 != 0) || (_DAT_1800382c0 != 1)) {
        if (param_1 != 0xfc) {
          uVar3 = FUN_180018780((undefined2 *)&DAT_1800382d0,0x314,L"Runtime Error!\n\nProgram: ");
          if (uVar3 != 0) {
            FUN_180011dac();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          _DAT_18003850a = 0;
          DVar4 = GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_180038302,0x104);
          if (DVar4 == 0) {
            uVar3 = FUN_180018780((undefined2 *)&DAT_180038302,0x2fb,L"<program name unknown>");
            if (uVar3 != 0) {
              FUN_180011dac();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          lVar6 = FUN_1800187ec((short *)&DAT_180038302);
          if (0x3c < lVar6 + 1U) {
            lVar6 = FUN_1800187ec((short *)&DAT_180038302);
            uVar3 = FUN_180018808((short *)((longlong)&DAT_180038288 + lVar6 * 2 + 4),
                                  0x2fb - (lVar6 * 2 + -0x76 >> 1),(short *)&DAT_180027f18,3);
            if (uVar3 != 0) {
              FUN_180011dac();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          uVar3 = FUN_1800186f8((short *)&DAT_1800382d0,0x314,(short *)&DAT_180027f20);
          if (uVar3 != 0) {
            FUN_180011dac();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar3 = FUN_1800186f8((short *)&DAT_1800382d0,0x314,psVar5);
          if (uVar3 != 0) {
            FUN_180011dac();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FUN_180018914((LPCWSTR)&DAT_1800382d0,L"Microsoft Visual C++ Runtime Library",0x12010);
        }
        goto LAB_1800119ef;
      }
    }
    hFile = GetStdHandle(0xfffffff4);
    if ((longlong)hFile - 1U < 0xfffffffffffffffe) {
      puVar8 = local_228;
      do {
        *(undefined *)puVar8 = *(undefined *)psVar5;
        if (*psVar5 == 0) break;
        uVar9 = uVar9 + 1;
        puVar8 = (ulonglong *)((longlong)puVar8 + 1);
        psVar5 = psVar5 + 1;
      } while (uVar9 < 500);
      local_35 = 0;
      pcVar7 = FUN_180018650(local_228);
      WriteFile(hFile,local_228,(DWORD)pcVar7,local_238,(LPOVERLAPPED)0x0);
    }
  }
LAB_1800119ef:
  FUN_18000f730(local_28 ^ (ulonglong)auStackY616);
  return;
}

/* Function: FUN_180011c28 */
void FUN_180011c28(int param_1,undefined4 param_2,undefined4 param_3)

{
  BOOL BVar1;
  int iVar2;
  undefined auStackX8 [8];
  undefined auStack1464 [32];
  _EXCEPTION_POINTERS local_598;
  undefined local_588 [4];
  undefined4 local_584;
  _CONTEXT local_4e8;
  ulonglong local_18;
  
  local_18 = DAT_180036000 ^ (ulonglong)auStack1464;
  if (param_1 != -1) {
    FUN_180017610();
  }
  local_588 = 0;
  FUN_180012b90((undefined (*) [16])&local_584,0,0x94);
  local_598.ExceptionRecord = (PEXCEPTION_RECORD)local_588;
  local_598.ContextRecord = &local_4e8;
  FUN_180016d8c(&local_4e8);
  local_4e8.Rsp = (DWORD64)auStackX8;
  local_588 = param_2;
  local_584 = param_3;
  BVar1 = IsDebuggerPresent();
  iVar2 = FUN_18001737c(&local_598);
  if (((iVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_180017610();
  }
  FUN_18000f730(local_18 ^ (ulonglong)auStack1464);
  return;
}

/* Function: FUN_180011d1c */
void FUN_180011d1c(undefined8 param_1)

{
  DAT_180038900 = param_1;
  return;
}

/* Function: FUN_180011d24 */
void FUN_180011d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)DecodePointer(DAT_180038900);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180011d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_180011dac();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

/* Function: FUN_180011d8c */
void FUN_180011d8c(void)

{
  FUN_180011d24(0,0,0,0,0);
  return;
}

/* Function: FUN_180011dac */
void FUN_180011dac(void)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  undefined8 unaff_RBX;
  undefined *puVar3;
  undefined auStack40 [8];
  undefined auStack32 [32];
  
  puVar3 = auStack40;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
    puVar3 = auStack32;
  }
  *(undefined8 *)(puVar3 + -8) = 0x180011dd9;
  FUN_180011c28(2,0xc0000417,1);
  *(undefined8 *)(puVar3 + 0x20) = unaff_RBX;
  *(undefined8 *)(puVar3 + -8) = 0x18001736a;
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000180017374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000417);
  return;
}

/* Function: FUN_180011de8 */
/* WARNING: Could not reconcile some variable overlaps */

ulonglong FUN_180011de8(undefined4 param_1,FILE *param_2)

{
  uint _FileHandle;
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 local_res8 [2];
  
  local_res8[0] = param_1;
  _FileHandle = _fileno(param_2);
  uVar7 = param_2->_flag;
  if ((uVar7 & 0x82) == 0) {
    puVar3 = __doserrno();
    *puVar3 = 9;
  }
  else if ((uVar7 & 0x40) == 0) {
    uVar2 = 0;
    if ((uVar7 & 1) != 0) {
      param_2->_cnt = 0;
      if ((uVar7 & 0x10) == 0) {
        param_2->_flag = uVar7 | 0x20;
        return 0xffffffff;
      }
      param_2->_ptr = param_2->_base;
      param_2->_flag = uVar7 & 0xfffffffe;
    }
    uVar7 = param_2->_flag;
    param_2->_cnt = 0;
    param_2->_flag = uVar7 & 0xffffffef | 2;
    if (((uVar7 & 0x10c) == 0) &&
       (((ppuVar4 = FUN_180012eb4(), param_2 != (FILE *)(ppuVar4 + 6) &&
         (ppuVar4 = FUN_180012eb4(), param_2 != (FILE *)(ppuVar4 + 0xc))) ||
        (iVar1 = _isatty(_FileHandle), iVar1 == 0)))) {
      _getbuf(param_2);
    }
    if ((param_2->_flag & 0x108U) == 0) {
      uVar7 = 1;
      uVar2 = FUN_180014194(_FileHandle,(WCHAR *)local_res8,1);
    }
    else {
      uVar7 = *(int *)&param_2->_ptr - *(int *)&param_2->_base;
      param_2->_ptr = (char *)((longlong)param_2->_base + 1);
      param_2->_cnt = param_2->_bufsiz + -1;
      if ((int)uVar7 < 1) {
        if (_FileHandle + 2 < 2) {
          puVar6 = &DAT_180036660;
        }
        else {
          puVar6 = (undefined *)
                   ((ulonglong)(_FileHandle & 0x1f) * 0x58 +
                   (&DAT_180038910)[(longlong)(int)_FileHandle >> 5]);
        }
        if (((puVar6[8] & 0x20) != 0) && (lVar5 = FUN_180014df0(_FileHandle,0,2), lVar5 == -1))
        goto LAB_180011e20;
      }
      else {
        uVar2 = FUN_180014194(_FileHandle,(WCHAR *)param_2->_base,uVar7);
      }
      *param_2->_base = (byte)local_res8[0];
    }
    if (uVar2 == uVar7) {
      return (ulonglong)(byte)local_res8[0];
    }
  }
  else {
    puVar3 = __doserrno();
    *puVar3 = 0x22;
  }
LAB_180011e20:
  param_2->_flag = param_2->_flag | 0x20;
  return 0xffffffff;
}

/* Function: _LocaleUpdate::_LocaleUpdate */
/* Library Function - Single Match
    public: __cdecl _LocaleUpdate::_LocaleUpdate(struct localeinfo_struct * __ptr64) __ptr64
   
   Library: Visual Studio 2012 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _ptiddata p_Var5;
  pthreadlocinfo ptVar6;
  pthreadmbcinfo ptVar7;
  
  this[0x18] = (_LocaleUpdate)0x0;
  if (param_1 == (localeinfo_struct *)0x0) {
    p_Var5 = _getptd();
    *(_ptiddata *)(this + 0x10) = p_Var5;
    ptVar6 = p_Var5->ptlocinfo;
    *(pthreadlocinfo *)this = ptVar6;
    *(pthreadmbcinfo *)(this + 8) = p_Var5->ptmbcinfo;
    if ((ptVar6 != (pthreadlocinfo)PTR_DAT_180037170) && ((DAT_1800372e8 & p_Var5->_ownlocale) == 0)
       ) {
      ptVar6 = __updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar6;
    }
    if ((*(undefined **)(this + 8) != PTR_DAT_180036e90) &&
       ((DAT_1800372e8 & *(uint *)(*(longlong *)(this + 0x10) + 200)) == 0)) {
      ptVar7 = __updatetmbcinfo();
      *(pthreadmbcinfo *)(this + 8) = ptVar7;
    }
    uVar1 = *(uint *)(*(longlong *)(this + 0x10) + 200);
    if ((uVar1 & 2) == 0) {
      *(uint *)(*(longlong *)(this + 0x10) + 200) = uVar1 | 2;
      this[0x18] = (_LocaleUpdate)0x1;
    }
  }
  else {
    uVar2 = *(undefined4 *)((longlong)&param_1->locinfo + 4);
    uVar3 = *(undefined4 *)&param_1->mbcinfo;
    uVar4 = *(undefined4 *)((longlong)&param_1->mbcinfo + 4);
    *(undefined4 *)this = *(undefined4 *)&param_1->locinfo;
    *(undefined4 *)(this + 4) = uVar2;
    *(undefined4 *)(this + 8) = uVar3;
    *(undefined4 *)(this + 0xc) = uVar4;
  }
  return this;
}

/* Function: FUN_18001201c */
/* WARNING: Removing unreachable block (ram,0x000180012432) */
/* WARNING: Removing unreachable block (ram,0x000180012416) */
/* WARNING: Removing unreachable block (ram,0x00018001256b) */
/* WARNING: Removing unreachable block (ram,0x00018001256f) */
/* WARNING: Removing unreachable block (ram,0x000180012578) */

void FUN_18001201c(FILE *param_1,byte *param_2,localeinfo_struct *param_3,ulonglong **param_4)

{
  byte bVar1;
  ulonglong *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  undefined7 extraout_var;
  code *pcVar14;
  char *pcVar15;
  ulong *puVar16;
  uint uVar17;
  int iVar18;
  ulonglong *puVar19;
  uint uVar20;
  undefined8 *puVar21;
  int iVar22;
  byte *pbVar23;
  undefined *puVar24;
  ulonglong *puVar25;
  undefined *puVar26;
  uint uVar27;
  uint uVar28;
  byte bVar29;
  FILE *pFVar30;
  undefined auStackY792 [32];
  uint local_2d8;
  int local_2d4;
  uint local_2d0;
  byte local_2cc [4];
  int local_2c8;
  int local_2c4;
  int local_2c0;
  uint local_2bc;
  undefined4 local_2b8;
  FILE *local_2b0;
  undefined4 local_2a8;
  ulonglong **local_2a0;
  ulong *local_298;
  ulonglong *local_290;
  int local_288 [2];
  byte *local_280;
  ulonglong *local_278;
  localeinfo_struct local_270;
  longlong local_260;
  char local_258;
  ulonglong local_248 [63];
  undefined8 local_49;
  ulonglong local_40;
  
  local_40 = DAT_180036000 ^ (ulonglong)auStackY792;
  local_2a8 = 0;
  uVar28 = 0;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar3 = false;
  bVar4 = false;
  local_2c4 = 0;
  uVar27 = 0;
  local_2d0 = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  puVar25 = (ulonglong *)0x0;
  local_2c8 = 0;
  local_2b0 = param_1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_270,param_3);
  local_298 = __doserrno();
  if (param_1 != (FILE *)0x0) {
    if ((*(byte *)&param_1->_flag & 0x40) == 0) {
      uVar12 = _fileno(param_1);
      puVar24 = &DAT_180036660;
      if (uVar12 + 2 < 2) {
        puVar26 = &DAT_180036660;
      }
      else {
        puVar26 = (undefined *)
                  ((ulonglong)(uVar12 & 0x1f) * 0x58 + (&DAT_180038910)[(longlong)(int)uVar12 >> 5])
        ;
      }
      if ((puVar26[0x38] & 0x7f) == 0) {
        if (1 < uVar12 + 2) {
          puVar24 = (undefined *)
                    ((ulonglong)(uVar12 & 0x1f) * 0x58 +
                    (&DAT_180038910)[(longlong)(int)uVar12 >> 5]);
        }
        if ((puVar24[0x38] & 0x80) == 0) goto LAB_180012138;
      }
    }
    else {
LAB_180012138:
      uVar12 = 0;
      if (param_2 != (byte *)0x0) {
        bVar29 = *param_2;
        local_2d8 = 0;
        local_2d4 = 0;
        local_290 = (ulonglong *)0x0;
        uVar20 = uVar12;
        if (bVar29 == 0) goto LAB_180012a06;
        do {
          pbVar23 = param_2 + 1;
          local_280 = pbVar23;
          if ((int)uVar12 < 0) break;
          uVar17 = 0;
          if ((byte)(bVar29 - 0x20) < 0x59) {
            uVar17 = (byte)(&DAT_180027fe0)[(char)bVar29] & 0xf;
          }
          local_2bc = (uint)((byte)(&DAT_180028000)
                                   [(longlong)(int)uVar17 * 9 + (longlong)(int)uVar20] >> 4);
          if (local_2bc == 8) goto LAB_1800129ec;
          uVar20 = uVar27;
          if (local_2bc == 0) {
LAB_1800128a5:
            local_2c8 = 0;
            iVar18 = _isleadbyte_l((uint)bVar29,&local_270);
            if (iVar18 != 0) {
              FUN_180012a44(bVar29,local_2b0,(int *)&local_2d8);
              bVar29 = *pbVar23;
              pbVar23 = param_2 + 2;
              if (bVar29 == 0) goto LAB_1800129ec;
            }
            FUN_180012a44(bVar29,local_2b0,(int *)&local_2d8);
            uVar20 = uVar27;
            uVar12 = local_2d8;
          }
          else if (local_2bc == 1) {
            local_2b8 = 0;
            local_2c0 = 0;
            local_2c4 = 0;
            local_2d0 = 0;
            uVar28 = 0;
            bVar9 = false;
            bVar8 = false;
            bVar7 = false;
            bVar6 = false;
            bVar5 = false;
            bVar3 = false;
            bVar4 = false;
            local_2c8 = 0;
            uVar20 = 0xffffffff;
          }
          else if (local_2bc == 2) {
            if (bVar29 == 0x20) {
              bVar9 = true;
            }
            else if (bVar29 == 0x23) {
              bVar8 = true;
            }
            else if (bVar29 == 0x2b) {
              bVar5 = true;
            }
            else if (bVar29 == 0x2d) {
              uVar28 = uVar28 | 4;
            }
            else if (bVar29 == 0x30) {
              uVar28 = uVar28 | 8;
            }
          }
          else if (local_2bc == 3) {
            if (bVar29 == 0x2a) {
              local_2c4 = *(int *)param_4;
              param_4 = param_4 + 1;
              if (local_2c4 < 0) {
                uVar28 = uVar28 | 4;
                local_2c4 = -local_2c4;
              }
            }
            else {
              local_2c4 = (int)(char)bVar29 + local_2c4 * 10 + -0x30;
            }
          }
          else {
            uVar20 = 0;
            if (local_2bc != 4) {
              if (local_2bc == 5) {
                if (bVar29 == 0x2a) {
                  uVar20 = *(uint *)param_4;
                  param_4 = param_4 + 1;
                  if ((int)uVar20 < 0) {
                    uVar20 = 0xffffffff;
                  }
                }
                else {
                  uVar20 = (int)(char)bVar29 + (uVar27 * 5 + -0x18) * 2;
                }
              }
              else if (local_2bc == 6) {
                if (bVar29 == 0x49) {
                  bVar1 = *pbVar23;
                  bVar6 = true;
                  if ((bVar1 == 0x36) && (param_2[2] == 0x34)) {
                    bVar6 = true;
                    pbVar23 = param_2 + 3;
                    uVar20 = uVar27;
                  }
                  else if ((bVar1 == 0x33) && (param_2[2] == 0x32)) {
                    bVar6 = false;
                    pbVar23 = param_2 + 3;
                    uVar20 = uVar27;
                  }
                  else if ((0x20 < (byte)(bVar1 + 0xa8)) ||
                          (uVar20 = uVar27,
                          (0x120821001U >> ((ulonglong)(byte)(bVar1 + 0xa8) & 0x3f) & 1) == 0)) {
                    local_2bc = 0;
                    goto LAB_1800128a5;
                  }
                }
                else if (bVar29 == 0x68) {
                  uVar28 = uVar28 | 0x20;
                  uVar20 = uVar27;
                }
                else if (bVar29 == 0x6c) {
                  if (*pbVar23 == 0x6c) {
                    bVar4 = true;
                    pbVar23 = param_2 + 2;
                    uVar20 = uVar27;
                  }
                  else {
                    uVar28 = uVar28 | 0x10;
                    uVar20 = uVar27;
                  }
                }
                else {
                  uVar20 = uVar27;
                  if (bVar29 == 0x77) {
                    uVar28 = uVar28 | 0x800;
                  }
                }
              }
              else {
                uVar20 = uVar27;
                if (local_2bc == 7) {
                  iVar18 = (int)(char)bVar29;
                  if (iVar18 < 0x65) {
                    if (iVar18 == 100) {
LAB_180012469:
                      bVar7 = true;
LAB_18001246d:
                      iVar18 = 10;
LAB_180012477:
                      if ((bVar6) || (bVar4)) {
                        puVar25 = *param_4;
                      }
                      else if ((uVar28 & 0x20) == 0) {
                        if (bVar7) {
                          puVar25 = (ulonglong *)(longlong)*(int *)param_4;
                        }
                        else {
                          puVar25 = (ulonglong *)(ulonglong)*(uint *)param_4;
                        }
                      }
                      else if (bVar7) {
                        puVar25 = (ulonglong *)(longlong)*(short *)param_4;
                      }
                      else {
                        puVar25 = (ulonglong *)(ulonglong)*(ushort *)param_4;
                      }
                      local_2a0 = param_4 + 1;
                      if ((bVar7) && ((longlong)puVar25 < 0)) {
                        puVar25 = (ulonglong *)-(longlong)puVar25;
                        bVar3 = true;
                      }
                      if ((!bVar6) && (!bVar4)) {
                        puVar25 = (ulonglong *)((ulonglong)puVar25 & 0xffffffff);
                      }
                      if ((int)uVar27 < 0) {
                        uVar27 = 1;
                      }
                      else {
                        uVar28 = uVar28 & 0xfffffff7;
                        if (0x200 < (int)uVar27) {
                          uVar27 = 0x200;
                        }
                      }
                      puVar21 = &local_49;
                      local_2d0 = -(uint)(puVar25 != (ulonglong *)0x0) & local_2d0;
                      uVar12 = uVar27;
                      while ((uVar27 = uVar12 - 1, 0 < (int)uVar12 || (puVar25 != (ulonglong *)0x0))
                            ) {
                        uVar12 = (int)((ulonglong)puVar25 % (ulonglong)(longlong)iVar18) + 0x30;
                        cVar11 = (char)uVar12;
                        if (0x39 < uVar12) {
                          cVar11 = cVar11 + (char)local_2a8;
                        }
                        *(char *)puVar21 = cVar11;
                        puVar21 = (undefined8 *)((longlong)puVar21 + -1);
                        puVar25 = (ulonglong *)((ulonglong)puVar25 / (ulonglong)(longlong)iVar18);
                        uVar12 = uVar27;
                      }
                      local_2d4 = ((int)register0x00000020 + -0x49) - (int)puVar21;
                      puVar25 = (ulonglong *)((longlong)puVar21 + 1);
                      param_4 = local_2a0;
                    }
                    else {
                      if (iVar18 == 0x41) {
LAB_180012346:
                        local_2b8 = 1;
                        bVar29 = bVar29 + 0x20;
                        goto LAB_180012352;
                      }
                      if (iVar18 != 0x43) {
                        if ((iVar18 - 0x45U & 0xfffffffd) == 0) goto LAB_180012346;
                        if (iVar18 == 0x53) {
                          if ((uVar28 & 0x830) == 0) {
                            uVar28 = uVar28 | 0x800;
                          }
LAB_1800122ae:
                          puVar19 = *param_4;
                          uVar12 = uVar27;
                          if (uVar27 == 0xffffffff) {
                            uVar12 = 0x7fffffff;
                          }
                          param_4 = param_4 + 1;
                          puVar25 = puVar19;
                          if ((uVar28 & 0x810) == 0) {
                            if (puVar19 == (ulonglong *)0x0) {
                              puVar19 = (ulonglong *)PTR_s__null__180036188;
                              puVar25 = (ulonglong *)PTR_s__null__180036188;
                            }
                            for (; (uVar12 != 0 && (uVar12 = uVar12 - 1, *(char *)puVar19 != '\0'));
                                puVar19 = (ulonglong *)((longlong)puVar19 + 1)) {
                            }
                            local_2d4 = (int)puVar19 - (int)puVar25;
                          }
                          else {
                            local_2c8 = 1;
                            if (puVar19 == (ulonglong *)0x0) {
                              puVar19 = (ulonglong *)PTR_u__null__180036190;
                              puVar25 = (ulonglong *)PTR_u__null__180036190;
                            }
                            for (; (uVar12 != 0 && (uVar12 = uVar12 - 1, *(WCHAR *)puVar19 != L'\0')
                                   ); puVar19 = (ulonglong *)((longlong)puVar19 + 2)) {
                            }
                            local_2d4 = (int)((longlong)puVar19 - (longlong)puVar25 >> 1);
                          }
                          goto LAB_180012674;
                        }
                        if (iVar18 == 0x58) goto LAB_180012402;
                        if (iVar18 != 0x5a) {
                          if (iVar18 == 0x61) goto LAB_180012352;
                          if (iVar18 != 99) goto LAB_180012674;
                          goto LAB_1800122fa;
                        }
                        puVar2 = *param_4;
                        puVar19 = (ulonglong *)PTR_s__null__180036188;
                        if ((puVar2 == (ulonglong *)0x0) ||
                           (puVar25 = (ulonglong *)puVar2[1], puVar25 == (ulonglong *)0x0))
                        goto LAB_180012665;
                        local_2d4 = (int)*(WCHAR *)puVar2;
                        if (uVar28 >> 0xb == 0) {
                          local_2c8 = 0;
                        }
                        else {
                          local_2c8 = 1;
                          local_2d4 = local_2d4 / 2;
                        }
                        goto LAB_180012670;
                      }
                      if ((uVar28 & 0x830) == 0) {
                        uVar28 = uVar28 | 0x800;
                      }
LAB_1800122fa:
                      if ((uVar28 & 0x810) == 0) {
                        local_2d4 = 1;
                        local_248[0]._0_1_ = *(undefined *)param_4;
                      }
                      else {
                        iVar18 = FUN_180019210(&local_2d4,(undefined (*) [16])local_248,0x200,
                                               *(WCHAR *)param_4);
                        if (iVar18 != 0) {
                          local_2c0 = 1;
                        }
                      }
                      puVar25 = local_248;
                      param_4 = param_4 + 1;
                    }
LAB_180012674:
                    pFVar30 = local_2b0;
                    if (local_2c0 == 0) {
                      if (bVar7) {
                        if (bVar3) {
                          local_2cc[0] = 0x2d;
                        }
                        else if (bVar5) {
                          local_2cc[0] = 0x2b;
                        }
                        else {
                          if (!bVar9) goto LAB_1800126ba;
                          local_2cc[0] = 0x20;
                        }
                        local_2d0 = 1;
                      }
LAB_1800126ba:
                      uVar12 = local_2d0;
                      iVar18 = (local_2c4 - local_2d4) - local_2d0;
                      if ((uVar28 & 0xc) == 0) {
                        FUN_180012a8c(0x20,iVar18,local_2b0,(int *)&local_2d8);
                      }
                      FUN_180012ae0(local_2cc,uVar12,pFVar30,(int *)&local_2d8,(int *)local_298);
                      if (((uVar28 & 8) != 0) && ((uVar28 & 4) == 0)) {
                        FUN_180012a8c(0x30,iVar18,pFVar30,(int *)&local_2d8);
                      }
                      if ((local_2c8 == 0) || (puVar19 = puVar25, iVar22 = local_2d4, local_2d4 < 1)
                         ) {
                        FUN_180012ae0((byte *)puVar25,local_2d4,pFVar30,(int *)&local_2d8,
                                      (int *)local_298);
                      }
                      else {
                        do {
                          iVar22 = iVar22 + -1;
                          iVar13 = FUN_180019210(local_288,
                                                 (undefined (*) [16])((longlong)&local_49 + 1),6,
                                                 *(WCHAR *)puVar19);
                          if ((iVar13 != 0) || (local_288[0] == 0)) {
                            local_2d8 = 0xffffffff;
                            pFVar30 = local_2b0;
                            break;
                          }
                          FUN_180012ae0((byte *)((longlong)&local_49 + 1),local_288[0],local_2b0,
                                        (int *)&local_2d8,(int *)local_298);
                          pFVar30 = local_2b0;
                          puVar19 = (ulonglong *)((longlong)puVar19 + 2);
                        } while (iVar22 != 0);
                      }
                      if ((-1 < (int)local_2d8) && ((uVar28 & 4) != 0)) {
                        FUN_180012a8c(0x20,iVar18,pFVar30,(int *)&local_2d8);
                      }
                    }
                  }
                  else {
                    if (iVar18 < 0x68) {
LAB_180012352:
                      bVar7 = true;
                      iVar18 = 0x200;
                      puVar19 = local_248;
                      if ((int)uVar27 < 0) {
                        uVar27 = 6;
                        iVar22 = 0x200;
                      }
                      else {
                        iVar22 = iVar18;
                        if (uVar27 == 0) {
                          if (bVar29 == 0x67) {
                            uVar27 = 1;
                          }
                        }
                        else {
                          if (0x200 < (int)uVar27) {
                            uVar27 = 0x200;
                          }
                          if (0xa3 < (int)uVar27) {
                            iVar22 = uVar27 + 0x15d;
                            local_290 = (ulonglong *)FUN_18001741c((longlong)iVar22);
                            puVar19 = local_290;
                            if (local_290 == (ulonglong *)0x0) {
                              uVar27 = 0xa3;
                              puVar19 = local_248;
                              iVar22 = iVar18;
                            }
                          }
                        }
                      }
                      local_278 = *param_4;
                      pcVar14 = (code *)DecodePointer(PTR_LAB_180036940);
                      (*pcVar14)(&local_278,puVar19,(longlong)iVar22,(int)(char)bVar29);
                      if ((bVar8) && (uVar27 == 0)) {
                        pcVar14 = (code *)DecodePointer(PTR_LAB_180036958);
                        (*pcVar14)(puVar19);
                      }
                      if ((bVar29 == 0x67) && (!bVar8)) {
                        pcVar14 = (code *)DecodePointer(PTR_LAB_180036950);
                        (*pcVar14)(puVar19);
                      }
                      if (*(char *)puVar19 == '-') {
                        bVar7 = true;
                        bVar3 = true;
                        puVar19 = (ulonglong *)((longlong)puVar19 + 1);
                      }
LAB_180012665:
                      pcVar15 = FUN_180018650(puVar19);
                      local_2d4 = (int)pcVar15;
                      puVar25 = puVar19;
LAB_180012670:
                      param_4 = param_4 + 1;
                      goto LAB_180012674;
                    }
                    if (iVar18 == 0x69) goto LAB_180012469;
                    if (iVar18 != 0x6e) {
                      if (iVar18 == 0x6f) {
                        iVar18 = 8;
                      }
                      else {
                        if (iVar18 == 0x70) {
                          uVar27 = 0x10;
                          bVar6 = true;
LAB_180012402:
                          local_2a8 = 7;
                        }
                        else {
                          if (iVar18 == 0x73) goto LAB_1800122ae;
                          if (iVar18 == 0x75) goto LAB_18001246d;
                          if (iVar18 != 0x78) goto LAB_180012674;
                          local_2a8 = 0x27;
                        }
                        iVar18 = 0x10;
                      }
                      goto LAB_180012477;
                    }
                    puVar19 = *param_4;
                    param_4 = param_4 + 1;
                    bVar10 = FUN_18001906c();
                    if ((int)CONCAT71(extraout_var,bVar10) == 0) goto LAB_1800129ec;
                    if ((uVar28 & 0x20) == 0) {
                      *(uint *)puVar19 = uVar12;
                    }
                    else {
                      *(WCHAR *)puVar19 = (WCHAR)uVar12;
                    }
                    local_2c0 = 1;
                  }
                  pbVar23 = local_280;
                  uVar20 = uVar27;
                  uVar12 = local_2d8;
                  if (local_290 != (ulonglong *)0x0) {
                    free(local_290);
                    local_290 = (ulonglong *)0x0;
                    pbVar23 = local_280;
                    uVar12 = local_2d8;
                  }
                }
              }
            }
          }
          uVar27 = uVar20;
          bVar29 = *pbVar23;
          param_2 = pbVar23;
          uVar20 = local_2bc;
        } while (bVar29 != 0);
        if ((uVar20 == 0) || (uVar20 == 7)) goto LAB_180012a06;
      }
    }
  }
LAB_1800129ec:
  puVar16 = __doserrno();
  *puVar16 = 0x16;
  FUN_180011d8c();
LAB_180012a06:
  if (local_258 != '\0') {
    *(uint *)(local_260 + 200) = *(uint *)(local_260 + 200) & 0xfffffffd;
  }
  FUN_18000f730(local_40 ^ (ulonglong)auStackY792);
  return;
}

/* Function: FUN_180012a44 */
void FUN_180012a44(byte param_1,FILE *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (((*(byte *)&param_2->_flag & 0x40) == 0) || (param_2->_base != (char *)0x0)) {
    piVar1 = &param_2->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar3 = FUN_180011de8((int)(char)param_1,param_2);
      uVar2 = (uint)uVar3;
    }
    else {
      *param_2->_ptr = param_1;
      param_2->_ptr = param_2->_ptr + 1;
      uVar2 = (uint)param_1;
    }
    if (uVar2 == 0xffffffff) {
      *param_3 = -1;
    }
    else {
      *param_3 = *param_3 + 1;
    }
  }
  else {
    *param_3 = *param_3 + 1;
  }
  return;
}

/* Function: FUN_180012a8c */
void FUN_180012a8c(byte param_1,int param_2,FILE *param_3,int *param_4)

{
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      FUN_180012a44(param_1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}

/* Function: FUN_180012ae0 */
void FUN_180012ae0(byte *param_1,int param_2,FILE *param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if (((*(byte *)&param_3->_flag & 0x40) == 0) || (param_3->_base != (char *)0x0)) {
    *param_5 = 0;
    if (0 < param_2) {
      do {
        param_2 = param_2 + -1;
        FUN_180012a44(*param_1,param_3,param_4);
        param_1 = param_1 + 1;
        if (*param_4 == -1) {
          if (*param_5 != 0x2a) break;
          FUN_180012a44(0x3f,param_3,param_4);
        }
      } while (0 < param_2);
      if (*param_5 != 0) {
        return;
      }
    }
    *param_5 = iVar1;
  }
  else {
    *param_4 = *param_4 + param_2;
  }
  return;
}

/* Function: FUN_180012b90 */
undefined (*) [16] FUN_180012b90(undefined (*param_1) [16],byte param_2,ulonglong param_3)

{
  uint uVar1;
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  undefined2 uVar4;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined auVar10 [12];
  undefined4 uVar5;
  undefined auVar11 [13];
  undefined auVar12 [16];
  undefined uVar13;
  
  if (0xf < param_3) {
    pauVar2 = param_1;
    if ((DAT_1800388fc >> 1 & 1) == 0) {
      uVar6 = (ulonglong)param_2 * 0x101010101010101;
      if ((DAT_1800388fc >> 2 & 1) != 0) {
        uVar13 = SUB141(ZEXT814(uVar6) >> 0x30,0);
        auVar11 = ZEXT813(uVar6);
        auVar10 = ZEXT812(uVar6);
        auVar12 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(CONCAT115(SUB1611(CONCAT106(
                                                  SUB1610(CONCAT97(SUB169(CONCAT88(SUB168(CONCAT79(
                                                  SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412
                                                  (SUB164(CONCAT313(SUB163(CONCAT214(SUB162(
                                                  CONCAT115(SUB161(ZEXT816(uVar6) >> 0x38,0),
                                                            CONCAT114(SUB151(ZEXT815(uVar6) >> 0x38,
                                                                             0),ZEXT814(uVar6))) >>
                                                  0x70,0),CONCAT113(uVar13,auVar11)) >> 0x68,0),
                                                  CONCAT112(uVar13,auVar10)) >> 0x60,0),
                                                  CONCAT111(SUB131(auVar11 >> 0x28,0),ZEXT811(uVar6)
                                                           )) >> 0x58,0),
                                                  CONCAT110(SUB121(auVar10 >> 0x28,0),
                                                            (unkuint10)uVar6)) >> 0x50,0),
                                                  CONCAT19(SUB131(auVar11 >> 0x20,0),(unkuint9)uVar6
                                                          )) >> 0x48,0),
                                                  CONCAT18(SUB121(auVar10 >> 0x20,0),uVar6)) >> 0x40
                                                  ,0),(uVar6 >> 0x18) << 0x38) >> 0x38,0),
                                                  ((uint7)uVar6 >> 0x18) << 0x30) >> 0x30,0),
                                                  ((uint6)uVar6 >> 0x10) << 0x28) >> 0x28,0),
                                                  ((uint5)uVar6 >> 0x10) << 0x20) >> 0x20,0),
                                                  ((uint)uVar6 >> 8) << 0x18) >> 0x18,0),
                                              ((uint3)uVar6 >> 8) << 0x10) >> 0x10,0),
                            (ushort)uVar6 & 0xff | (ushort)uVar6 << 8);
        if (((ulonglong)param_1 & 0xf) != 0) {
          *param_1 = auVar12;
          pauVar2 = (undefined (*) [16])((longlong)param_1 + (0x10 - ((ulonglong)param_1 & 0xf)));
          param_3 = (((ulonglong)param_1 & 0xf) - 0x10) + param_3;
        }
        uVar6 = param_3 >> 7;
        pauVar3 = pauVar2;
        if (uVar6 != 0) {
          do {
            *pauVar2 = auVar12;
            pauVar2[1] = auVar12;
            pauVar3 = pauVar2[8];
            pauVar2[2] = auVar12;
            pauVar2[3] = auVar12;
            uVar6 = uVar6 - 1;
            pauVar2[4] = auVar12;
            pauVar2[5] = auVar12;
            pauVar2[6] = auVar12;
            pauVar2[7] = auVar12;
            pauVar2 = pauVar3;
          } while (uVar6 != 0);
          param_3 = param_3 & 0x7f;
        }
        for (uVar6 = param_3 >> 4; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pauVar3 = auVar12;
          pauVar3 = pauVar3[1];
        }
        if ((param_3 & 0xf) != 0) {
          *(undefined (*) [16])(pauVar3[-1] + (param_3 & 0xf)) = auVar12;
        }
        return param_1;
      }
      if (0x3f < param_3) {
        uVar1 = -(int)param_1 & 7;
        uVar8 = param_3;
        if (uVar1 != 0) {
          uVar8 = param_3 - uVar1;
          *(ulonglong *)*param_1 = uVar6;
        }
        param_3 = uVar8 & 0x3f;
        pauVar2 = (undefined (*) [16])(*param_1 + uVar1);
        for (uVar8 = uVar8 >> 6; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(ulonglong *)*pauVar2 = uVar6;
          *(ulonglong *)(*pauVar2 + 8) = uVar6;
          *(ulonglong *)pauVar2[1] = uVar6;
          *(ulonglong *)(pauVar2[1] + 8) = uVar6;
          *(ulonglong *)pauVar2[2] = uVar6;
          *(ulonglong *)(pauVar2[2] + 8) = uVar6;
          *(ulonglong *)pauVar2[3] = uVar6;
          *(ulonglong *)(pauVar2[3] + 8) = uVar6;
          pauVar2 = pauVar2[4];
        }
      }
      uVar9 = param_3 & 7;
      for (uVar8 = param_3 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(ulonglong *)*pauVar2 = uVar6;
        pauVar2 = (undefined (*) [16])(*pauVar2 + 8);
      }
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        (*pauVar2)[0] = (char)uVar6;
        pauVar2 = (undefined (*) [16])(*pauVar2 + 1);
      }
    }
    else {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        (*pauVar2)[0] = param_2;
        pauVar2 = (undefined (*) [16])(*pauVar2 + 1);
      }
    }
    return param_1;
  }
  lVar7 = (ulonglong)param_2 * 0x101010101010101;
  uVar13 = (undefined)lVar7;
  uVar4 = (undefined2)lVar7;
  uVar5 = (undefined4)lVar7;
  switch(param_3) {
  case 0:
    return param_1;
  case 1:
    goto switchD_180012d22_caseD_1;
  case 8:
    *(longlong *)(param_1[-1] + param_3 + 8) = lVar7;
    return param_1;
  case 9:
    *(longlong *)(param_1[-1] + param_3 + 7) = lVar7;
    param_1[-1][param_3 + 0xf] = uVar13;
    return param_1;
  case 10:
    *(longlong *)(param_1[-1] + param_3 + 6) = lVar7;
    *(undefined2 *)(param_1[-1] + param_3 + 0xe) = uVar4;
    return param_1;
  case 0xb:
    *(longlong *)(param_1[-1] + param_3 + 5) = lVar7;
    break;
  case 0xc:
    *(longlong *)(param_1[-1] + param_3 + 4) = lVar7;
  case 4:
    *(undefined4 *)(param_1[-1] + param_3 + 0xc) = uVar5;
    return param_1;
  case 0xd:
    *(longlong *)(param_1[-1] + param_3 + 3) = lVar7;
  case 5:
    *(undefined4 *)(param_1[-1] + param_3 + 0xb) = uVar5;
    param_1[-1][param_3 + 0xf] = uVar13;
    return param_1;
  case 0xe:
    *(longlong *)(param_1[-1] + param_3 + 2) = lVar7;
  case 6:
    *(undefined4 *)(param_1[-1] + param_3 + 10) = uVar5;
  case 2:
    *(undefined2 *)(param_1[-1] + param_3 + 0xe) = uVar4;
    return param_1;
  case 0xf:
    *(longlong *)(param_1[-1] + param_3 + 1) = lVar7;
  case 7:
    *(undefined4 *)(param_1[-1] + param_3 + 9) = uVar5;
  }
  *(undefined2 *)(param_1[-1] + param_3 + 0xd) = uVar4;
switchD_180012d22_caseD_1:
  param_1[-1][param_3 + 0xf] = uVar13;
  return param_1;
}

/* Function: FID_conflict:_wrmdir */
/* Library Function - Multiple Matches With Different Base Names
    _wremove
    _wrmdir
   
   Library: Visual Studio 2012 Release */

int FID_conflict__wrmdir(wchar_t *_Filename)

{
  BOOL BVar1;
  ulong uVar2;
  int iVar3;
  
  BVar1 = DeleteFileW(_Filename);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 == 0) {
    iVar3 = 0;
  }
  else {
    _dosmaperr(uVar2);
    iVar3 = -1;
  }
  return iVar3;
}

/* Function: FUN_180012eb4 */
undefined ** FUN_180012eb4(void)

{
  return &PTR_DAT_1800361a0;
}

/* Function: _lock_file */
/* Library Function - Single Match
    _lock_file
   
   Library: Visual Studio 2012 Release */

void _lock_file(FILE *_File)

{
  if (((FILE *)0x18003619f < _File) && (_File < (FILE *)0x180036531)) {
    _lock((int)((longlong)&_File[-0x8001209]._base / 0x30) + 0x10);
    _File->_flag = _File->_flag | 0x8000;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180012f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}

/* Function: _lock_file2 */
/* Library Function - Single Match
    _lock_file2
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void _lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    _lock(_Index + 0x10);
    *(uint *)((longlong)_File + 0x18) = *(uint *)((longlong)_File + 0x18) | 0x8000;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180012f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)((longlong)_File + 0x30));
  return;
}

/* Function: _unlock_file */
/* Library Function - Single Match
    _unlock_file
   
   Library: Visual Studio 2012 Release */

void _unlock_file(FILE *_File)

{
  if (((FILE *)0x18003619f < _File) && (_File < (FILE *)0x180036531)) {
    _File->_flag = _File->_flag & 0xffff7fff;
    FUN_180017808((int)((longlong)&_File[-0x8001209]._base / 0x30) + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180012f9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}

/* Function: FUN_180012fa8 */
void FUN_180012fa8(int param_1,longlong param_2)

{
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0xffff7fff;
    FUN_180017808(param_1 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180012fbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x30));
  return;
}

/* Function: FUN_180012fc8 */
undefined8 * FUN_180012fc8(void)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int _Index;
  longlong lVar5;
  
  _lock(1);
  _Index = 0;
  do {
    puVar3 = (undefined8 *)0x0;
    if (DAT_1800392b8 <= _Index) {
LAB_1800130be:
      if (puVar3 != (undefined8 *)0x0) {
        *(uint *)(puVar3 + 3) = *(uint *)(puVar3 + 3) & 0x8000;
        *(undefined4 *)(puVar3 + 1) = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        puVar3[5] = 0;
        *(undefined4 *)((longlong)puVar3 + 0x1c) = 0xffffffff;
      }
      FUN_180017808(1);
      return puVar3;
    }
    lVar4 = (longlong)_Index;
    lVar5 = *(longlong *)(DAT_1800392b0 + lVar4 * 8);
    if (lVar5 == 0) {
      pvVar2 = FUN_18001741c(0x58);
      lVar5 = (longlong)_Index;
      *(void **)(DAT_1800392b0 + lVar5 * 8) = pvVar2;
      puVar3 = (undefined8 *)0x0;
      if (pvVar2 != (void *)0x0) {
        FUN_180016ee0((LPCRITICAL_SECTION)((longlong)pvVar2 + 0x30),4000);
        EnterCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_1800392b0 + lVar5 * 8) + 0x30));
        puVar3 = *(undefined8 **)(DAT_1800392b0 + lVar5 * 8);
        *(undefined4 *)(puVar3 + 3) = 0;
      }
      goto LAB_1800130be;
    }
    if (((*(byte *)(lVar5 + 0x18) & 0x83) == 0) && ((*(uint *)(lVar5 + 0x18) & 0x8000) == 0)) {
      if ((_Index - 3U < 0x11) && (uVar1 = FUN_1800176e4(_Index + 0x10), (int)uVar1 == 0))
      goto LAB_1800130be;
      _lock_file2(_Index,*(void **)(DAT_1800392b0 + lVar4 * 8));
      puVar3 = *(undefined8 **)(DAT_1800392b0 + lVar4 * 8);
      if ((*(byte *)(puVar3 + 3) & 0x83) == 0) goto LAB_1800130be;
      FUN_180012fa8(_Index,(longlong)puVar3);
    }
    _Index = _Index + 1;
  } while( true );
}

/* Function: FUN_180013100 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180013100(LPCSTR param_1,char *param_2,int param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  ulong *puVar10;
  ulonglong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint local_res10 [2];
  
  bVar6 = false;
  bVar3 = false;
  bVar7 = false;
  bVar4 = true;
  bVar2 = true;
  cVar1 = *param_2;
  while (cVar1 == ' ') {
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  }
  if (*param_2 == 'a') {
    uVar15 = 0x109;
LAB_18001317b:
    uVar14 = DAT_180038f10 | 2;
  }
  else {
    if (*param_2 != 'r') {
      if (*param_2 != 'w') goto LAB_180013151;
      uVar15 = 0x301;
      goto LAB_18001317b;
    }
    uVar15 = 0;
    uVar14 = DAT_180038f10 | 1;
  }
  pbVar12 = (byte *)(param_2 + 1);
  bVar8 = *pbVar12;
  if (bVar8 != 0) {
    do {
      if (!bVar2) break;
      bVar5 = bVar7;
      if ((char)bVar8 < 'T') {
        if (bVar8 == 0x53) {
          if (bVar3) goto LAB_180013275;
          uVar15 = uVar15 | 0x20;
          bVar3 = bVar4;
        }
        else if (bVar8 != 0x20) {
          if (bVar8 == 0x2b) {
            if ((uVar15 & 2) != 0) goto LAB_180013275;
            uVar15 = uVar15 & 0xfffffffe | 2;
            uVar14 = uVar14 & 0xfffffffc | 0x80;
          }
          else {
            bVar5 = bVar4;
            if (bVar8 == 0x2c) {
LAB_180013275:
              bVar2 = false;
              bVar7 = bVar5;
            }
            else if (bVar8 == 0x44) {
              bVar5 = bVar7;
              if ((uVar15 & 0x40) != 0) goto LAB_180013275;
              uVar15 = uVar15 | 0x40;
            }
            else if (bVar8 == 0x4e) {
              uVar15 = uVar15 | 0x80;
            }
            else {
              if (bVar8 != 0x52) goto LAB_180013151;
              bVar5 = bVar7;
              if (bVar3) goto LAB_180013275;
              uVar15 = uVar15 | 0x10;
              bVar3 = bVar4;
            }
          }
        }
      }
      else if (bVar8 == 0x54) {
        if ((uVar15 >> 0xc & 1) != 0) goto LAB_180013275;
        uVar15 = uVar15 | 0x1000;
      }
      else if (bVar8 == 0x62) {
        if ((uVar15 & 0xc000) != 0) goto LAB_180013275;
        uVar15 = uVar15 | 0x8000;
      }
      else if (bVar8 == 99) {
        if (bVar6) goto LAB_180013275;
        bVar6 = true;
        uVar14 = uVar14 | 0x4000;
      }
      else if (bVar8 == 0x6e) {
        if (bVar6) goto LAB_180013275;
        uVar14 = uVar14 & 0xffffbfff;
        bVar6 = bVar4;
      }
      else {
        if (bVar8 != 0x74) goto LAB_180013151;
        if ((uVar15 & 0xc000) != 0) goto LAB_180013275;
        uVar15 = uVar15 | 0x4000;
      }
      pbVar12 = pbVar12 + 1;
      bVar8 = *pbVar12;
    } while (bVar8 != 0);
    if (bVar7) {
      for (; *pbVar12 == 0x20; pbVar12 = pbVar12 + 1) {
      }
      uVar11 = FUN_1800196d4((ulonglong *)&DAT_180028060,pbVar12,3);
      if ((int)uVar11 != 0) goto LAB_180013151;
      for (pbVar12 = pbVar12 + 3; *pbVar12 == 0x20; pbVar12 = pbVar12 + 1) {
      }
      if (*pbVar12 != 0x3d) goto LAB_180013151;
      do {
        pbVar13 = pbVar12;
        pbVar12 = pbVar13 + 1;
      } while (*pbVar12 == 0x20);
      iVar9 = FUN_180019808(pbVar12,(byte *)"UTF-8",5);
      if (iVar9 == 0) {
        pbVar12 = pbVar13 + 6;
        uVar15 = uVar15 | 0x40000;
      }
      else {
        iVar9 = FUN_180019808(pbVar12,(byte *)"UTF-16LE",8);
        if (iVar9 == 0) {
          pbVar12 = pbVar13 + 9;
          uVar15 = uVar15 | 0x20000;
        }
        else {
          iVar9 = FUN_180019808(pbVar12,(byte *)"UNICODE",7);
          if (iVar9 != 0) goto LAB_180013151;
          pbVar12 = pbVar13 + 8;
          uVar15 = uVar15 | 0x10000;
        }
      }
    }
  }
  for (; *pbVar12 == 0x20; pbVar12 = pbVar12 + 1) {
  }
  if (*pbVar12 == 0) {
    iVar9 = FUN_1800196a0(local_res10,param_1,uVar15,param_3,0x180);
    if (iVar9 != 0) {
      return (undefined8 *)0x0;
    }
    _DAT_180038908 = _DAT_180038908 + 1;
    *(undefined4 *)(param_4 + 1) = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    *(uint *)((longlong)param_4 + 0x1c) = local_res10[0];
    *(uint *)(param_4 + 3) = uVar14;
    return param_4;
  }
LAB_180013151:
  puVar10 = __doserrno();
  *puVar10 = 0x16;
  FUN_180011d8c();
  return (undefined8 *)0x0;
}

/* Function: FUN_1800133bc */
undefined8
FUN_1800133bc(PEXCEPTION_RECORD param_1,PVOID param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  BOOL BVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  PEXCEPTION_RECORD local_38;
  undefined8 local_30;
  
  lVar2 = param_4[1];
  puVar3 = (uint *)param_4[7];
  uVar11 = *param_4 - lVar2;
  if ((*(byte *)&param_1->ExceptionFlags & 0x66) == 0) {
    local_38 = param_1;
    local_30 = param_3;
    for (uVar7 = *(uint *)(param_4 + 9); uVar7 < *puVar3; uVar7 = uVar7 + 1) {
      uVar8 = (ulonglong)uVar7;
      if (((puVar3[uVar8 * 4 + 1] <= uVar11) && (uVar11 < puVar3[uVar8 * 4 + 2])) &&
         (puVar3[uVar8 * 4 + 4] != 0)) {
        if (puVar3[uVar8 * 4 + 3] != 1) {
          iVar4 = (*(code *)((ulonglong)puVar3[uVar8 * 4 + 3] + lVar2))(&local_38,param_2);
          if (iVar4 < 0) {
            return 0;
          }
          if (iVar4 < 1) goto LAB_1800134c9;
        }
        if (((param_1->ExceptionCode == 0xe06d7363) &&
            (PTR___DestructExceptionObject_18002e5c8 != (undefined *)0x0)) &&
           (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&PTR___DestructExceptionObject_18002e5c8),
           BVar5 != 0)) {
          (*(code *)PTR___DestructExceptionObject_18002e5c8)(param_1,1);
        }
        FUN_1800135e0();
        RtlUnwindEx(param_2,(PVOID)((ulonglong)puVar3[uVar8 * 4 + 4] + lVar2),param_1,
                    (PVOID)(ulonglong)param_1->ExceptionCode,(PCONTEXT)param_4[5],
                    (PUNWIND_HISTORY_TABLE)param_4[8]);
        FUN_180013610();
      }
LAB_1800134c9:
    }
  }
  else {
    uVar8 = param_4[4] - lVar2;
    for (uVar7 = *(uint *)(param_4 + 9); uVar1 = *puVar3, uVar7 < uVar1; uVar7 = uVar7 + 1) {
      uVar6 = (ulonglong)uVar7;
      if ((puVar3[uVar6 * 4 + 1] <= uVar11) && (uVar11 < puVar3[uVar6 * 4 + 2])) {
        if ((*(byte *)&param_1->ExceptionFlags & 0x20) != 0) {
          uVar10 = 0;
          if (uVar1 != 0) {
            do {
              if ((((puVar3[uVar10 * 4 + 1] <= uVar8) && (uVar8 < puVar3[uVar10 * 4 + 2])) &&
                  (puVar3[uVar10 * 4 + 4] == puVar3[uVar6 * 4 + 4])) &&
                 (puVar3[uVar10 * 4 + 3] == puVar3[uVar6 * 4 + 3])) break;
              uVar9 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar9;
            } while (uVar9 < uVar1);
          }
          if ((uint)uVar10 != uVar1) {
            return 1;
          }
        }
        if (puVar3[uVar6 * 4 + 4] == 0) {
          *(uint *)(param_4 + 9) = uVar7 + 1;
          (*(code *)((ulonglong)puVar3[uVar6 * 4 + 3] + lVar2))();
        }
        else if (uVar8 == puVar3[uVar6 * 4 + 4]) {
          return 1;
        }
      }
    }
  }
  return 1;
}

/* Function: FUN_1800135b0 */
void FUN_1800135b0(PVOID param_1,PVOID param_2)

{
  RtlUnwindEx(param_1,param_2,(PEXCEPTION_RECORD)0x0,(PVOID)0x0,(PCONTEXT)&stack0xfffffffffffffb28,
              (PUNWIND_HISTORY_TABLE)0x0);
  return;
}

/* Function: FUN_1800135e0 */
void FUN_1800135e0(void)

{
  return;
}

/* Function: FUN_180013610 */
void FUN_180013610(void)

{
  return;
}

/* Function: FUN_180013614 */
ulonglong FUN_180013614(FILE *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  undefined *puVar5;
  
  if (param_1 == (FILE *)0x0) {
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_180011d8c();
  }
  else {
    uVar2 = param_1->_flag;
    if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
      if ((uVar2 & 2) == 0) {
        param_1->_flag = uVar2 | 1;
        if ((uVar2 & 0x10c) == 0) {
          _getbuf(param_1);
        }
        else {
          param_1->_ptr = param_1->_base;
        }
        uVar2 = _fileno(param_1);
        iVar3 = FUN_180013808(uVar2,(LPWSTR)param_1->_base,param_1->_bufsiz);
        param_1->_cnt = iVar3;
        if (1 < iVar3 + 1U) {
          if ((*(byte *)&param_1->_flag & 0x82) == 0) {
            iVar3 = _fileno(param_1);
            if ((iVar3 == -1) || (iVar3 = _fileno(param_1), iVar3 == -2)) {
              puVar5 = &DAT_180036660;
            }
            else {
              iVar3 = _fileno(param_1);
              uVar2 = _fileno(param_1);
              puVar5 = (undefined *)
                       ((ulonglong)(uVar2 & 0x1f) * 0x58 + (&DAT_180038910)[(longlong)iVar3 >> 5]);
            }
            if ((puVar5[8] & 0x82) == 0x82) {
              param_1->_flag = param_1->_flag | 0x2000;
            }
          }
          if (((param_1->_bufsiz == 0x200) && ((*(byte *)&param_1->_flag & 8) != 0)) &&
             ((param_1->_flag & 0x400U) == 0)) {
            param_1->_bufsiz = 0x1000;
          }
          param_1->_cnt = param_1->_cnt + -1;
          bVar1 = *param_1->_ptr;
          param_1->_ptr = param_1->_ptr + 1;
          return (ulonglong)bVar1;
        }
        param_1->_flag = param_1->_flag | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
        param_1->_cnt = 0;
      }
      else {
        param_1->_flag = uVar2 | 0x20;
      }
    }
  }
  return 0xffffffff;
}

/* Function: _fileno */
/* Library Function - Single Match
    _fileno
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

int _fileno(FILE *_File)

{
  int iVar1;
  ulong *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_180011d8c();
    iVar1 = -1;
  }
  else {
    iVar1 = _File->_file;
  }
  return iVar1;
}

/* Function: FUN_180013780 */
ulong FUN_180013780(undefined (*param_1) [16],ulonglong param_2,undefined8 *param_3,
                   ulonglong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (param_4 == 0) {
LAB_18001379d:
    uVar2 = 0;
  }
  else {
    if (param_1 == (undefined (*) [16])0x0) {
LAB_1800137a6:
      puVar1 = __doserrno();
      uVar2 = 0x16;
    }
    else {
      if ((param_3 != (undefined8 *)0x0) && (param_4 <= param_2)) {
        FUN_18000f860((undefined8 *)param_1,param_3,param_4);
        goto LAB_18001379d;
      }
      FUN_180012b90(param_1,0,param_2);
      if (param_3 == (undefined8 *)0x0) goto LAB_1800137a6;
      if (param_4 <= param_2) {
        return 0x16;
      }
      puVar1 = __doserrno();
      uVar2 = 0x22;
    }
    *puVar1 = uVar2;
    FUN_180011d8c();
  }
  return uVar2;
}

/* Function: FUN_180013808 */
int FUN_180013808(uint param_1,LPWSTR param_2,uint param_3)

{
  int iVar1;
  ulong *puVar2;
  longlong lVar3;
  
  if (param_1 == 0xfffffffe) {
    puVar2 = __doserrno();
    *puVar2 = 0;
    puVar2 = __doserrno();
    *puVar2 = 9;
    return -1;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_1800392a8)) {
    lVar3 = (ulonglong)(param_1 & 0x1f) * 0x58;
    if ((*(byte *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 + lVar3) & 1) != 0) {
      if (param_3 < 0x80000000) {
        FUN_1800199c0(param_1);
        if ((*(byte *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 + lVar3) & 1) == 0) {
          puVar2 = __doserrno();
          *puVar2 = 9;
          puVar2 = __doserrno();
          *puVar2 = 0;
          iVar1 = -1;
        }
        else {
          iVar1 = FUN_180013924(param_1,param_2,(ulonglong)param_3);
        }
        FUN_180019e20(param_1);
        return iVar1;
      }
      puVar2 = __doserrno();
      *puVar2 = 0;
      puVar2 = __doserrno();
      *puVar2 = 0x16;
      goto LAB_180013904;
    }
  }
  puVar2 = __doserrno();
  *puVar2 = 0;
  puVar2 = __doserrno();
  *puVar2 = 9;
LAB_180013904:
  FUN_180011d8c();
  return -1;
}

/* Function: FUN_180013924 */
/* WARNING: Could not reconcile some variable overlaps */

int FUN_180013924(uint param_1,LPWSTR param_2,ulonglong param_3)

{
  byte *pbVar1;
  char cVar2;
  undefined uVar3;
  WCHAR WVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  BOOL BVar9;
  ulong uVar10;
  DWORD DVar11;
  ulong *puVar12;
  LPWSTR lpMultiByteStr;
  undefined8 uVar13;
  int iVar14;
  ulonglong uVar15;
  LPWSTR pWVar16;
  WCHAR *pWVar17;
  int iVar18;
  LPWSTR pWVar19;
  LPWSTR pWVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  char local_res18 [8];
  LPWSTR local_res20;
  undefined2 local_68;
  DWORD local_64;
  int local_60;
  LPWSTR local_58;
  uint local_50;
  
  uVar15 = param_3 & 0xffffffff;
  local_60 = -2;
  local_58 = (LPWSTR)((ulonglong)local_58 & 0xffffffff00000000);
  local_50 = (uint)uVar15;
  if (param_1 == 0xfffffffe) {
    puVar12 = __doserrno();
    *puVar12 = 0;
    puVar12 = __doserrno();
    *puVar12 = 9;
    return -1;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_1800392a8)) {
    lVar21 = (longlong)(int)param_1 >> 5;
    lVar22 = (ulonglong)(param_1 & 0x1f) * 0x58;
    bVar6 = *(byte *)((&DAT_180038910)[lVar21] + 8 + lVar22);
    if ((bVar6 & 1) != 0) {
      if (local_50 < 0x80000000) {
        if ((local_50 == 0) || ((bVar6 & 2) != 0)) {
          return 0;
        }
        if (param_2 != (LPWSTR)0x0) {
          local_res20._0_1_ =
               (char)(*(char *)((&DAT_180038910)[lVar21] + 0x38 + lVar22) * '\x02') >> 1;
          local_res20 = (LPWSTR)((ulonglong)local_res20 & 0xffffffffffffff00 |
                                (ulonglong)(byte)local_res20);
          if ((byte)local_res20 == 1) {
            if ((~local_50 & 1) == 0) goto LAB_1800139bf;
            uVar8 = local_50 >> 1;
            if (local_50 >> 1 < 4) {
              uVar8 = 4;
            }
            uVar15 = (ulonglong)uVar8;
            lpMultiByteStr = (LPWSTR)FUN_18001741c(uVar15);
            if (lpMultiByteStr == (LPWSTR)0x0) {
              puVar12 = __doserrno();
              *puVar12 = 0xc;
              puVar12 = __doserrno();
              *puVar12 = 8;
              return -1;
            }
            uVar13 = FUN_180014ed8(param_1,0,1);
            *(undefined8 *)((&DAT_180038910)[lVar21] + 0x40 + lVar22) = uVar13;
          }
          else {
            lpMultiByteStr = param_2;
            if ((byte)local_res20 == 2) {
              if ((~local_50 & 1) == 0) goto LAB_1800139bf;
              uVar15 = (ulonglong)(local_50 & 0xfffffffe);
            }
          }
          pWVar19 = lpMultiByteStr;
          iVar18 = 0;
          if ((((*(byte *)((&DAT_180038910)[lVar21] + 8 + lVar22) & 0x48) != 0) &&
              (cVar2 = *(char *)((&DAT_180038910)[lVar21] + 9 + lVar22), iVar18 = 0, cVar2 != '\n'))
             && (iVar7 = (int)uVar15, iVar7 != 0)) {
            *(char *)lpMultiByteStr = cVar2;
            uVar15 = (ulonglong)(iVar7 - 1U);
            pWVar19 = (LPWSTR)((longlong)lpMultiByteStr + 1);
            iVar18 = 1;
            *(undefined *)((&DAT_180038910)[lVar21] + 9 + lVar22) = 10;
            if ((((byte)local_res20 != 0) &&
                (cVar2 = *(char *)((&DAT_180038910)[lVar21] + 0x39 + lVar22), cVar2 != '\n')) &&
               (iVar7 - 1U != 0)) {
              *(char *)pWVar19 = cVar2;
              uVar15 = (ulonglong)(iVar7 - 2U);
              pWVar19 = lpMultiByteStr + 1;
              iVar18 = 2;
              *(undefined *)((&DAT_180038910)[lVar21] + 0x39 + lVar22) = 10;
              if ((((byte)local_res20 == 1) &&
                  (cVar2 = *(char *)((&DAT_180038910)[lVar21] + 0x3a + lVar22), cVar2 != '\n')) &&
                 (iVar7 - 2U != 0)) {
                *(char *)pWVar19 = cVar2;
                pWVar19 = (LPWSTR)((longlong)lpMultiByteStr + 3);
                iVar18 = 3;
                uVar15 = (ulonglong)(iVar7 - 3);
                *(undefined *)((&DAT_180038910)[lVar21] + 0x3a + lVar22) = 10;
              }
            }
          }
          iVar7 = _isatty(param_1);
          if ((iVar7 == 0) || ((*(byte *)((&DAT_180038910)[lVar21] + 8 + lVar22) & 0x80) == 0)) {
LAB_180013bcb:
            BVar9 = ReadFile(*(HANDLE *)((&DAT_180038910)[lVar21] + lVar22),pWVar19,(DWORD)uVar15,
                             &local_64,(LPOVERLAPPED)0x0);
            if (((BVar9 != 0) && (-1 < (int)local_64)) &&
               ((ulonglong)(longlong)(int)local_64 <= uVar15)) {
LAB_180013c12:
              iVar18 = iVar18 + local_64;
              lVar5 = (&DAT_180038910)[lVar21];
              bVar6 = *(byte *)(lVar5 + 8 + lVar22);
              iVar7 = local_60;
              if (-1 < (char)bVar6) goto LAB_180013f6e;
              iVar14 = (int)lpMultiByteStr;
              if ((byte)local_res20 == '\x02') {
                if ((int)local_58 == 0) {
                  if ((local_64 == 0) || (*lpMultiByteStr != L'\n')) {
                    bVar6 = bVar6 & 0xfb;
                  }
                  else {
                    bVar6 = bVar6 | 4;
                  }
                  *(byte *)(lVar5 + 8 + lVar22) = bVar6;
                  local_res20 = (LPWSTR)((longlong)iVar18 + (longlong)lpMultiByteStr);
                  pWVar17 = lpMultiByteStr;
                  pWVar19 = lpMultiByteStr;
                  if (lpMultiByteStr < local_res20) {
                    do {
                      WVar4 = *pWVar19;
                      if (WVar4 == L'\x1a') {
                        bVar6 = *(byte *)((&DAT_180038910)[lVar21] + 8 + lVar22);
                        if ((bVar6 & 0x40) == 0) {
                          *(byte *)((&DAT_180038910)[lVar21] + 8 + lVar22) = bVar6 | 2;
                        }
                        else {
                          *pWVar17 = *pWVar19;
                          pWVar17 = pWVar17 + 1;
                        }
                        break;
                      }
                      if (WVar4 == L'\r') {
                        if (pWVar19 < local_res20 + -1) {
                          if (pWVar19[1] == L'\n') {
                            pWVar16 = pWVar19 + 2;
                            goto LAB_1800140b4;
                          }
LAB_1800140ec:
                          pWVar16 = pWVar19 + 1;
                          *pWVar17 = L'\r';
                        }
                        else {
                          pWVar16 = pWVar19 + 1;
                          BVar9 = ReadFile(*(HANDLE *)((&DAT_180038910)[lVar21] + lVar22),&local_68,
                                           2,&local_64,(LPOVERLAPPED)0x0);
                          if (((BVar9 == 0) && (DVar11 = GetLastError(), DVar11 != 0)) ||
                             (local_64 == 0)) goto LAB_1800140ec;
                          if ((*(byte *)((&DAT_180038910)[lVar21] + 8 + lVar22) & 0x48) == 0) {
                            if ((pWVar17 == lpMultiByteStr) && (local_68 == 10)) goto LAB_1800140b4;
                            FUN_180014ed8(param_1,0xfffffffffffffffe,1);
                            if (local_68 == 10) goto LAB_1800140f3;
                            goto LAB_1800140ec;
                          }
                          if (local_68 == 10) {
LAB_1800140b4:
                            *pWVar17 = L'\n';
                          }
                          else {
                            *pWVar17 = L'\r';
                            *(undefined *)((&DAT_180038910)[lVar21] + 9 + lVar22) =
                                 (undefined)local_68;
                            *(undefined *)((&DAT_180038910)[lVar21] + 0x39 + lVar22) =
                                 local_68._1_1_;
                            *(undefined *)((&DAT_180038910)[lVar21] + 0x3a + lVar22) = 10;
                          }
                        }
                        pWVar17 = pWVar17 + 1;
                      }
                      else {
                        *pWVar17 = WVar4;
                        pWVar17 = pWVar17 + 1;
                        pWVar16 = pWVar19 + 1;
                      }
LAB_1800140f3:
                      pWVar19 = pWVar16;
                    } while (pWVar16 < local_res20);
                  }
                  iVar18 = (int)pWVar17 - iVar14;
                  iVar7 = local_60;
                }
                else {
                  pWVar17 = lpMultiByteStr;
                  pWVar19 = lpMultiByteStr;
                  while (pWVar19 < lpMultiByteStr + iVar18 / 2) {
                    WVar4 = *pWVar19;
                    if (WVar4 == L'\x1a') {
                      pbVar1 = (byte *)((&DAT_180038910)[lVar21] + 8 + lVar22);
                      *pbVar1 = *pbVar1 | 2;
                      break;
                    }
                    if (WVar4 == L'\r') {
                      if (pWVar19 < lpMultiByteStr + iVar18 / 2 + -1) {
                        pWVar19 = pWVar19 + 1;
                        if (*pWVar19 == L'\n') {
                          *pWVar17 = L'\n';
                        }
                        else {
                          *pWVar17 = L'\r';
                        }
                        pWVar17 = pWVar17 + 1;
                      }
                    }
                    else {
                      *pWVar17 = WVar4;
                      pWVar17 = pWVar17 + 1;
                      pWVar19 = pWVar19 + 1;
                    }
                  }
                  iVar18 = (int)((longlong)pWVar17 - (longlong)lpMultiByteStr >> 1) * 2;
                }
                goto LAB_180013f6e;
              }
              if ((local_64 == 0) || (*(char *)lpMultiByteStr != '\n')) {
                bVar6 = bVar6 & 0xfb;
              }
              else {
                bVar6 = bVar6 | 4;
              }
              *(byte *)(lVar5 + 8 + lVar22) = bVar6;
              local_58 = (LPWSTR)((longlong)iVar18 + (longlong)lpMultiByteStr);
              pWVar19 = lpMultiByteStr;
              pWVar16 = lpMultiByteStr;
              if (lpMultiByteStr < local_58) {
                do {
                  cVar2 = *(char *)pWVar16;
                  if (cVar2 == '\x1a') {
                    bVar6 = *(byte *)((&DAT_180038910)[lVar21] + 8 + lVar22);
                    if ((bVar6 & 0x40) == 0) {
                      *(byte *)((&DAT_180038910)[lVar21] + 8 + lVar22) = bVar6 | 2;
                    }
                    else {
                      *(undefined *)pWVar19 = *(undefined *)pWVar16;
                      pWVar19 = (LPWSTR)((longlong)pWVar19 + 1);
                    }
                    break;
                  }
                  if (cVar2 == '\r') {
                    if (pWVar16 < (LPWSTR)((longlong)local_58 + -1)) {
                      if (*(char *)((longlong)pWVar16 + 1) == '\n') {
                        pWVar20 = pWVar16 + 1;
                        goto LAB_180013d35;
                      }
LAB_180013d6a:
                      pWVar20 = (LPWSTR)((longlong)pWVar16 + 1);
                      *(undefined *)pWVar19 = 0xd;
                    }
                    else {
                      pWVar20 = (LPWSTR)((longlong)pWVar16 + 1);
                      BVar9 = ReadFile(*(HANDLE *)((&DAT_180038910)[lVar21] + lVar22),local_res18,1,
                                       &local_64,(LPOVERLAPPED)0x0);
                      if (((BVar9 == 0) && (DVar11 = GetLastError(), DVar11 != 0)) ||
                         (local_64 == 0)) goto LAB_180013d6a;
                      if ((*(byte *)((&DAT_180038910)[lVar21] + 8 + lVar22) & 0x48) == 0) {
                        if ((pWVar19 == lpMultiByteStr) && (local_res18[0] == '\n'))
                        goto LAB_180013d35;
                        FUN_180014ed8(param_1,0xffffffffffffffff,1);
                        if (local_res18[0] == '\n') goto LAB_180013d70;
                        goto LAB_180013d6a;
                      }
                      if (local_res18[0] == '\n') {
LAB_180013d35:
                        *(undefined *)pWVar19 = 10;
                      }
                      else {
                        *(undefined *)pWVar19 = 0xd;
                        *(char *)((&DAT_180038910)[lVar21] + 9 + lVar22) = local_res18[0];
                      }
                    }
                    pWVar19 = (LPWSTR)((longlong)pWVar19 + 1);
                  }
                  else {
                    *(char *)pWVar19 = cVar2;
                    pWVar19 = (LPWSTR)((longlong)pWVar19 + 1);
                    pWVar20 = (LPWSTR)((longlong)pWVar16 + 1);
                  }
LAB_180013d70:
                  pWVar16 = pWVar20;
                } while (pWVar20 < local_58);
              }
              iVar18 = (int)pWVar19 - iVar14;
              iVar7 = local_60;
              if (((byte)local_res20 != '\x01') || (iVar18 == 0)) goto LAB_180013f6e;
              if ((*(byte *)(LPWSTR)((longlong)pWVar19 + -1) & 0x80) != 0) {
                iVar7 = 1;
                for (pWVar19 = (LPWSTR)((longlong)pWVar19 + -1);
                    (((&DAT_180036560)[*(byte *)pWVar19] == '\0' && (iVar7 < 5)) &&
                    (lpMultiByteStr <= pWVar19)); pWVar19 = (LPWSTR)((longlong)pWVar19 + -1)) {
                  iVar7 = iVar7 + 1;
                }
                if ((&DAT_180036560)[*(byte *)pWVar19] == '\0') {
                  puVar12 = __doserrno();
                  *puVar12 = 0x2a;
                  goto LAB_180013bb8;
                }
                if ((char)(&DAT_180036560)[*(byte *)pWVar19] + 1 == iVar7) {
                  pWVar19 = (LPWSTR)((longlong)pWVar19 + (longlong)iVar7);
                }
                else if ((*(byte *)((&DAT_180038910)[lVar21] + 8 + lVar22) & 0x48) == 0) {
                  FUN_180014ed8(param_1,(longlong)-iVar7,1);
                }
                else {
                  pWVar16 = (LPWSTR)((longlong)pWVar19 + 1);
                  *(byte *)((&DAT_180038910)[lVar21] + 9 + lVar22) = *(byte *)pWVar19;
                  if (1 < iVar7) {
                    uVar3 = *(undefined *)pWVar16;
                    pWVar16 = pWVar19 + 1;
                    *(undefined *)((&DAT_180038910)[lVar21] + 0x39 + lVar22) = uVar3;
                  }
                  if (iVar7 == 3) {
                    uVar3 = *(undefined *)pWVar16;
                    pWVar16 = (LPWSTR)((longlong)pWVar16 + 1);
                    *(undefined *)((&DAT_180038910)[lVar21] + 0x3a + lVar22) = uVar3;
                  }
                  pWVar19 = (LPWSTR)((longlong)pWVar16 - (longlong)iVar7);
                }
              }
              iVar14 = (int)pWVar19 - iVar14;
              iVar18 = MultiByteToWideChar(0xfde9,0,(LPCSTR)lpMultiByteStr,iVar14,param_2,
                                           local_50 >> 1);
              if (iVar18 == 0) {
                DVar11 = GetLastError();
                _dosmaperr(DVar11);
                iVar7 = -1;
              }
              else {
                bVar23 = iVar18 != iVar14;
                iVar18 = iVar18 * 2;
                *(uint *)((&DAT_180038910)[lVar21] + 0x48 + lVar22) = (uint)bVar23;
                iVar7 = local_60;
              }
              goto LAB_180013f6e;
            }
            uVar10 = GetLastError();
            if (uVar10 != 5) {
              iVar7 = 0;
              if (uVar10 == 0x6d) goto LAB_180013f6e;
              goto LAB_180013bb1;
            }
            puVar12 = __doserrno();
            *puVar12 = 9;
            puVar12 = __doserrno();
            *puVar12 = 5;
          }
          else {
            uVar8 = GetConsoleMode(*(HANDLE *)((&DAT_180038910)[lVar21] + lVar22),(LPDWORD)&local_58
                                  );
            local_58 = (LPWSTR)((ulonglong)local_58 & 0xffffffff00000000 | (ulonglong)uVar8);
            if ((uVar8 == 0) || ((byte)local_res20 != '\x02')) goto LAB_180013bcb;
            BVar9 = ReadConsoleW(*(HANDLE *)((&DAT_180038910)[lVar21] + lVar22),pWVar19,
                                 (DWORD)(uVar15 >> 1),&local_64,(PCONSOLE_READCONSOLE_CONTROL)0x0);
            if (BVar9 != 0) {
              local_64 = local_64 * 2;
              goto LAB_180013c12;
            }
            uVar10 = GetLastError();
LAB_180013bb1:
            _dosmaperr(uVar10);
          }
LAB_180013bb8:
          iVar7 = -1;
LAB_180013f6e:
          if (lpMultiByteStr != param_2) {
            free(lpMultiByteStr);
          }
          if (iVar7 == -2) {
            return iVar18;
          }
          return iVar7;
        }
      }
LAB_1800139bf:
      puVar12 = __doserrno();
      *puVar12 = 0;
      puVar12 = __doserrno();
      *puVar12 = 0x16;
      goto LAB_18001417b;
    }
  }
  puVar12 = __doserrno();
  *puVar12 = 0;
  puVar12 = __doserrno();
  *puVar12 = 9;
LAB_18001417b:
  FUN_180011d8c();
  return -1;
}

/* Function: FUN_180014194 */
undefined4 FUN_180014194(uint param_1,WCHAR *param_2,uint param_3)

{
  undefined4 uVar1;
  ulong *puVar2;
  longlong lVar3;
  
  if (param_1 == 0xfffffffe) {
    puVar2 = __doserrno();
    *puVar2 = 0;
    puVar2 = __doserrno();
    *puVar2 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1800392a8)) {
      lVar3 = (ulonglong)(param_1 & 0x1f) * 0x58;
      if ((*(byte *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 + lVar3) & 1) != 0) {
        FUN_1800199c0(param_1);
        if ((*(byte *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 + lVar3) & 1) == 0) {
          puVar2 = __doserrno();
          *puVar2 = 9;
          puVar2 = __doserrno();
          *puVar2 = 0;
          uVar1 = 0xffffffff;
        }
        else {
          uVar1 = FUN_180014278(param_1,param_2,(ulonglong)param_3);
        }
        FUN_180019e20(param_1);
        return uVar1;
      }
    }
    puVar2 = __doserrno();
    *puVar2 = 0;
    puVar2 = __doserrno();
    *puVar2 = 9;
    FUN_180011d8c();
  }
  return 0xffffffff;
}

/* Function: FUN_180014278 */
void FUN_180014278(uint param_1,WCHAR *param_2,ulonglong param_3)

{
  char cVar1;
  undefined uVar2;
  wchar_t *pwVar3;
  HANDLE pvVar4;
  WCHAR WVar5;
  WCHAR WVar6;
  int iVar7;
  BOOL BVar8;
  UINT UVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  ulong uVar13;
  longlong lVar14;
  ulong *puVar15;
  _ptiddata p_Var16;
  uint uVar17;
  uint uVar18;
  DWORD DVar19;
  int iVar20;
  WCHAR *pWVar21;
  longlong lVar22;
  WCHAR *pWVar23;
  ulonglong uVar24;
  char cVar25;
  longlong lVar26;
  int iVar27;
  uint nNumberOfBytesToWrite;
  bool bVar28;
  int iStackX8;
  WCHAR aWStackX12 [2];
  longlong lStackX16;
  DWORD aDStackX24 [2];
  WCHAR local_1af8 [856];
  WCHAR local_1448 [2560];
  ulonglong local_48;
  undefined8 uStack64;
  
  iVar10 = (int)register0x00000020;
  uStack64 = 0x18001429a;
  lVar14 = FUN_180015000();
  lVar14 = -lVar14;
  local_48 = DAT_180036000 ^ (ulonglong)(&stack0xffffffffffffffc8 + lVar14);
  uVar18 = 0;
  DVar12 = 0;
  uVar13 = 0;
  uVar17 = 0;
  *(undefined4 *)((longlong)&iStackX8 + lVar14) = 0;
  DVar19 = 0;
  if ((int)param_3 == 0) goto LAB_180014a3f;
  if (param_2 == (WCHAR *)0x0) {
    *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x1800142db;
    puVar15 = __doserrno();
    *puVar15 = 0;
LAB_1800142de:
    *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x1800142e3;
    puVar15 = __doserrno();
    *puVar15 = 0x16;
    *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x1800142ee;
    FUN_180011d8c();
    goto LAB_180014a3f;
  }
  *(longlong *)((longlong)&lStackX16 + lVar14) = (longlong)(int)param_1 >> 5;
  lVar22 = (&DAT_180038910)[(longlong)(int)param_1 >> 5];
  lVar26 = (ulonglong)(param_1 & 0x1f) * 0x58;
  cVar25 = *(char *)(lVar26 + 0x38 + lVar22);
  *(longlong *)(&stack0x00000020 + lVar14) = lVar26;
  cVar25 = (char)(cVar25 * '\x02') >> 1;
  nNumberOfBytesToWrite = (uint)(param_3 & 0xffffffff);
  if (((byte)(cVar25 - 1U) < 2) && ((~nNumberOfBytesToWrite & 1) == 0)) {
    *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x18001433e;
    puVar15 = __doserrno();
    *puVar15 = 0;
    goto LAB_1800142de;
  }
  if ((*(byte *)(lVar26 + 8 + lVar22) & 0x20) != 0) {
    *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x180014359;
    FUN_180014ed8(param_1,0,2);
  }
  *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x180014360;
  iVar7 = _isatty(param_1);
  lVar22 = *(longlong *)((longlong)&lStackX16 + lVar14);
  iVar27 = (int)param_2;
  if ((iVar7 == 0) || ((*(byte *)(lVar26 + 8 + (&DAT_180038910)[lVar22]) & 0x80) == 0)) {
LAB_1800146af:
    DVar12 = 0;
    if ((*(byte *)(lVar26 + 8 + (&DAT_180038910)[lVar22]) & 0x80) != 0) {
      DVar11 = 0;
      if (cVar25 == '\0') {
        pWVar21 = param_2;
        uVar17 = uVar18;
        if (nNumberOfBytesToWrite != 0) {
          do {
            uVar24 = 0;
            iVar7 = *(int *)((longlong)&iStackX8 + lVar14);
            pWVar23 = local_1448;
            do {
              if (nNumberOfBytesToWrite <= (uint)((int)pWVar21 - iVar27)) break;
              cVar25 = *(char *)pWVar21;
              pWVar21 = (WCHAR *)((longlong)pWVar21 + 1);
              if (cVar25 == '\n') {
                *(char *)pWVar23 = '\r';
                iVar7 = iVar7 + 1;
                pWVar23 = (WCHAR *)((longlong)pWVar23 + 1);
                uVar24 = uVar24 + 1;
              }
              uVar24 = uVar24 + 1;
              *(char *)pWVar23 = cVar25;
              pWVar23 = (WCHAR *)((longlong)pWVar23 + 1);
            } while (uVar24 < 0x13ff);
            *(int *)((longlong)&iStackX8 + lVar14) = iVar7;
            lVar26 = *(longlong *)(&stack0x00000020 + lVar14);
            pvVar4 = *(HANDLE *)
                      (lVar26 + (&DAT_180038910)[*(longlong *)((longlong)&lStackX16 + lVar14)]);
            *(undefined8 *)(&stack0xffffffffffffffe8 + lVar14) = 0;
            *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x180014765;
            BVar8 = WriteFile(pvVar4,local_1448,(int)pWVar23 - (iVar10 + -0x1448),
                              (LPDWORD)((longlong)aDStackX24 + lVar14),
                              *(LPOVERLAPPED *)(&stack0xffffffffffffffe8 + lVar14));
            if (BVar8 == 0) goto LAB_18001464f;
            uVar17 = uVar17 + *(int *)((longlong)aDStackX24 + lVar14);
          } while (((longlong)pWVar23 - (longlong)local_1448 <=
                    (longlong)*(int *)((longlong)aDStackX24 + lVar14)) &&
                  ((uint)((int)pWVar21 - iVar27) < nNumberOfBytesToWrite));
          goto LAB_180014666;
        }
      }
      else if (cVar25 == '\x02') {
        pWVar21 = param_2;
        uVar17 = uVar18;
        if (nNumberOfBytesToWrite != 0) {
          do {
            uVar24 = 0;
            iVar7 = *(int *)((longlong)&iStackX8 + lVar14);
            pWVar23 = local_1448;
            do {
              if (nNumberOfBytesToWrite <= (uint)((int)pWVar21 - iVar27)) break;
              WVar5 = *pWVar21;
              pWVar21 = pWVar21 + 1;
              if (WVar5 == L'\n') {
                *pWVar23 = L'\r';
                iVar7 = iVar7 + 2;
                pWVar23 = pWVar23 + 1;
                uVar24 = uVar24 + 2;
              }
              uVar24 = uVar24 + 2;
              *pWVar23 = WVar5;
              pWVar23 = pWVar23 + 1;
            } while (uVar24 < 0x13fe);
            *(int *)((longlong)&iStackX8 + lVar14) = iVar7;
            lVar26 = *(longlong *)(&stack0x00000020 + lVar14);
            pvVar4 = *(HANDLE *)
                      (lVar26 + (&DAT_180038910)[*(longlong *)((longlong)&lStackX16 + lVar14)]);
            *(undefined8 *)(&stack0xffffffffffffffe8 + lVar14) = 0;
            *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x180014852;
            BVar8 = WriteFile(pvVar4,local_1448,(int)pWVar23 - (iVar10 + -0x1448),
                              (LPDWORD)((longlong)aDStackX24 + lVar14),
                              *(LPOVERLAPPED *)(&stack0xffffffffffffffe8 + lVar14));
            if (BVar8 == 0) goto LAB_18001464f;
            uVar17 = uVar17 + *(int *)((longlong)aDStackX24 + lVar14);
          } while (((longlong)pWVar23 - (longlong)local_1448 <=
                    (longlong)*(int *)((longlong)aDStackX24 + lVar14)) &&
                  ((uint)((int)pWVar21 - iVar27) < nNumberOfBytesToWrite));
          goto LAB_180014666;
        }
      }
      else {
        pWVar21 = param_2;
        uVar17 = uVar18;
        if (nNumberOfBytesToWrite != 0) {
          do {
            uVar24 = 0;
            pWVar23 = local_1af8;
            do {
              if (nNumberOfBytesToWrite <= (uint)((int)pWVar21 - iVar27)) break;
              WVar5 = *pWVar21;
              pWVar21 = pWVar21 + 1;
              if (WVar5 == L'\n') {
                *pWVar23 = L'\r';
                pWVar23 = pWVar23 + 1;
                uVar24 = uVar24 + 2;
              }
              uVar24 = uVar24 + 2;
              *pWVar23 = WVar5;
              pWVar23 = pWVar23 + 1;
            } while (uVar24 < 0x6a8);
            iVar20 = 0;
            *(undefined8 *)(&stack0x00000000 + lVar14) = 0;
            *(undefined8 *)(&stack0xfffffffffffffff8 + lVar14) = 0;
            *(undefined4 *)(&stack0xfffffffffffffff0 + lVar14) = 0xd55;
            *(WCHAR **)(&stack0xffffffffffffffe8 + lVar14) = local_1448;
            *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x18001492b;
            iVar7 = WideCharToMultiByte(0xfde9,0,local_1af8,((int)pWVar23 - (iVar10 + -0x1af8)) / 2,
                                        *(LPSTR *)(&stack0xffffffffffffffe8 + lVar14),
                                        *(int *)(&stack0xfffffffffffffff0 + lVar14),
                                        *(LPCSTR *)(&stack0xfffffffffffffff8 + lVar14),
                                        *(LPBOOL *)(&stack0x00000000 + lVar14));
            uVar18 = uVar17;
            if (iVar7 == 0) goto LAB_180014659;
            do {
              lVar22 = (&DAT_180038910)[*(longlong *)((longlong)&lStackX16 + lVar14)];
              *(undefined8 *)(&stack0xffffffffffffffe8 + lVar14) = 0;
              pvVar4 = *(HANDLE *)(*(longlong *)(&stack0x00000020 + lVar14) + lVar22);
              *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x180014974;
              BVar8 = WriteFile(pvVar4,(LPCVOID)((longlong)local_1448 + (longlong)iVar20),
                                iVar7 - iVar20,(LPDWORD)((longlong)aDStackX24 + lVar14),
                                *(LPOVERLAPPED *)(&stack0xffffffffffffffe8 + lVar14));
              if (BVar8 == 0) {
                *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x180014989;
                DVar12 = GetLastError();
                break;
              }
              iVar20 = iVar20 + *(int *)((longlong)aDStackX24 + lVar14);
            } while (iVar20 < iVar7);
          } while ((iVar7 <= iVar20) &&
                  (uVar17 = (int)pWVar21 - iVar27, uVar17 < nNumberOfBytesToWrite));
          goto LAB_180014661;
        }
      }
      goto LAB_180014a07;
    }
    pvVar4 = *(HANDLE *)(lVar26 + (&DAT_180038910)[lVar22]);
    *(undefined8 *)(&stack0xffffffffffffffe8 + lVar14) = 0;
    *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x1800149c9;
    BVar8 = WriteFile(pvVar4,param_2,nNumberOfBytesToWrite,(LPDWORD)((longlong)aDStackX24 + lVar14),
                      *(LPOVERLAPPED *)(&stack0xffffffffffffffe8 + lVar14));
    if (BVar8 == 0) {
      *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x1800149de;
      uVar13 = GetLastError();
    }
    else {
      uVar17 = *(uint *)((longlong)aDStackX24 + lVar14);
      uVar13 = 0;
    }
    goto LAB_18001466f;
  }
  *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x180014389;
  p_Var16 = _getptd();
  pwVar3 = p_Var16->ptlocinfo->locale_name[2];
  pvVar4 = *(HANDLE *)(lVar26 + (&DAT_180038910)[*(longlong *)((longlong)&lStackX16 + lVar14)]);
  *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x1800143bf;
  BVar8 = GetConsoleMode(pvVar4,(LPDWORD)(&stack0x0000002c + lVar14));
  if (BVar8 == 0) {
    lVar22 = *(longlong *)((longlong)&lStackX16 + lVar14);
    goto LAB_1800146af;
  }
  if ((pwVar3 == (wchar_t *)0x0) && (cVar25 == '\0')) {
    lVar22 = *(longlong *)((longlong)&lStackX16 + lVar14);
    goto LAB_1800146af;
  }
  *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x1800143de;
  UVar9 = GetConsoleCP();
  *(UINT *)(&stack0x00000030 + lVar14) = UVar9;
  WVar5 = L'\0';
  *(undefined2 *)((longlong)aWStackX12 + lVar14) = 0;
  *(undefined4 *)(&stack0x00000028 + lVar14) = 0;
  pWVar21 = param_2;
  uVar17 = uVar18;
  if (nNumberOfBytesToWrite != 0) {
    do {
      bVar28 = false;
      uVar18 = uVar17;
      if (cVar25 == '\0') {
        cVar1 = *(char *)pWVar21;
        lVar26 = *(longlong *)(&stack0x00000020 + lVar14);
        *(uint *)(&stack0x0000002c + lVar14) = (uint)(cVar1 == '\n');
        lVar22 = (&DAT_180038910)[*(longlong *)((longlong)&lStackX16 + lVar14)];
        if (*(int *)(lVar26 + 0x50 + lVar22) == 0) {
          *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x18001445a;
          iVar10 = isleadbyte((int)cVar1);
          if (iVar10 == 0) {
            uVar24 = 1;
            pWVar23 = pWVar21;
            goto LAB_18001449b;
          }
          if ((longlong)(((param_3 & 0xffffffff) - (longlong)pWVar21) + (longlong)param_2) < 2) {
            lVar22 = *(longlong *)((longlong)&lStackX16 + lVar14);
            uVar17 = uVar17 + 1;
            *(undefined *)(lVar26 + 0x4c + (&DAT_180038910)[lVar22]) = *(undefined *)pWVar21;
            *(undefined4 *)(lVar26 + 0x50 + (&DAT_180038910)[lVar22]) = 1;
            goto LAB_18001466f;
          }
          *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x180014484;
          iVar10 = FUN_180019fa0((LPWSTR)((longlong)aWStackX12 + lVar14),(byte *)pWVar21,2);
          DVar11 = DVar19;
          if (iVar10 == -1) break;
          pWVar21 = (WCHAR *)((longlong)pWVar21 + 1);
        }
        else {
          uVar2 = *(undefined *)(lVar26 + 0x4c + lVar22);
          (&stack0x00000035)[lVar14] = cVar1;
          (&stack0x00000034)[lVar14] = uVar2;
          *(undefined4 *)(lVar26 + 0x50 + lVar22) = 0;
          uVar24 = 2;
          pWVar23 = (WCHAR *)(&stack0x00000034 + lVar14);
LAB_18001449b:
          *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x1800144a5;
          iVar10 = FUN_180019fa0((LPWSTR)((longlong)aWStackX12 + lVar14),(byte *)pWVar23,uVar24);
          DVar11 = 0;
          if (iVar10 == -1) break;
        }
        *(undefined8 *)(&stack0x00000000 + lVar14) = 0;
        *(undefined8 *)(&stack0xfffffffffffffff8 + lVar14) = 0;
        *(undefined4 *)(&stack0xfffffffffffffff0 + lVar14) = 5;
        *(undefined **)(&stack0xffffffffffffffe8 + lVar14) = &stack0x00000034 + lVar14;
        pWVar21 = (WCHAR *)((longlong)pWVar21 + 1);
        *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x1800144e6;
        DVar11 = WideCharToMultiByte(*(UINT *)(&stack0x00000030 + lVar14),0,
                                     (LPCWSTR)((longlong)aWStackX12 + lVar14),1,
                                     *(LPSTR *)(&stack0xffffffffffffffe8 + lVar14),
                                     *(int *)(&stack0xfffffffffffffff0 + lVar14),
                                     *(LPCSTR *)(&stack0xfffffffffffffff8 + lVar14),
                                     *(LPBOOL *)(&stack0x00000000 + lVar14));
        if (DVar11 == 0) goto LAB_180014661;
        lVar22 = (&DAT_180038910)[*(longlong *)((longlong)&lStackX16 + lVar14)];
        *(undefined8 *)(&stack0xffffffffffffffe8 + lVar14) = 0;
        pvVar4 = *(HANDLE *)(*(longlong *)(&stack0x00000020 + lVar14) + lVar22);
        *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x180014524;
        BVar8 = WriteFile(pvVar4,&stack0x00000034 + lVar14,DVar11,
                          (LPDWORD)(&stack0x00000028 + lVar14),
                          *(LPOVERLAPPED *)(&stack0xffffffffffffffe8 + lVar14));
        if (BVar8 == 0) goto LAB_180014659;
        uVar17 = ((int)pWVar21 - iVar27) + *(int *)((longlong)&iStackX8 + lVar14);
        if (*(int *)(&stack0x00000028 + lVar14) < (int)DVar11) {
          lVar26 = *(longlong *)(&stack0x00000020 + lVar14);
          lVar22 = *(longlong *)((longlong)&lStackX16 + lVar14);
          uVar13 = 0;
          goto LAB_18001466f;
        }
        if (*(int *)(&stack0x0000002c + lVar14) == 0) {
          WVar5 = *(WCHAR *)((longlong)aWStackX12 + lVar14);
          uVar18 = uVar17;
          goto LAB_18001460e;
        }
        (&stack0x00000034)[lVar14] = 0xd;
        *(undefined8 *)(&stack0xffffffffffffffe8 + lVar14) = 0;
        lVar26 = *(longlong *)(&stack0x00000020 + lVar14);
        pvVar4 = *(HANDLE *)
                  (lVar26 + (&DAT_180038910)[*(longlong *)((longlong)&lStackX16 + lVar14)]);
        *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x180014584;
        BVar8 = WriteFile(pvVar4,&stack0x00000034 + lVar14,1,(LPDWORD)(&stack0x00000028 + lVar14),
                          *(LPOVERLAPPED *)(&stack0xffffffffffffffe8 + lVar14));
        if (BVar8 == 0) goto LAB_18001464f;
        DVar11 = DVar19;
        if (*(int *)(&stack0x00000028 + lVar14) < 1) break;
        *(int *)((longlong)&iStackX8 + lVar14) = *(int *)((longlong)&iStackX8 + lVar14) + 1;
        WVar5 = *(WCHAR *)((longlong)aWStackX12 + lVar14);
        uVar17 = uVar17 + 1;
      }
      else {
        if ((byte)(cVar25 - 1U) < 2) {
          WVar5 = *pWVar21;
          bVar28 = WVar5 == L'\n';
          *(WCHAR *)((longlong)aWStackX12 + lVar14) = WVar5;
          pWVar21 = pWVar21 + 1;
        }
        if ((byte)(cVar25 - 1U) < 2) {
          *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x1800145db;
          WVar6 = FUN_180019fa8(WVar5);
          WVar5 = *(WCHAR *)((longlong)aWStackX12 + lVar14);
          if (WVar6 != WVar5) goto LAB_180014659;
          uVar18 = uVar17 + 2;
          if (bVar28) {
            *(undefined2 *)((longlong)aWStackX12 + lVar14) = 0xd;
            *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x1800145fe;
            WVar6 = FUN_180019fa8(0xd);
            WVar5 = *(WCHAR *)((longlong)aWStackX12 + lVar14);
            if (WVar6 != WVar5) goto LAB_180014659;
            uVar18 = uVar17 + 3;
            *(int *)((longlong)&iStackX8 + lVar14) = *(int *)((longlong)&iStackX8 + lVar14) + 1;
          }
        }
LAB_18001460e:
        lVar26 = *(longlong *)(&stack0x00000020 + lVar14);
        uVar17 = uVar18;
      }
      DVar11 = DVar19;
    } while ((uint)((int)pWVar21 - iVar27) < nNumberOfBytesToWrite);
    goto LAB_180014666;
  }
  lVar22 = *(longlong *)((longlong)&lStackX16 + lVar14);
  goto LAB_180014a07;
LAB_180014659:
  uVar17 = uVar18;
  *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x18001465f;
  DVar12 = GetLastError();
LAB_180014661:
  lVar26 = *(longlong *)(&stack0x00000020 + lVar14);
  DVar11 = DVar12;
  goto LAB_180014666;
LAB_18001464f:
  *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x180014655;
  DVar11 = GetLastError();
LAB_180014666:
  uVar13 = DVar11;
  lVar22 = *(longlong *)((longlong)&lStackX16 + lVar14);
LAB_18001466f:
  if (uVar17 == 0) {
    if (uVar13 == 0) {
LAB_180014a07:
      if (((*(byte *)(lVar26 + 8 + (&DAT_180038910)[lVar22]) & 0x40) == 0) ||
         (*(char *)param_2 != '\x1a')) {
        *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x180014a29;
        puVar15 = __doserrno();
        *puVar15 = 0x1c;
        *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x180014a34;
        puVar15 = __doserrno();
        *puVar15 = 0;
      }
    }
    else if (uVar13 == 5) {
      *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x18001468f;
      puVar15 = __doserrno();
      *puVar15 = 9;
      *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x18001469a;
      puVar15 = __doserrno();
      *puVar15 = 5;
    }
    else {
      *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x1800149fd;
      _dosmaperr(uVar13);
    }
  }
LAB_180014a3f:
  *(undefined8 *)((longlong)&uStack64 + lVar14) = 0x180014a4e;
  FUN_18000f730(local_48 ^ (ulonglong)(&stack0xffffffffffffffc8 + lVar14));
  return;
}

/* Function: FUN_180014a6c */
/* WARNING: Removing unreachable block (ram,0x000180014c07) */
/* WARNING: Removing unreachable block (ram,0x000180014bb3) */
/* WARNING: Removing unreachable block (ram,0x000180014bbd) */

int FUN_180014a6c(FILE *param_1)

{
  void *_File;
  FILE *pFVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_1 != (FILE *)0x0) {
    uVar5 = FUN_180014ab8(param_1);
    if ((int)uVar5 == 0) {
      if ((param_1->_flag & 0x4000U) == 0) {
        iVar6 = 0;
      }
      else {
        uVar2 = _fileno(param_1);
        DVar3 = FUN_18001a004(uVar2);
        iVar6 = -(uint)(DVar3 != 0);
      }
    }
    else {
      iVar6 = -1;
    }
    return iVar6;
  }
  iVar7 = 0;
  _lock(1);
  for (iVar6 = 0; iVar6 < DAT_1800392b8; iVar6 = iVar6 + 1) {
    lVar8 = (longlong)iVar6;
    _File = *(void **)(DAT_1800392b0 + lVar8 * 8);
    if ((_File != (void *)0x0) && ((*(byte *)((longlong)_File + 0x18) & 0x83) != 0)) {
      _lock_file2(iVar6,_File);
      pFVar1 = *(FILE **)(DAT_1800392b0 + lVar8 * 8);
      if (((*(byte *)&pFVar1->_flag & 0x83) != 0) &&
         (((*(byte *)&pFVar1->_flag & 2) != 0 && (iVar4 = FUN_180014a6c(pFVar1), iVar4 == -1)))) {
        iVar7 = -1;
      }
      FUN_180012fa8(iVar6,*(longlong *)(DAT_1800392b0 + lVar8 * 8));
    }
  }
  FUN_180017808(1);
  return iVar7;
}

/* Function: FUN_180014ab8 */
undefined8 FUN_180014ab8(FILE *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (((((byte)param_1->_flag & 3) == 2) && ((param_1->_flag & 0x108U) != 0)) &&
     (uVar3 = *(int *)&param_1->_ptr - *(int *)&param_1->_base, 0 < (int)uVar3)) {
    uVar1 = _fileno(param_1);
    uVar1 = FUN_180014194(uVar1,(WCHAR *)param_1->_base,uVar3);
    if (uVar1 == uVar3) {
      uVar2 = 0;
      if ((char)param_1->_flag < '\0') {
        param_1->_flag = param_1->_flag & 0xfffffffd;
      }
    }
    else {
      param_1->_flag = param_1->_flag | 0x20;
      uVar2 = 0xffffffff;
    }
  }
  param_1->_cnt = 0;
  param_1->_ptr = param_1->_base;
  return uVar2;
}

/* Function: FUN_180014b34 */
/* WARNING: Removing unreachable block (ram,0x000180014bc5) */
/* WARNING: Removing unreachable block (ram,0x000180014bca) */
/* WARNING: Removing unreachable block (ram,0x000180014bd0) */
/* WARNING: Removing unreachable block (ram,0x000180014bd8) */
/* WARNING: Removing unreachable block (ram,0x000180014bdc) */

int FUN_180014b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *_File;
  FILE *pFVar1;
  int iVar2;
  int _Index;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  _lock(1);
  for (_Index = 0; _Index < DAT_1800392b8; _Index = _Index + 1) {
    lVar4 = (longlong)_Index;
    _File = *(void **)(DAT_1800392b0 + lVar4 * 8);
    if ((_File != (void *)0x0) && ((*(byte *)((longlong)_File + 0x18) & 0x83) != 0)) {
      _lock_file2(_Index,_File);
      pFVar1 = *(FILE **)(DAT_1800392b0 + lVar4 * 8);
      if (((*(byte *)&pFVar1->_flag & 0x83) != 0) && (iVar2 = FUN_180014a6c(pFVar1), iVar2 != -1)) {
        iVar3 = iVar3 + 1;
      }
      FUN_180012fa8(_Index,*(longlong *)(DAT_1800392b0 + lVar4 * 8));
    }
  }
  FUN_180017808(1);
  return iVar3;
}

/* Function: FUN_180014c28 */
undefined4 FUN_180014c28(uint param_1,int param_2,DWORD param_3)

{
  undefined4 uVar1;
  ulong *puVar2;
  longlong lVar3;
  
  if (param_1 == 0xfffffffe) {
    puVar2 = __doserrno();
    *puVar2 = 0;
    puVar2 = __doserrno();
    *puVar2 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1800392a8)) {
      lVar3 = (ulonglong)(param_1 & 0x1f) * 0x58;
      if ((*(byte *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 + lVar3) & 1) != 0) {
        FUN_1800199c0(param_1);
        if ((*(byte *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 + lVar3) & 1) == 0) {
          puVar2 = __doserrno();
          *puVar2 = 9;
          puVar2 = __doserrno();
          *puVar2 = 0;
          uVar1 = 0xffffffff;
        }
        else {
          uVar1 = FUN_180014d0c(param_1,param_2,param_3);
        }
        FUN_180019e20(param_1);
        return uVar1;
      }
    }
    puVar2 = __doserrno();
    *puVar2 = 0;
    puVar2 = __doserrno();
    *puVar2 = 9;
    FUN_180011d8c();
  }
  return 0xffffffff;
}

/* Function: FUN_180014d0c */
undefined4 FUN_180014d0c(uint param_1,int param_2,DWORD param_3)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  ulong *puVar4;
  undefined4 local_res20;
  int local_res24;
  undefined8 local_18 [2];
  
  hFile = (HANDLE)FUN_180019cfc(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    puVar4 = __doserrno();
    *puVar4 = 9;
  }
  else {
    BVar2 = SetFilePointerEx(hFile,0,local_18,1);
    if ((BVar2 == 0) ||
       (BVar2 = SetFilePointerEx(hFile,(longlong)param_2,(PLARGE_INTEGER)&local_res20,param_3),
       BVar2 == 0)) {
      DVar3 = GetLastError();
      _dosmaperr(DVar3);
    }
    else {
      if (local_res24 == 0) {
        pbVar1 = (byte *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 +
                         (ulonglong)(param_1 & 0x1f) * 0x58);
        *pbVar1 = *pbVar1 & 0xfd;
        return local_res20;
      }
      SetFilePointerEx(hFile,local_18[0],(PLARGE_INTEGER)0x0,0);
      puVar4 = __doserrno();
      *puVar4 = 0x16;
    }
  }
  return 0xffffffff;
}

/* Function: FUN_180014df0 */
undefined8 FUN_180014df0(uint param_1,LARGE_INTEGER param_2,DWORD param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = __doserrno();
    *puVar1 = 0;
    puVar1 = __doserrno();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1800392a8)) {
      lVar3 = (ulonglong)(param_1 & 0x1f) * 0x58;
      if ((*(byte *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 + lVar3) & 1) != 0) {
        FUN_1800199c0(param_1);
        if ((*(byte *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 + lVar3) & 1) == 0) {
          puVar1 = __doserrno();
          *puVar1 = 9;
          puVar1 = __doserrno();
          *puVar1 = 0;
          uVar2 = 0xffffffffffffffff;
        }
        else {
          uVar2 = FUN_180014ed8(param_1,param_2,param_3);
        }
        FUN_180019e20(param_1);
        return uVar2;
      }
    }
    puVar1 = __doserrno();
    *puVar1 = 0;
    puVar1 = __doserrno();
    *puVar1 = 9;
    FUN_180011d8c();
  }
  return 0xffffffffffffffff;
}

/* Function: FUN_180014ed8 */
undefined8 FUN_180014ed8(uint param_1,LARGE_INTEGER param_2,DWORD param_3)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  ulong *puVar4;
  undefined8 local_res20;
  
  hFile = (HANDLE)FUN_180019cfc(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    puVar4 = __doserrno();
    *puVar4 = 9;
  }
  else {
    BVar2 = SetFilePointerEx(hFile,param_2,&local_res20,param_3);
    if (BVar2 != 0) {
      pbVar1 = (byte *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 +
                       (ulonglong)(param_1 & 0x1f) * 0x58);
      *pbVar1 = *pbVar1 & 0xfd;
      return local_res20;
    }
    DVar3 = GetLastError();
    _dosmaperr(DVar3);
  }
  return 0xffffffffffffffff;
}

/* Function: FUN_180014f8c */
void FUN_180014f8c(ulonglong param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if ((*(byte *)param_3 & 4) != 0) {
    uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
  }
  lVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8) + *(longlong *)(param_2 + 8);
  if ((*(byte *)(lVar1 + 3) & 0xf) != 0) {
    param_1 = param_1 + (longlong)(int)(*(byte *)(lVar1 + 3) & 0xfffffff0);
  }
  FUN_18000f730(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}

/* Function: FUN_180015000 */
void FUN_180015000(void)

{
  undefined *in_RAX;
  undefined *puVar1;
  undefined *puVar2;
  longlong in_GS_OFFSET;
  undefined local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined *)0x0;
  }
  puVar2 = *(undefined **)(in_GS_OFFSET + 0x10);
  if (puVar1 < puVar2) {
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}

/* Function: FUN_180015050 */
undefined8 FUN_180015050(void)

{
  uint uVar1;
  byte bVar2;
  DWORD DVar3;
  undefined8 uVar4;
  HANDLE hFile;
  int iVar5;
  HANDLE *ppvVar6;
  HANDLE *ppvVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined auStack216 [32];
  uint local_b8;
  HANDLE *local_b0;
  int local_a8;
  int *local_a0;
  HANDLE *local_98;
  undefined *local_90;
  _STARTUPINFOW local_88;
  
  local_90 = auStack216;
  _lock(0xb);
  local_b0 = (HANDLE *)FUN_18001739c(0x20,0x58);
  if (local_b0 == (HANDLE *)0x0) {
    FUN_1800135b0(auStack216,(PVOID)0x1800150b4);
    uVar4 = 0xffffffff;
  }
  else {
    DAT_1800392a8 = 0x20;
    DAT_180038910 = local_b0;
    for (; local_b0 < DAT_180038910 + 0x160; local_b0 = local_b0 + 0xb) {
      *(undefined2 *)(local_b0 + 1) = 0xa00;
      *local_b0 = (HANDLE)0xffffffffffffffff;
      *(undefined4 *)((longlong)local_b0 + 0xc) = 0;
      *(byte *)(local_b0 + 7) = *(byte *)(local_b0 + 7) & 0x80;
      *(byte *)(local_b0 + 7) = *(byte *)(local_b0 + 7) & 0x7f;
      *(undefined2 *)((longlong)local_b0 + 0x39) = 0xa0a;
      *(undefined4 *)(local_b0 + 10) = 0;
      *(undefined *)((longlong)local_b0 + 0x4c) = 0;
    }
    GetStartupInfoW(&local_88);
    if ((local_88.cbReserved2 != 0) && ((int *)local_88.lpReserved2 != (int *)0x0)) {
      piVar9 = (int *)((longlong)local_88.lpReserved2 + 4);
      ppvVar7 = (HANDLE *)((longlong)*(int *)local_88.lpReserved2 + (longlong)piVar9);
      iVar10 = 0x800;
      if (*(int *)local_88.lpReserved2 < 0x800) {
        iVar10 = *(int *)local_88.lpReserved2;
      }
      iVar5 = 1;
      local_a0 = piVar9;
      local_98 = ppvVar7;
      while ((iVar11 = iVar10, local_a8 = iVar5, DAT_1800392a8 < iVar10 &&
             (local_b0 = (HANDLE *)FUN_18001739c(0x20,0x58), iVar11 = DAT_1800392a8,
             local_b0 != (HANDLE *)0x0))) {
        (&DAT_180038910)[iVar5] = local_b0;
        DAT_1800392a8 = DAT_1800392a8 + 0x20;
        for (; local_b0 < (HANDLE *)((longlong)(&DAT_180038910)[iVar5] + 0xb00);
            local_b0 = local_b0 + 0xb) {
          *(undefined2 *)(local_b0 + 1) = 0xa00;
          *local_b0 = (HANDLE)0xffffffffffffffff;
          *(undefined4 *)((longlong)local_b0 + 0xc) = 0;
          *(byte *)(local_b0 + 7) = *(byte *)(local_b0 + 7) & 0x80;
          *(undefined2 *)((longlong)local_b0 + 0x39) = 0xa0a;
          *(undefined4 *)(local_b0 + 10) = 0;
          *(undefined *)((longlong)local_b0 + 0x4c) = 0;
        }
        iVar5 = iVar5 + 1;
      }
      local_b8 = 0;
      while (uVar1 = local_b8, (int)local_b8 < iVar11) {
        if (((1 < (longlong)*ppvVar7 + 2U) && ((*(byte *)piVar9 & 1) != 0)) &&
           (((*(byte *)piVar9 & 8) != 0 || (DVar3 = GetFileType(*ppvVar7), DVar3 != 0)))) {
          ppvVar6 = (HANDLE *)
                    ((ulonglong)(uVar1 & 0x1f) * 0x58 +
                    (longlong)(&DAT_180038910)[(longlong)(int)uVar1 >> 5]);
          *ppvVar6 = *ppvVar7;
          *(byte *)(ppvVar6 + 1) = *(byte *)piVar9;
          local_b0 = ppvVar6;
          FUN_180016ee0((LPCRITICAL_SECTION)(ppvVar6 + 2),4000);
          *(int *)((longlong)ppvVar6 + 0xc) = *(int *)((longlong)ppvVar6 + 0xc) + 1;
        }
        piVar9 = (int *)((longlong)piVar9 + 1);
        ppvVar7 = ppvVar7 + 1;
        local_a0 = piVar9;
        local_98 = ppvVar7;
        local_b8 = uVar1 + 1;
      }
    }
    local_b8 = 0;
    while (iVar10 = local_b8, (int)local_b8 < 3) {
      lVar8 = (longlong)(int)local_b8;
      ppvVar7 = DAT_180038910 + lVar8 * 0xb;
      local_b0 = ppvVar7;
      if ((longlong)*ppvVar7 + 2U < 2) {
        *(undefined *)(ppvVar7 + 1) = 0x81;
        DVar3 = 0xfffffff5 - (local_b8 != 1);
        if (local_b8 == 0) {
          DVar3 = 0xfffffff6;
        }
        hFile = GetStdHandle(DVar3);
        if (((longlong)hFile + 1U < 2) || (DVar3 = GetFileType(hFile), DVar3 == 0)) {
          *(byte *)(ppvVar7 + 1) = *(byte *)(ppvVar7 + 1) | 0x40;
          *ppvVar7 = (HANDLE)0xfffffffffffffffe;
          if (DAT_1800392b0 != 0) {
            *(undefined4 *)(*(longlong *)(DAT_1800392b0 + lVar8 * 8) + 0x1c) = 0xfffffffe;
          }
        }
        else {
          *ppvVar7 = hFile;
          if ((DVar3 & 0xff) == 2) {
            bVar2 = *(byte *)(ppvVar7 + 1) | 0x40;
LAB_18001530a:
            *(byte *)(ppvVar7 + 1) = bVar2;
          }
          else if ((DVar3 & 0xff) == 3) {
            bVar2 = *(byte *)(ppvVar7 + 1) | 8;
            goto LAB_18001530a;
          }
          FUN_180016ee0((LPCRITICAL_SECTION)(ppvVar7 + 2),4000);
          *(int *)((longlong)ppvVar7 + 0xc) = *(int *)((longlong)ppvVar7 + 0xc) + 1;
        }
      }
      else {
        *(byte *)(ppvVar7 + 1) = *(byte *)(ppvVar7 + 1) | 0x80;
      }
      local_b8 = iVar10 + 1;
    }
    FUN_180017808(0xb);
    uVar4 = 0;
  }
  return uVar4;
}

/* Function: _ioterm */
/* Library Function - Single Match
    _ioterm
   
   Library: Visual Studio 2012 Release */

void _ioterm(void)

{
  void *pvVar1;
  void *pvVar2;
  longlong lVar3;
  void **ppvVar4;
  
  ppvVar4 = (void **)&DAT_180038910;
  lVar3 = 0x40;
  do {
    pvVar2 = *ppvVar4;
    pvVar1 = pvVar2;
    if (pvVar2 != (void *)0x0) {
      for (; pvVar2 < (void *)((longlong)pvVar1 + 0xb00); pvVar2 = (void *)((longlong)pvVar2 + 0x58)
          ) {
        if (*(int *)((longlong)pvVar2 + 0xc) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)pvVar2 + 0x10));
        }
        pvVar1 = *ppvVar4;
      }
      free(*ppvVar4);
      *ppvVar4 = (void *)0x0;
    }
    ppvVar4 = ppvVar4 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

/* Function: FUN_1800153f4 */
ulonglong FUN_1800153f4(uint param_1)

{
  ulong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = __doserrno();
    *puVar1 = 0;
    puVar1 = __doserrno();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1800392a8)) {
      lVar3 = (ulonglong)(param_1 & 0x1f) * 0x58;
      if ((*(byte *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 + lVar3) & 1) != 0) {
        FUN_1800199c0(param_1);
        if ((*(byte *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 + lVar3) & 1) == 0) {
          puVar1 = __doserrno();
          *puVar1 = 9;
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = FUN_1800154b8(param_1);
          uVar2 = uVar2 & 0xffffffff;
        }
        FUN_180019e20(param_1);
        return uVar2;
      }
    }
    puVar1 = __doserrno();
    *puVar1 = 0;
    puVar1 = __doserrno();
    *puVar1 = 9;
    FUN_180011d8c();
  }
  return 0xffffffff;
}

/* Function: FUN_1800154b8 */
undefined8 FUN_1800154b8(uint param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  HANDLE hObject;
  undefined8 uVar5;
  
  lVar3 = FUN_180019cfc(param_1);
  if (lVar3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_180038910 + 0xb8) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_180038910 + 0x60) & 1) != 0)))) {
      lVar3 = FUN_180019cfc(2);
      lVar4 = FUN_180019cfc(1);
      if (lVar4 == lVar3) goto LAB_18001552b;
    }
    hObject = (HANDLE)FUN_180019cfc(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_18001552d;
    }
  }
LAB_18001552b:
  DVar2 = 0;
LAB_18001552d:
  FUN_180019c50(param_1);
  *(undefined *)
   ((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 + (ulonglong)(param_1 & 0x1f) * 0x58) = 0;
  if (DVar2 == 0) {
    uVar5 = 0;
  }
  else {
    _dosmaperr(DVar2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

/* Function: _freebuf */
/* Library Function - Single Match
    _freebuf
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void _freebuf(FILE *_File)

{
  if (((*(byte *)&_File->_flag & 0x83) != 0) && ((*(byte *)&_File->_flag & 8) != 0)) {
    free(_File->_base);
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}

/* Function: FUN_1800155ac */
undefined8 FUN_1800155ac(short *param_1)

{
  ulonglong uVar1;
  short *psVar2;
  short sVar3;
  
  uVar1 = FUN_1800187ec(param_1);
  if ((((4 < uVar1) && ((*param_1 == 0x5c || (*param_1 == 0x2f)))) &&
      ((param_1[1] == 0x5c || (param_1[1] == 0x2f)))) &&
     ((param_1[2] != 0x5c && (param_1[2] != 0x2f)))) {
    psVar2 = param_1 + 3;
    sVar3 = *psVar2;
    if (sVar3 != 0) {
      do {
        if ((sVar3 == 0x5c) || (sVar3 == 0x2f)) break;
        psVar2 = psVar2 + 1;
        sVar3 = *psVar2;
      } while (sVar3 != 0);
      if ((*psVar2 != 0) && (psVar2 = psVar2 + 1, *psVar2 != 0)) {
        sVar3 = *psVar2;
        if (sVar3 != 0) {
          do {
            if ((sVar3 == 0x5c) || (sVar3 == 0x2f)) break;
            psVar2 = psVar2 + 1;
            sVar3 = *psVar2;
          } while (sVar3 != 0);
          if ((*psVar2 != 0) && (psVar2[1] != 0)) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

/* Function: FUN_180015668 */
/* WARNING: Could not reconcile some variable overlaps */

void FUN_180015668(undefined (*param_1) [16],undefined (*param_2) [16])

{
  ulong uVar1;
  ushort uVar2;
  UINT UVar3;
  BOOL BVar4;
  DWORD DVar5;
  ulong *puVar6;
  short *psVar7;
  HANDLE hFindFile;
  LPWSTR lpRootPathName;
  LPWSTR _Memory;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  undefined auStackY1288 [32];
  uint local_4c8 [2];
  _SYSTEMTIME local_4c0;
  uint local_4a8;
  FILETIME local_4a4;
  FILETIME local_49c;
  FILETIME local_494;
  undefined8 local_48c;
  int local_484;
  undefined2 local_47c;
  WCHAR local_258 [264];
  ulonglong local_48;
  
  local_48 = DAT_180036000 ^ (ulonglong)auStackY1288;
  _Memory = (LPWSTR)0x0;
  uVar10 = 0;
  if ((param_1 == (undefined (*) [16])0x0) || (param_2 == (undefined (*) [16])0x0)) {
    puVar6 = __doserrno();
    *puVar6 = 0;
    puVar6 = __doserrno();
    *puVar6 = 0x16;
    FUN_180011d8c();
    goto LAB_180015acb;
  }
  psVar7 = FUN_18001a568((short *)param_1,(short *)&DAT_180028088);
  if (psVar7 != (short *)0x0) {
LAB_1800156e0:
    puVar6 = __doserrno();
    *puVar6 = 2;
    puVar6 = __doserrno();
    *puVar6 = 2;
    goto LAB_180015acb;
  }
  if (*(short *)(*param_1 + 2) == 0x3a) {
    if ((*(WCHAR *)*param_1 != L'\0') && (*(short *)(*param_1 + 4) == 0)) goto LAB_1800156e0;
    uVar2 = FUN_18001a560(*(WCHAR *)*param_1);
    iVar11 = uVar2 - 0x60;
  }
  else {
    iVar11 = FUN_18001a9a0();
  }
  hFindFile = FindFirstFileExW((LPCWSTR)param_1,FindExInfoStandard,&local_4a8,FindExSearchNameMatch,
                               (LPVOID)0x0,0);
  if (hFindFile == (HANDLE)0xffffffffffffffff) {
    psVar7 = FUN_18001a568((short *)param_1,(short *)&DAT_180028090);
    if (psVar7 != (short *)0x0) {
      puVar6 = __doserrno();
      uVar1 = *puVar6;
      puVar6 = __doserrno();
      *puVar6 = 0;
      lpRootPathName = FUN_18001a86c(local_258,(LPCWSTR)param_1,0x104);
      if (lpRootPathName == (LPWSTR)0x0) {
        puVar6 = __doserrno();
        if (*puVar6 != 0x22) goto LAB_180015865;
        puVar6 = __doserrno();
        *puVar6 = uVar1;
        _Memory = FUN_18001a86c((LPWSTR)0x0,(LPCWSTR)param_1,0);
        lpRootPathName = _Memory;
      }
      else {
        puVar6 = __doserrno();
        *puVar6 = uVar1;
      }
      if ((lpRootPathName != (LPCWSTR)0x0) &&
         (((lVar8 = FUN_1800187ec(lpRootPathName), lVar8 == 3 ||
           (uVar9 = FUN_1800155ac(lpRootPathName), (int)uVar9 != 0)) &&
          (UVar3 = GetDriveTypeW(lpRootPathName), 1 < UVar3)))) {
        if (_Memory != (LPWSTR)0x0) {
          free(_Memory);
        }
        local_4a8 = 0x10;
        local_48c = 0;
        local_47c = 0;
        uVar9 = FUN_18001a5a0(0x7bc,1,1,0,0,0,-1);
        *(undefined8 *)param_2[2] = uVar9;
        *(undefined8 *)(param_2[1] + 8) = uVar9;
        *(undefined8 *)(param_2[2] + 8) = uVar9;
LAB_180015a61:
        uVar2 = FUN_18001b448((byte)local_4a8,param_1);
        *(ushort *)(*param_2 + 6) = uVar2;
        *(undefined2 *)(*param_2 + 8) = 1;
        *(undefined4 *)(param_2[1] + 4) = local_48c._4_4_;
        if ((int)local_48c != 0) {
          puVar6 = __doserrno();
          *puVar6 = 0x84;
          *(undefined4 *)(param_2[1] + 4) = 0;
        }
        *(undefined2 *)(*param_2 + 4) = 0;
        *(undefined4 *)(*param_2 + 10) = 0;
        *(int *)*param_2 = iVar11 + -1;
        *(int *)param_2[1] = iVar11 + -1;
        goto LAB_180015acb;
      }
      if (_Memory != (LPWSTR)0x0) {
        free(_Memory);
      }
    }
LAB_180015865:
    puVar6 = __doserrno();
    *puVar6 = 2;
    puVar6 = __doserrno();
    *puVar6 = 2;
  }
  else {
    if (((local_4a8 & 0x400) == 0) || (local_484 != -0x5ffffff4)) {
      if ((local_494.dwLowDateTime == 0) && (local_494.dwHighDateTime == 0)) {
        *(undefined8 *)param_2[2] = 0;
LAB_18001595e:
        if ((local_49c.dwLowDateTime == 0) && (local_49c.dwHighDateTime == 0)) {
          uVar9 = *(undefined8 *)param_2[2];
        }
        else {
          BVar4 = FileTimeToSystemTime(&local_49c,&local_4c0);
          if ((BVar4 == 0) ||
             (BVar4 = SystemTimeToTzSpecificLocalTime
                                ((TIME_ZONE_INFORMATION *)0x0,&local_4c0,&local_4c0), BVar4 == 0))
          goto LAB_180015ab3;
          uVar9 = FUN_18001a5a0((uint)local_4c0.wYear,(uint)local_4c0.wMonth,(uint)local_4c0.wDay,
                                (uint)local_4c0.wHour,(uint)local_4c0.wMinute,
                                (uint)local_4c0.wSecond,-1);
        }
        *(undefined8 *)(param_2[1] + 8) = uVar9;
        if ((local_4a4.dwLowDateTime == 0) && (local_4a4.dwHighDateTime == 0)) {
          uVar9 = *(undefined8 *)param_2[2];
        }
        else {
          BVar4 = FileTimeToSystemTime(&local_4a4,&local_4c0);
          if ((BVar4 == 0) ||
             (BVar4 = SystemTimeToTzSpecificLocalTime
                                ((TIME_ZONE_INFORMATION *)0x0,&local_4c0,&local_4c0), BVar4 == 0))
          goto LAB_180015ab3;
          uVar9 = FUN_18001a5a0((uint)local_4c0.wYear,(uint)local_4c0.wMonth,(uint)local_4c0.wDay,
                                (uint)local_4c0.wHour,(uint)local_4c0.wMinute,
                                (uint)local_4c0.wSecond,-1);
        }
        *(undefined8 *)(param_2[2] + 8) = uVar9;
        FindClose(hFindFile);
        goto LAB_180015a61;
      }
      BVar4 = FileTimeToSystemTime(&local_494,&local_4c0);
      if ((BVar4 != 0) &&
         (BVar4 = SystemTimeToTzSpecificLocalTime
                            ((TIME_ZONE_INFORMATION *)0x0,&local_4c0,&local_4c0), BVar4 != 0)) {
        uVar9 = FUN_18001a5a0((uint)local_4c0.wYear,(uint)local_4c0.wMonth,(uint)local_4c0.wDay,
                              (uint)local_4c0.wHour,(uint)local_4c0.wMinute,(uint)local_4c0.wSecond,
                              -1);
        *(undefined8 *)param_2[2] = uVar9;
        goto LAB_18001595e;
      }
LAB_180015ab3:
      DVar5 = GetLastError();
      _dosmaperr(DVar5);
    }
    else {
      if ((local_4a8 & 0x10) != 0) {
        uVar10 = 0x2000;
      }
      local_4c8[0] = 0xffffffff;
      iVar11 = FUN_18001b414(local_4c8,(LPCWSTR)param_1,uVar10,0x40,0);
      if ((iVar11 != 0) || (local_4c8[0] == 0xffffffff)) goto LAB_180015865;
      FUN_18001a0dc(local_4c8[0],param_2);
      FUN_1800153f4(local_4c8[0]);
    }
    FindClose(hFindFile);
  }
LAB_180015acb:
  FUN_18000f730(local_48 ^ (ulonglong)auStackY1288);
  return;
}

/* Function: _clrfp */
/* Library Function - Single Match
    _clrfp
   
   Library: Visual Studio */

uint _clrfp(void)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  _fclrf();
  return uVar1 & 0x3f;
}

/* Function: _ctrlfp */
/* Library Function - Single Match
    _ctrlfp
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2019 Release */

uint _ctrlfp(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  if ((DAT_1800366b8 == '\0') ||
     ((((~param_2 | 0xffff807f) & uVar1 | param_1 & param_2) & 0x40) == 0)) {
    FUN_18001b560();
  }
  else {
    FUN_18001b560();
  }
  return uVar1;
}

/* Function: _set_statfp */
/* Library Function - Single Match
    _set_statfp
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2019 Release */

void _set_statfp(void)

{
  _get_fpsr();
  FUN_18001b560();
  return;
}

/* Function: FUN_180015bb4 */
uint FUN_180015bb4(void)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  return uVar1 & 0x3f;
}

/* Function: _call_matherr */
/* Library Function - Single Match
    _call_matherr
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2019 Release */

undefined8
_call_matherr(int param_1,undefined param_2,undefined param_3,undefined param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _ctrlfp((uint)param_7,0xffc0);
  uVar1 = FUN_180008890();
  if ((int)uVar1 == 0) {
    uVar1 = _set_errno_from_matherr(param_1);
  }
  return uVar1;
}

/* Function: _exception_enabled */
/* Library Function - Single Match
    _exception_enabled
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2019 Release */

bool _exception_enabled(uint param_1,ulonglong param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x1f;
  if (((param_1 & 8) == 0) || (-1 < (char)param_2)) {
    if (((param_1 & 4) == 0) || ((param_2 & 0x200) == 0)) {
      if (((param_1 & 1) == 0) || ((param_2 & 0x400) == 0)) {
        if (((param_1 & 2) != 0) && ((param_2 & 0x800) != 0)) {
          if ((param_1 & 0x10) != 0) {
            _set_statfp();
          }
          uVar1 = param_1 & 0x1d;
        }
      }
      else {
        _set_statfp();
        uVar1 = param_1 & 0x1e;
      }
    }
    else {
      _set_statfp();
      uVar1 = param_1 & 0x1b;
    }
  }
  else {
    _set_statfp();
    uVar1 = param_1 & 0x17;
  }
  if (((param_1 & 0x10) != 0) && ((param_2 >> 0xc & 1) != 0)) {
    _set_statfp();
    uVar1 = uVar1 & 0xffffffef;
  }
  return uVar1 == 0;
}

/* Function: FUN_180015cec */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180015cec(undefined8 param_1,uint param_2,undefined8 param_3,int param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9)

{
  bool bVar1;
  uint uVar2;
  undefined4 extraout_var_00;
  undefined7 extraout_var;
  undefined uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined auStackY280 [32];
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_b8 [12];
  undefined8 local_88;
  uint local_78;
  ulonglong local_48;
  
  uVar3 = (undefined)param_4;
  local_48 = DAT_180036000 ^ (ulonglong)auStackY280;
  uVar2 = _ctrlfp(0x1f80,0xffc0);
  local_d8 = CONCAT44(extraout_var_00,uVar2);
  local_d0 = param_3;
  local_c8 = param_3;
  bVar1 = _exception_enabled(param_5,local_d8);
  uVar4 = (undefined4)param_8;
  uVar5 = (undefined4)((ulonglong)param_8 >> 0x20);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    if (param_9 == 2) {
      local_88 = param_8;
      local_78 = local_78 & 0xffffffe3 | 3;
    }
    uVar3 = (undefined)param_2;
    FUN_18001b5a0(local_b8,&local_d8,(ulonglong)param_5,param_2,&param_7,&local_d0);
  }
  if ((_DAT_1800374c0 == 0) && (param_4 != 0)) {
    _call_matherr(param_4,(undefined)param_6,(undefined)param_1,uVar3,CONCAT44(uVar5,uVar4),local_d0
                  ,local_d8);
  }
  else {
    _set_errno_from_matherr(param_4);
    _ctrlfp((uint)local_d8,0xffc0);
  }
  FUN_18000f730(local_48 ^ (ulonglong)auStackY280);
  return;
}

/* Function: FUN_180015e14 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180015e14(undefined8 param_1,uint param_2,float param_3,int param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7,float param_8,int param_9)

{
  bool bVar1;
  uint uVar2;
  undefined4 extraout_var_00;
  undefined7 extraout_var;
  undefined uVar3;
  float fVar4;
  undefined auStackY280 [32];
  float local_d8;
  ulonglong local_d0;
  float local_c8;
  uint local_b8 [12];
  float local_88;
  uint local_78;
  ulonglong local_48;
  
  uVar3 = (undefined)param_4;
  local_48 = DAT_180036000 ^ (ulonglong)auStackY280;
  uVar2 = _ctrlfp(0x1f80,0xffc0);
  local_d0 = CONCAT44(extraout_var_00,uVar2);
  local_d8 = param_3;
  local_c8 = param_3;
  bVar1 = _exception_enabled(param_5,local_d0);
  fVar4 = param_8;
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    if (param_9 == 2) {
      local_88 = param_8;
      local_78 = local_78 & 0xffffffe1 | 1;
    }
    uVar3 = (undefined)param_2;
    FUN_18001b8cc(local_b8,&local_d0,(ulonglong)param_5,param_2,&param_7,(undefined8 *)&local_d8);
  }
  if ((_DAT_1800374c0 == 0) && (param_4 != 0)) {
    _call_matherr(param_4,(undefined)param_6,(undefined)param_1,uVar3,(double)fVar4,(double)local_d8
                  ,local_d0);
  }
  else {
    _set_errno_from_matherr(param_4);
    _ctrlfp((uint)local_d0,0xffc0);
  }
  FUN_18000f730(local_48 ^ (ulonglong)auStackY280);
  return;
}

/* Function: thunk_FUN_180015f50 */
void thunk_FUN_180015f50(void)

{
  PTR_LAB_180036910 = &LAB_18001b928;
  PTR_LAB_180036918 = &LAB_18001c3dc;
  PTR_LAB_180036920 = &DAT_18001c47c;
  PTR_LAB_180036928 = &LAB_18001c4c4;
  PTR_LAB_180036930 = &LAB_18001c54c;
  PTR_LAB_180036938 = &LAB_18001b928;
  PTR_LAB_180036940 = FUN_18001b94c;
  PTR_LAB_180036948 = &LAB_18001c484;
  PTR_LAB_180036950 = FUN_18001c3e4;
  PTR_LAB_180036958 = _forcdecpt_l;
  return;
}

/* Function: FUN_180015f50 */
void FUN_180015f50(void)

{
  PTR_LAB_180036910 = &LAB_18001b928;
  PTR_LAB_180036918 = &LAB_18001c3dc;
  PTR_LAB_180036920 = &DAT_18001c47c;
  PTR_LAB_180036928 = &LAB_18001c4c4;
  PTR_LAB_180036930 = &LAB_18001c54c;
  PTR_LAB_180036938 = &LAB_18001b928;
  PTR_LAB_180036940 = FUN_18001b94c;
  PTR_LAB_180036948 = &LAB_18001c484;
  PTR_LAB_180036950 = FUN_18001c3e4;
  PTR_LAB_180036958 = _forcdecpt_l;
  return;
}

/* Function: std::exception::exception */
/* Library Function - Single Match
    public: __cdecl std::exception::exception(char const * __ptr64 const & __ptr64) __ptr64
   
   Library: Visual Studio 2012 Release */

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (exception)0x0;
  *(undefined ***)this = vftable;
  _Copy_str(this,*param_1);
  return this;
}

/* Function: FUN_180016008 */
undefined8 * FUN_180016008(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = std::exception::vftable;
  uVar1 = *param_2;
  *(undefined *)(param_1 + 2) = 0;
  param_1[1] = uVar1;
  return param_1;
}

/* Function: std::exception::exception */
/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = vftable;
  this[0x10] = (exception)0x0;
  operator_(this,param_1);
  return this;
}

/* Function: FUN_180016050 */
void FUN_180016050(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  std::exception::_Tidy((exception *)param_1);
  return;
}

/* Function: std::exception::operator= */
/* Library Function - Single Match
    public: class std::exception & __ptr64 __cdecl std::exception::operator=(class std::exception
   const & __ptr64) __ptr64
   
   Library: Visual Studio 2012 Release */

exception * __thiscall std::exception::operator_(exception *this,exception *param_1)

{
  if (this != param_1) {
    _Tidy(this);
    if (param_1[0x10] == (exception)0x0) {
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    }
    else {
      _Copy_str(this,*(char **)(param_1 + 8));
    }
  }
  return this;
}

/* Function: FUN_1800160a4 */
undefined8 * FUN_1800160a4(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  std::exception::_Tidy((exception *)param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

/* Function: std::exception::_Copy_str */
/* Library Function - Single Match
    private: void __cdecl std::exception::_Copy_str(char const * __ptr64) __ptr64
   
   Library: Visual Studio 2012 Release */

void __thiscall std::exception::_Copy_str(exception *this,char *param_1)

{
  char *pcVar1;
  undefined *puVar2;
  
  if (param_1 != (char *)0x0) {
    pcVar1 = FUN_180018650((ulonglong *)param_1);
    puVar2 = (undefined *)malloc((size_t)(pcVar1 + 1));
    *(undefined **)(this + 8) = puVar2;
    if (puVar2 != (undefined *)0x0) {
      FUN_18001c560(puVar2,(longlong)(pcVar1 + 1),param_1);
      this[0x10] = (exception)0x1;
    }
  }
  return;
}

/* Function: std::exception::_Tidy */
/* Library Function - Single Match
    private: void __cdecl std::exception::_Tidy(void) __ptr64
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void __thiscall std::exception::_Tidy(exception *this)

{
  if (this[0x10] != (exception)0x0) {
    free(*(void **)(this + 8));
  }
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (exception)0x0;
  return;
}

/* Function: FUN_180016164 */
char * FUN_180016164(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}

/* Function: FUN_180016178 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180016178(longlong *param_1,byte *param_2)

{
  DWORD dwExceptionCode;
  DWORD dwExceptionFlags;
  DWORD nNumberOfArguments;
  PVOID local_res8;
  undefined4 local_28;
  undefined4 uStack36;
  longlong *plStack32;
  byte *local_18;
  PVOID pvStack16;
  
  nNumberOfArguments = _UNK_1800280e8;
  dwExceptionFlags = _UNK_1800280d4;
  dwExceptionCode = _DAT_1800280d0;
  local_28 = _DAT_1800280f0;
  uStack36 = _UNK_1800280f4;
  plStack32 = (longlong *)CONCAT44(_UNK_1800280fc,_UNK_1800280f8);
  local_18 = (byte *)CONCAT44(_UNK_180028104,_DAT_180028100);
  pvStack16 = (PVOID)CONCAT44(_UNK_18002810c,_UNK_180028108);
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    param_2 = *(byte **)(*(longlong *)(*param_1 + -8) + 0x30);
    (**(code **)(*(longlong *)(*param_1 + -8) + 0x40))();
  }
  plStack32 = param_1;
  local_18 = param_2;
  local_res8 = RtlPcToFileHeader(param_2,&local_res8);
  if (param_2 != (byte *)0x0) {
    if ((*param_2 & 8) == 0) {
      if (local_res8 == (PVOID)0x0) {
        local_28 = 0x1994000;
      }
    }
    else {
      local_28 = 0x1994000;
    }
  }
  pvStack16 = local_res8;
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,(ULONG_PTR *)&local_28);
  return;
}

/* Function: FUN_180016240 */
ulonglong FUN_180016240(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_18001c5e0((ulonglong *)(param_2 + 0x11),param_1 + 0x11);
  return uVar1 & 0xffffffffffffff00 | (ulonglong)((int)uVar1 == 0);
}

/* Function: FUN_180016260 */
undefined8 * FUN_180016260(undefined8 *param_1,uint param_2)

{
  *param_1 = type_info::vftable;
  type_info::_Type_info_dtor((type_info *)param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

/* Function: FUN_18001629c */
undefined4 FUN_18001629c(int param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  void *pvVar4;
  _ptiddata p_Var5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  
  p_Var5 = _getptd_noexit();
  if (p_Var5 != (_ptiddata)0x0) {
    piVar2 = (int *)p_Var5->_pxcptacttab;
    piVar6 = piVar2;
    do {
      if (*piVar6 == param_1) break;
      piVar6 = piVar6 + 4;
    } while (piVar6 < piVar2 + 0x30);
    if ((piVar2 + 0x30 <= piVar6) || (*piVar6 != param_1)) {
      piVar6 = (int *)0x0;
    }
    if ((piVar6 != (int *)0x0) && (pcVar3 = *(code **)(piVar6 + 2), pcVar3 != (code *)0x0)) {
      if (pcVar3 == (code *)0x5) {
        *(undefined8 *)(piVar6 + 2) = 0;
        return 1;
      }
      if (pcVar3 != (code *)0x1) {
        pvVar4 = p_Var5->_tpxcptinfoptrs;
        p_Var5->_tpxcptinfoptrs = param_2;
        if (piVar6[1] == 8) {
          lVar7 = 0x30;
          do {
            lVar8 = lVar7 + 0x10;
            *(undefined8 *)(lVar7 + 8 + (longlong)p_Var5->_pxcptacttab) = 0;
            lVar7 = lVar8;
          } while (lVar8 < 0xc0);
          iVar1 = p_Var5->_tfpecode;
          if (*piVar6 == -0x3fffff72) {
            p_Var5->_tfpecode = 0x83;
          }
          else if (*piVar6 == -0x3fffff70) {
            p_Var5->_tfpecode = 0x81;
          }
          else if (*piVar6 == -0x3fffff6f) {
            p_Var5->_tfpecode = 0x84;
          }
          else if (*piVar6 == -0x3fffff6d) {
            p_Var5->_tfpecode = 0x85;
          }
          else if (*piVar6 == -0x3fffff73) {
            p_Var5->_tfpecode = 0x82;
          }
          else if (*piVar6 == -0x3fffff71) {
            p_Var5->_tfpecode = 0x86;
          }
          else if (*piVar6 == -0x3fffff6e) {
            p_Var5->_tfpecode = 0x8a;
          }
          else if (*piVar6 == -0x3ffffd4b) {
            p_Var5->_tfpecode = 0x8d;
          }
          else if (*piVar6 == -0x3ffffd4c) {
            p_Var5->_tfpecode = 0x8e;
          }
          (*pcVar3)(8,p_Var5->_tfpecode);
          p_Var5->_tfpecode = iVar1;
        }
        else {
          *(undefined8 *)(piVar6 + 2) = 0;
          (*pcVar3)(piVar6[1]);
        }
        p_Var5->_tpxcptinfoptrs = pvVar4;
      }
      return 0xffffffff;
    }
  }
  return 0;
}

/* Function: FUN_180016468 */
undefined4 FUN_180016468(int param_1,void *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == -0x1f928c9d) {
    uVar1 = FUN_18001629c(-0x1f928c9d,param_2);
    return uVar1;
  }
  return 0;
}

/* Function: _freefls */
/* Library Function - Single Match
    _freefls
   
   Library: Visual Studio 2012 Release */

void _freefls(void *_PerFiberData)

{
  int *piVar1;
  
  if (_PerFiberData != (void *)0x0) {
    if (*(void **)((longlong)_PerFiberData + 0x38) != (void *)0x0) {
      free(*(void **)((longlong)_PerFiberData + 0x38));
    }
    if (*(void **)((longlong)_PerFiberData + 0x48) != (void *)0x0) {
      free(*(void **)((longlong)_PerFiberData + 0x48));
    }
    if (*(void **)((longlong)_PerFiberData + 0x58) != (void *)0x0) {
      free(*(void **)((longlong)_PerFiberData + 0x58));
    }
    if (*(void **)((longlong)_PerFiberData + 0x68) != (void *)0x0) {
      free(*(void **)((longlong)_PerFiberData + 0x68));
    }
    if (*(void **)((longlong)_PerFiberData + 0x70) != (void *)0x0) {
      free(*(void **)((longlong)_PerFiberData + 0x70));
    }
    if (*(void **)((longlong)_PerFiberData + 0x78) != (void *)0x0) {
      free(*(void **)((longlong)_PerFiberData + 0x78));
    }
    if (*(void **)((longlong)_PerFiberData + 0x80) != (void *)0x0) {
      free(*(void **)((longlong)_PerFiberData + 0x80));
    }
    if (*(undefined **)((longlong)_PerFiberData + 0xa0) != &DAT_180028120) {
      free(*(undefined **)((longlong)_PerFiberData + 0xa0));
    }
    _lock(0xd);
    piVar1 = *(int **)((longlong)_PerFiberData + 0xb8);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (piVar1 != &DAT_180036b70)) {
        free(piVar1);
      }
    }
    FUN_180017808(0xd);
    _lock(0xc);
    piVar1 = *(int **)((longlong)_PerFiberData + 0xc0);
    if (piVar1 != (int *)0x0) {
      FUN_180018e60(piVar1);
      if (((piVar1 != (int *)PTR_DAT_180037170) && (piVar1 != (int *)&DAT_180037180)) &&
         (*piVar1 == 0)) {
        __freetlocinfo(piVar1);
      }
    }
    FUN_180017808(0xc);
    free(_PerFiberData);
  }
  return;
}

/* Function: _freeptd */
/* Library Function - Single Match
    _freeptd
   
   Library: Visual Studio 2012 Release */

void _freeptd(_ptiddata _Ptd)

{
  if (DAT_1800366c4 != -1) {
    if (_Ptd == (_ptiddata)0x0) {
      _Ptd = (_ptiddata)FUN_180016ea8();
    }
    FUN_180016ec4();
    _freefls(_Ptd);
  }
  return;
}

/* Function: _getptd */
/* Library Function - Single Match
    _getptd
   
   Library: Visual Studio 2012 Release */

_ptiddata _getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = _getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    FUN_18001142c(0x10);
  }
  return p_Var1;
}

/* Function: _getptd_noexit */
/* Library Function - Single Match
    _getptd_noexit
   
   Library: Visual Studio 2012 Release */

_ptiddata _getptd_noexit(void)

{
  DWORD dwErrCode;
  int iVar1;
  DWORD DVar2;
  _ptiddata _Memory;
  
  dwErrCode = GetLastError();
  _Memory = (_ptiddata)FUN_180016ea8();
  if (_Memory == (_ptiddata)0x0) {
    _Memory = (_ptiddata)FUN_18001739c(1,0x478);
    if (_Memory != (_ptiddata)0x0) {
      iVar1 = FUN_180016ec4();
      if (iVar1 == 0) {
        free(_Memory);
        _Memory = (_ptiddata)0x0;
      }
      else {
        FUN_180016694((longlong)_Memory,0);
        DVar2 = GetCurrentThreadId();
        _Memory->_thandle = 0xffffffffffffffff;
        _Memory->_tid = DVar2;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Memory;
}

/* Function: FUN_180016694 */
void FUN_180016694(longlong param_1,longlong param_2)

{
  *(undefined **)(param_1 + 0xa0) = &DAT_180028120;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 200) = 1;
  *(undefined2 *)(param_1 + 0x164) = 0x43;
  *(undefined2 *)(param_1 + 0x26a) = 0x43;
  *(undefined4 **)(param_1 + 0xb8) = &DAT_180036b70;
  *(undefined8 *)(param_1 + 0x470) = 0;
  _lock(0xd);
  LOCK();
  **(int **)(param_1 + 0xb8) = **(int **)(param_1 + 0xb8) + 1;
  FUN_180017808(0xd);
  _lock(0xc);
  *(longlong *)(param_1 + 0xc0) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0xc0) = PTR_DAT_180037170;
  }
  FUN_180018c3c(*(int **)(param_1 + 0xc0));
  FUN_180017808(0xc);
  return;
}

/* Function: _mtinit */
/* Library Function - Single Match
    _mtinit
   
   Library: Visual Studio 2012 Release */

int _mtinit(void)

{
  int iVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  
  FUN_180011508();
  iVar1 = FUN_1800177a4();
  if ((((iVar1 != 0) && (DAT_1800366c4 = FUN_180016e70(), DAT_1800366c4 != -1)) &&
      (pDVar3 = (DWORD *)FUN_18001739c(1,0x478), pDVar3 != (DWORD *)0x0)) &&
     (iVar1 = FUN_180016ec4(), iVar1 != 0)) {
    FUN_180016694((longlong)pDVar3,0);
    DVar2 = GetCurrentThreadId();
    *(undefined8 *)(pDVar3 + 2) = 0xffffffffffffffff;
    *pDVar3 = DVar2;
    return 1;
  }
  FUN_1800167d8();
  return 0;
}

/* Function: FUN_1800167d8 */
void FUN_1800167d8(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION *pp_Var1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_1800366c4 != -1) {
    FUN_180016e8c();
    DAT_1800366c4 = -1;
  }
  lVar4 = 0x24;
  pp_Var1 = (LPCRITICAL_SECTION *)&DAT_1800366d0;
  lVar3 = 0x24;
  do {
    lpCriticalSection = *pp_Var1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (*(int *)(pp_Var1 + 1) != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      free(lpCriticalSection);
      *pp_Var1 = (LPCRITICAL_SECTION)0x0;
    }
    pp_Var1 = pp_Var1 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  piVar2 = &DAT_1800366d8;
  do {
    if ((*(LPCRITICAL_SECTION *)(piVar2 + -2) != (LPCRITICAL_SECTION)0x0) && (*piVar2 == 1)) {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(piVar2 + -2));
    }
    piVar2 = piVar2 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

/* Function: FUN_1800167fc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800167fc(void)

{
  ulonglong uVar1;
  byte **ppbVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  int local_res8 [2];
  int local_res10 [2];
  
  if (_DAT_18003a2d8 == 0) {
    FUN_180017d68();
  }
  DAT_180038c24 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_180038b20,0x104);
  _DAT_180038290 = &DAT_180038b20;
  if ((DAT_18003a2e0 == (byte *)0x0) || (pbVar4 = DAT_18003a2e0, *DAT_18003a2e0 == 0)) {
    pbVar4 = &DAT_180038b20;
  }
  FUN_1800168f0(pbVar4,(byte **)0x0,(byte *)0x0,local_res8,local_res10);
  uVar5 = (ulonglong)local_res8[0];
  if ((((uVar5 < 0x1fffffffffffffff) &&
       (uVar3 = (ulonglong)local_res10[0], uVar3 != 0xffffffffffffffff)) &&
      (uVar1 = uVar3 + uVar5 * 8, uVar3 <= uVar1)) &&
     (ppbVar2 = (byte **)FUN_18001741c(uVar1), ppbVar2 != (byte **)0x0)) {
    FUN_1800168f0(pbVar4,ppbVar2,(byte *)(ppbVar2 + uVar5),local_res8,local_res10);
    _DAT_18003826c = local_res8[0] + -1;
    DAT_180038270 = ppbVar2;
    return 0;
  }
  return 0xffffffff;
}

/* Function: FUN_1800168f0 */
void FUN_1800168f0(byte *param_1,byte **param_2,byte *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (byte **)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar2 = false;
  do {
    if (*param_1 == 0x22) {
      bVar2 = !bVar2;
      bVar7 = 0x22;
      pbVar5 = param_1 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar7 = *param_1;
      pbVar5 = param_1 + 1;
      uVar3 = FUN_18001c730((uint)bVar7);
      if ((int)uVar3 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar5;
          param_3 = param_3 + 1;
        }
        pbVar5 = param_1 + 2;
      }
      if (bVar7 == 0) {
        pbVar5 = pbVar5 + -1;
        goto LAB_1800169a2;
      }
    }
    param_1 = pbVar5;
  } while ((bVar2) || ((bVar7 != 0x20 && (bVar7 != 9))));
  if (param_3 != (byte *)0x0) {
    param_3[-1] = 0;
  }
LAB_1800169a2:
  bVar2 = false;
  while (pbVar6 = pbVar5, *pbVar5 != 0) {
    for (; (*pbVar6 == 0x20 || (*pbVar6 == 9)); pbVar6 = pbVar6 + 1) {
    }
    if (*pbVar6 == 0) break;
    if (param_2 != (byte **)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      for (; *pbVar6 == 0x5c; pbVar6 = pbVar6 + 1) {
        uVar4 = uVar4 + 1;
      }
      pbVar5 = pbVar6;
      if (*pbVar6 == 0x22) {
        if (((uVar4 & 1) == 0) && ((!bVar2 || (pbVar5 = pbVar6 + 1, *pbVar5 != 0x22)))) {
          bVar1 = false;
          bVar2 = !bVar2;
          pbVar5 = pbVar6;
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar7 = *pbVar5;
      if ((bVar7 == 0) || ((!bVar2 && ((bVar7 == 0x20 || (bVar7 == 9)))))) break;
      if (bVar1) {
        uVar3 = FUN_18001c730((int)(char)bVar7);
        if (param_3 == (byte *)0x0) {
          if ((int)uVar3 != 0) {
            pbVar5 = pbVar5 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((int)uVar3 != 0) {
            bVar7 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            *param_3 = bVar7;
            param_3 = param_3 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar5;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar6 = pbVar5 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (byte **)0x0) {
    *param_2 = (byte *)0x0;
  }
  *param_4 = *param_4 + 1;
  return;
}

/* Function: FUN_180016ab8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180016ab8(void)

{
  char cVar1;
  code *pcVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  int iVar8;
  undefined8 *puVar9;
  
  if (_DAT_18003a2d8 == 0) {
    FUN_180017d68();
  }
  iVar8 = 0;
  puVar7 = DAT_180037cc8;
  if (DAT_180037cc8 != (ulonglong *)0x0) {
    for (; *(char *)puVar7 != '\0'; puVar7 = (ulonglong *)(pcVar4 + (longlong)puVar7 + 1)) {
      if (*(char *)puVar7 != '=') {
        iVar8 = iVar8 + 1;
      }
      pcVar4 = FUN_180018650(puVar7);
    }
    DAT_180038280 = (undefined8 *)FUN_18001739c((longlong)(iVar8 + 1),8);
    if (DAT_180038280 != (undefined8 *)0x0) {
      cVar1 = *(char *)DAT_180037cc8;
      puVar9 = DAT_180038280;
      puVar7 = DAT_180037cc8;
      do {
        if (cVar1 == '\0') {
          free(DAT_180037cc8);
          DAT_180037cc8 = (ulonglong *)0x0;
          *puVar9 = 0;
          _DAT_18003a2dc = 1;
          return 0;
        }
        pcVar4 = FUN_180018650(puVar7);
        iVar8 = (int)pcVar4 + 1;
        if (*(char *)puVar7 != '=') {
          puVar5 = (undefined *)FUN_18001739c((longlong)iVar8,1);
          *puVar9 = puVar5;
          if (puVar5 == (undefined *)0x0) {
            free(DAT_180038280);
            DAT_180038280 = (undefined8 *)0x0;
            return 0xffffffff;
          }
          uVar3 = FUN_18001c560(puVar5,(longlong)iVar8,(char *)puVar7);
          if (uVar3 != 0) {
            FUN_180011dac();
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return uVar6;
          }
          puVar9 = puVar9 + 1;
        }
        puVar7 = (ulonglong *)((longlong)puVar7 + (longlong)iVar8);
        cVar1 = *(char *)puVar7;
      } while( true );
    }
  }
  return 0xffffffff;
}

/* Function: FUN_180016bec */
void FUN_180016bec(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  uint local_res18;
  undefined4 uStackX28;
  
  local_res10 = (_FILETIME)0x0;
  if (DAT_180036000 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter((LARGE_INTEGER *)&local_res18);
    DAT_180036000 =
         ((ulonglong)local_res18 << 0x20 ^ CONCAT44(uStackX28,local_res18) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180036000 == 0x2b992ddfa232) {
      DAT_180036000 = 0x2b992ddfa233;
    }
  }
  DAT_180036008 = ~DAT_180036000;
  return;
}

/* Function: FUN_180016c98 */
LPSTR FUN_180016c98(void)

{
  WCHAR WVar1;
  int cbMultiByte;
  int iVar2;
  LPWCH lpWideCharStr;
  LPSTR lpMultiByteStr;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  
  lpWideCharStr = GetEnvironmentStringsW();
  if (lpWideCharStr != (LPWCH)0x0) {
    WVar1 = *lpWideCharStr;
    pWVar3 = lpWideCharStr;
    while (WVar1 != L'\0') {
      do {
        pWVar4 = pWVar3;
        pWVar3 = pWVar4 + 1;
      } while (*pWVar3 != L'\0');
      pWVar3 = pWVar4 + 2;
      WVar1 = *pWVar3;
    }
    iVar2 = (int)((longlong)pWVar3 - (longlong)lpWideCharStr >> 1);
    cbMultiByte = WideCharToMultiByte(0,0,lpWideCharStr,iVar2 + 1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
    if ((cbMultiByte != 0) &&
       (lpMultiByteStr = (LPSTR)FUN_18001741c((longlong)cbMultiByte), lpMultiByteStr != (LPSTR)0x0))
    {
      iVar2 = WideCharToMultiByte(0,0,lpWideCharStr,iVar2 + 1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0
                                  ,(LPBOOL)0x0);
      if (iVar2 == 0) {
        free(lpMultiByteStr);
        lpMultiByteStr = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return lpMultiByteStr;
    }
    FreeEnvironmentStringsW(lpWideCharStr);
  }
  return (LPSTR)0x0;
}

/* Function: FUN_180016d8c */
void FUN_180016d8c(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18;
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,&local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  return;
}

/* Function: FUN_180016dfc */
void FUN_180016dfc(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}

/* Function: FUN_180016e70 */
void FUN_180016e70(void)

{
  if ((code *)(DAT_1800391a0 ^ DAT_180036000) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180016e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(DAT_1800391a0 ^ DAT_180036000))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180016e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsAlloc();
  return;
}

/* Function: FUN_180016e8c */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_180016e8c(void)

{
  if ((code *)(DAT_1800391a8 ^ DAT_180036000) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180016e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(DAT_1800391a8 ^ DAT_180036000))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180016e9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsFree();
  return;
}

/* Function: FUN_180016ea8 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_180016ea8(void)

{
  if ((code *)(DAT_1800391b0 ^ DAT_180036000) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180016eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(DAT_1800391b0 ^ DAT_180036000))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180016ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsGetValue();
  return;
}

/* Function: FUN_180016ec4 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_180016ec4(void)

{
  if ((code *)(DAT_1800391b8 ^ DAT_180036000) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180016ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(DAT_1800391b8 ^ DAT_180036000))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180016ed7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue();
  return;
}

/* Function: FUN_180016ee0 */
undefined8 FUN_180016ee0(LPCRITICAL_SECTION param_1,DWORD param_2)

{
  undefined8 uVar1;
  
  if ((code *)(DAT_1800391c0 ^ DAT_180036000) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180016ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(DAT_1800391c0 ^ DAT_180036000))();
    return uVar1;
  }
  InitializeCriticalSectionAndSpinCount(param_1,param_2);
  return 1;
}

/* Function: FUN_180016f0c */
bool FUN_180016f0c(void)

{
  int iVar1;
  bool bVar2;
  undefined4 local_res8 [8];
  
  bVar2 = DAT_1800366c8 < 0;
  if (!bVar2) goto LAB_180016f4d;
  local_res8[0] = 0;
  if ((code *)(DAT_180039288 ^ DAT_180036000) == (code *)0x0) {
LAB_180016f43:
    DAT_1800366c8 = 0;
  }
  else {
    iVar1 = (*(code *)(DAT_180039288 ^ DAT_180036000))(local_res8,0);
    DAT_1800366c8 = 1;
    if (iVar1 != 0x7a) goto LAB_180016f43;
  }
  bVar2 = false;
LAB_180016f4d:
  return DAT_1800366c8 != 0 && !bVar2;
}

/* Function: KERNEL32.DLL::Sleep */
void Sleep(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x000180017354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}

/* Function: FUN_18001737c */
void FUN_18001737c(_EXCEPTION_POINTERS *param_1)

{
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
                    /* WARNING: Could not recover jumptable at 0x000180017395. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UnhandledExceptionFilter(param_1);
  return;
}

/* Function: FUN_18001739c */
LPVOID FUN_18001739c(ulonglong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = FUN_18001c8a0(param_1,param_2,(undefined4 *)0x0);
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_180038c28 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_180038c28 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (LPVOID)0x0;
    }
  }
  return (LPVOID)0x0;
}

/* Function: FUN_18001741c */
void * FUN_18001741c(size_t param_1)

{
  uint uVar1;
  void *pvVar2;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    uVar1 = DAT_180038c28;
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    if (uVar1 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_180038c28 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}

/* Function: FUN_180017498 */
void * FUN_180017498(void *param_1,size_t param_2)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = realloc(param_1,param_2);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (param_2 == 0) {
      return (void *)0x0;
    }
    if (DAT_180038c28 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_180038c28 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}

/* Function: FUN_18001751c */
void * FUN_18001751c(void *param_1,ulonglong param_2,ulonglong param_3)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = FUN_18001c818(param_1,param_2,param_3);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (param_3 == 0) {
      return (void *)0x0;
    }
    if (DAT_180038c28 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_180038c28 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}

/* Function: FUN_1800175a0 */
void FUN_1800175a0(void)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_180030918; ppcVar1 < &DAT_180030918; ppcVar1 = ppcVar1 + 1) {
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
  }
  return;
}

/* Function: FUN_180017610 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180017610(void)

{
  _DAT_180039198 = 0;
  return;
}

/* Function: _lock */
/* Library Function - Single Match
    _lock
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void _lock(int _File)

{
  undefined8 uVar1;
  
  if ((&DAT_1800366d0)[(longlong)_File * 2] == 0) {
    uVar1 = FUN_1800176e4(_File);
    if ((int)uVar1 == 0) {
      FUN_18001142c(0x11);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000180017655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1800366d0)[(longlong)_File * 2]);
  return;
}

/* Function: FUN_1800176e4 */
undefined8 FUN_1800176e4(int param_1)

{
  LPCRITICAL_SECTION _Memory;
  ulong *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_1;
  if (DAT_180038258 == 0) {
    _FF_MSGBANNER();
    FUN_180011814(0x1e);
    __crtExitProcess(0xff);
  }
  if ((&DAT_1800366d0)[lVar2 * 2] == 0) {
    _Memory = (LPCRITICAL_SECTION)FUN_18001741c(0x28);
    if (_Memory == (LPCRITICAL_SECTION)0x0) {
      puVar1 = __doserrno();
      *puVar1 = 0xc;
      return 0;
    }
    _lock(10);
    if ((&DAT_1800366d0)[lVar2 * 2] == 0) {
      FUN_180016ee0(_Memory,4000);
      (&DAT_1800366d0)[lVar2 * 2] = _Memory;
    }
    else {
      free(_Memory);
    }
    LeaveCriticalSection(DAT_180036770);
  }
  return 1;
}

/* Function: FUN_1800177a4 */
undefined4 FUN_1800177a4(void)

{
  longlong lVar1;
  LPCRITICAL_SECTION *pp_Var2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  pp_Var2 = (LPCRITICAL_SECTION *)&DAT_1800366d0;
  lVar4 = 0x24;
  do {
    if (*(int *)(pp_Var2 + 1) == 1) {
      lVar1 = (longlong)iVar3;
      iVar3 = iVar3 + 1;
      *pp_Var2 = (LPCRITICAL_SECTION)(&DAT_180038c30 + lVar1 * 0x28);
      FUN_180016ee0((LPCRITICAL_SECTION)(&DAT_180038c30 + lVar1 * 0x28),4000);
    }
    pp_Var2 = pp_Var2 + 2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return 1;
}

/* Function: FUN_180017808 */
void FUN_180017808(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180017819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1800366d0)[(longlong)param_1 * 2]);
  return;
}

/* Function: FUN_180017820 */
longlong FUN_180017820(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = 0;
  lVar2 = *(int *)(param_1 + 0x3c) + param_1;
  lVar1 = (ulonglong)*(ushort *)(lVar2 + 0x14) + 0x18 + lVar2;
  if (*(ushort *)(lVar2 + 6) != 0) {
    do {
      if ((*(uint *)(lVar1 + 0xc) <= param_2) &&
         (param_2 < *(int *)(lVar1 + 8) + *(uint *)(lVar1 + 0xc))) {
        return lVar1;
      }
      uVar3 = uVar3 + 1;
      lVar1 = lVar1 + 0x28;
    } while (uVar3 < *(ushort *)(lVar2 + 6));
  }
  return 0;
}

/* Function: _IsNonwritableInCurrentImage */
/* Library Function - Single Match
    _IsNonwritableInCurrentImage
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2019 Release */

BOOL _IsNonwritableInCurrentImage(PBYTE pTarget)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_180000000);
  uVar2 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    uVar2 = FUN_180017820(0x180000000,(ulonglong)(pTarget + -0x180000000));
    if (uVar2 != 0) {
      uVar2 = (ulonglong)(~(*(uint *)(uVar2 + 0x24) >> 0x1f) & 1);
    }
  }
  return (BOOL)uVar2;
}

/* Function: _ValidateImageBase */
/* Library Function - Single Match
    _ValidateImageBase
   
   Library: Visual Studio 2015 Release */

BOOL _ValidateImageBase(PBYTE pImageBase)

{
  uint uVar1;
  
  if (*(short *)pImageBase != 0x5a4d) {
    return 0;
  }
  uVar1 = 0;
  if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
    uVar1 = (uint)(*(short *)((longlong)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x20b)
    ;
  }
  return uVar1;
}

/* Function: __onexitinit */
/* Library Function - Single Match
    __onexitinit
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

undefined4 __onexitinit(void)

{
  undefined4 uVar1;
  undefined8 *Ptr;
  
  Ptr = (undefined8 *)FUN_18001739c(0x20,8);
  DAT_18003a2c8 = EncodePointer(Ptr);
  DAT_18003a2d0 = DAT_18003a2c8;
  if (Ptr == (undefined8 *)0x0) {
    uVar1 = 0x18;
  }
  else {
    *Ptr = 0;
    uVar1 = 0;
  }
  return uVar1;
}

/* Function: FUN_180017934 */
PVOID FUN_180017934(PVOID param_1)

{
  ulonglong uVar1;
  PVOID *_Memory;
  PVOID *ppvVar2;
  size_t sVar3;
  PVOID pvVar4;
  size_t sVar5;
  PVOID pvVar6;
  
  FUN_1800115f0();
  _Memory = (PVOID *)DecodePointer(DAT_18003a2d0);
  ppvVar2 = (PVOID *)DecodePointer(DAT_18003a2c8);
  if (_Memory <= ppvVar2) {
    uVar1 = ((longlong)ppvVar2 - (longlong)_Memory) + 8;
    if (7 < uVar1) {
      sVar3 = _msize(_Memory);
      if (sVar3 < uVar1) {
        sVar5 = 0x1000;
        if (sVar3 < 0x1000) {
          sVar5 = sVar3;
        }
        if ((sVar5 + sVar3 < sVar3) ||
           (pvVar4 = FUN_180017498(_Memory,sVar5 + sVar3), pvVar4 == (void *)0x0)) {
          pvVar6 = (PVOID)0x0;
          if ((sVar3 + 0x20 < sVar3) ||
             (pvVar4 = FUN_180017498(_Memory,sVar3 + 0x20), pvVar4 == (void *)0x0))
          goto LAB_180017a1c;
        }
        ppvVar2 = (PVOID *)((longlong)pvVar4 + ((longlong)ppvVar2 - (longlong)_Memory >> 3) * 8);
        DAT_18003a2d0 = EncodePointer(pvVar4);
      }
      pvVar4 = EncodePointer(param_1);
      *ppvVar2 = pvVar4;
      DAT_18003a2c8 = EncodePointer(ppvVar2 + 1);
      pvVar6 = param_1;
      goto LAB_180017a1c;
    }
  }
  pvVar6 = (PVOID)0x0;
LAB_180017a1c:
  FUN_1800115fc();
  return pvVar6;
}

/* Function: FUN_180017a40 */
int FUN_180017a40(PVOID param_1)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_180017934(param_1);
  return (pvVar1 != (PVOID)0x0) - 1;
}

/* Function: _initp_misc_cfltcvt_tab */
/* Library Function - Single Match
    _initp_misc_cfltcvt_tab
   
   Library: Visual Studio 2012 Release */

void _initp_misc_cfltcvt_tab(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  
  uVar3 = 0;
  ppuVar2 = &PTR_LAB_180036910;
  do {
    puVar1 = (undefined *)EncodePointer(*ppuVar2);
    uVar3 = uVar3 + 1;
    *ppuVar2 = puVar1;
    ppuVar2 = ppuVar2 + 1;
  } while (uVar3 < 10);
  return;
}

/* Function: _inconsistency */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2012 Release */

void _inconsistency(void)

{
  code *pcVar1;
  _ptiddata p_Var2;
  
  pcVar1 = (code *)DecodePointer(DAT_180038e60);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_180017ab4();
  p_Var2 = _getptd();
  if ((code *)p_Var2->_terminate != (code *)0x0) {
    (*(code *)p_Var2->_terminate)();
  }
  FUN_18001c9a0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

/* Function: FUN_180017ab4 */
void FUN_180017ab4(void)

{
  code *pcVar1;
  _ptiddata p_Var2;
  
  p_Var2 = _getptd();
  if ((code *)p_Var2->_terminate != (code *)0x0) {
    (*(code *)p_Var2->_terminate)();
  }
  FUN_18001c9a0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

/* Function: FUN_180017ad4 */
void FUN_180017ad4(void)

{
  DAT_180038e60 = EncodePointer(FUN_180017ab4);
  return;
}

/* Function: FUN_180017af4 */
void FUN_180017af4(undefined8 param_1)

{
  DAT_180038e68 = param_1;
  return;
}

/* Function: FUN_180017afc */
void FUN_180017afc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180017b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DecodePointer(DAT_180038e80);
  return;
}

/* Function: FUN_180017b0c */
void FUN_180017b0c(undefined8 param_1)

{
  DAT_180038e70 = param_1;
  DAT_180038e78 = param_1;
  DAT_180038e80 = param_1;
  DAT_180038e88 = param_1;
  return;
}

/* Function: FUN_180017b2c */
undefined8 FUN_180017b2c(uint param_1)

{
  void *pvVar1;
  bool bVar2;
  ulong *puVar3;
  _ptiddata p_Var4;
  code *pcVar5;
  undefined8 uVar6;
  code *pcVar7;
  void *pvVar8;
  PVOID Ptr;
  int iVar9;
  void *pvVar10;
  code **ppcVar11;
  int local_res10;
  
  pvVar10 = (void *)0x0;
  local_res10 = 0;
  bVar2 = false;
  p_Var4 = (_ptiddata)0x0;
  if (param_1 == 2) {
    ppcVar11 = (code **)&DAT_180038e70;
    Ptr = DAT_180038e70;
    goto LAB_180017c32;
  }
  if (param_1 == 4) {
LAB_180017bc7:
    p_Var4 = _getptd_noexit();
    if (p_Var4 == (_ptiddata)0x0) {
      return 0xffffffff;
    }
    pvVar1 = p_Var4->_pxcptacttab;
    pvVar8 = pvVar1;
    do {
      if (*(uint *)((longlong)pvVar8 + 4) == param_1) break;
      pvVar8 = (void *)((longlong)pvVar8 + 0x10);
    } while (pvVar8 < (void *)((longlong)DAT_1800281e0 * 0x10 + (longlong)pvVar1));
    if (((void *)((longlong)DAT_1800281e0 * 0x10 + (longlong)pvVar1) <= pvVar8) ||
       (*(uint *)((longlong)pvVar8 + 4) != param_1)) {
      pvVar8 = (void *)0x0;
    }
    ppcVar11 = (code **)((longlong)pvVar8 + 8);
    pcVar5 = *ppcVar11;
  }
  else {
    if (param_1 == 6) {
LAB_180017bb7:
      ppcVar11 = (code **)&DAT_180038e80;
      Ptr = DAT_180038e80;
    }
    else {
      if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_180017bc7;
      if (param_1 == 0xf) {
        ppcVar11 = (code **)&DAT_180038e88;
        Ptr = DAT_180038e88;
      }
      else {
        if (param_1 != 0x15) {
          if (param_1 != 0x16) {
            puVar3 = __doserrno();
            *puVar3 = 0x16;
            FUN_180011d8c();
            return 0xffffffff;
          }
          goto LAB_180017bb7;
        }
        ppcVar11 = (code **)&DAT_180038e78;
        Ptr = DAT_180038e78;
      }
    }
LAB_180017c32:
    bVar2 = true;
    pcVar5 = (code *)DecodePointer(Ptr);
  }
  if (pcVar5 == (code *)0x1) {
    return 0;
  }
  if (pcVar5 == (code *)0x0) {
    FUN_1800114fc(3);
    pcVar5 = (code *)swi(3);
    uVar6 = (*pcVar5)();
    return uVar6;
  }
  if (bVar2) {
    _lock(0);
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    pvVar10 = p_Var4->_tpxcptinfoptrs;
    p_Var4->_tpxcptinfoptrs = (void *)0x0;
    if (param_1 == 8) {
      local_res10 = p_Var4->_tfpecode;
      p_Var4->_tfpecode = 0x8c;
      goto LAB_180017caa;
    }
  }
  else {
LAB_180017caa:
    iVar9 = DAT_1800281e8;
    if (param_1 == 8) {
      for (; iVar9 < DAT_1800281e8 + DAT_1800281ec; iVar9 = iVar9 + 1) {
        *(undefined8 *)((longlong)p_Var4->_pxcptacttab + (longlong)iVar9 * 0x10 + 8) = 0;
      }
      goto LAB_180017cf3;
    }
  }
  pcVar7 = (code *)EncodePointer((PVOID)0x0);
  *ppcVar11 = pcVar7;
LAB_180017cf3:
  if (bVar2) {
    FUN_180017808(0);
  }
  if (param_1 == 8) {
    (*pcVar5)(8,p_Var4->_tfpecode);
  }
  else {
    (*pcVar5)(param_1);
  }
  if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
     (p_Var4->_tpxcptinfoptrs = pvVar10, param_1 == 8)) {
    p_Var4->_tfpecode = local_res10;
  }
  return 0;
}

/* Function: FUN_180017d60 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180017d60(undefined8 param_1)

{
  _DAT_180038e98 = param_1;
  return;
}

/* Function: FUN_180017d68 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180017d68(void)

{
  if (_DAT_18003a2d8 == 0) {
    FUN_180018140(-3);
    _DAT_18003a2d8 = 1;
  }
  return 0;
}

/* Function: getSystemCP */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2012 Release */

int getSystemCP(int param_1)

{
  longlong local_28 [2];
  longlong local_18;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
  _DAT_180038ec0 = 0;
  if (param_1 == -2) {
    _DAT_180038ec0 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    _DAT_180038ec0 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    _DAT_180038ec0 = 1;
    param_1 = *(UINT *)(local_28[0] + 4);
  }
  if (local_10 != '\0') {
    *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
  }
  return param_1;
}

/* Function: FUN_180017e10 */
void FUN_180017e10(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  undefined (*pauVar3) [16];
  longlong lVar4;
  undefined2 *puVar5;
  
  pauVar3 = (undefined (*) [16])(param_1 + 0x18);
  lVar4 = 0x101;
  FUN_180012b90(pauVar3,0,0x101);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  puVar5 = (undefined2 *)(param_1 + 0xc);
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  do {
    (*pauVar3)[0] = *(undefined *)(((longlong)&DAT_180036b70 - param_1) + (longlong)pauVar3);
    pauVar3 = (undefined (*) [16])(*pauVar3 + 1);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar2 = (undefined *)(param_1 + 0x119);
  lVar1 = 0x100;
  do {
    *puVar2 = puVar2[(longlong)&DAT_180036b70 - param_1];
    puVar2 = puVar2 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

/* Function: FUN_180017ea0 */
void FUN_180017ea0(longlong param_1)

{
  byte bVar1;
  BOOL BVar2;
  uint uVar3;
  CHAR *pCVar4;
  ulonglong uVar5;
  byte *pbVar6;
  BYTE *pBVar7;
  WORD *pWVar8;
  longlong lVar9;
  undefined auStackY1416 [32];
  _cpinfo local_538;
  CHAR local_518 [231];
  byte abStack1073 [25];
  undefined local_418 [231];
  byte abStack817 [25];
  undefined local_318 [256];
  WORD local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_180036000 ^ (ulonglong)auStackY1416;
  BVar2 = GetCPInfo(*(UINT *)(param_1 + 4),&local_538);
  lVar9 = 0x100;
  if (BVar2 == 0) {
    uVar3 = 0;
    pbVar6 = (byte *)(param_1 + 0x19);
    do {
      if (uVar3 - 0x41 < 0x1a) {
        *pbVar6 = *pbVar6 | 0x10;
        bVar1 = (char)uVar3 + 0x20;
LAB_180018045:
        pbVar6[0x100] = bVar1;
      }
      else {
        if (uVar3 - 0x61 < 0x1a) {
          *pbVar6 = *pbVar6 | 0x20;
          bVar1 = (char)uVar3 - 0x20;
          goto LAB_180018045;
        }
        pbVar6[0x100] = 0;
      }
      uVar3 = uVar3 + 1;
      pbVar6 = pbVar6 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    pCVar4 = local_518;
    do {
      *pCVar4 = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
      pCVar4 = pCVar4 + 1;
    } while (uVar3 < 0x100);
    local_518[0] = ' ';
    pBVar7 = local_538.LeadByte;
    while (local_538.LeadByte[0] != 0) {
      bVar1 = pBVar7[1];
      uVar5 = (ulonglong)local_538.LeadByte[0];
      while ((uVar3 = (uint)uVar5, uVar3 <= bVar1 && (uVar3 < 0x100))) {
        local_518[uVar5] = ' ';
        uVar5 = (ulonglong)(uVar3 + 1);
      }
      pBVar7 = pBVar7 + 2;
      local_538.LeadByte[0] = *pBVar7;
    }
    FUN_18001d1e8((localeinfo_struct *)0x0,1,local_518,0x100,local_218,*(UINT *)(param_1 + 4),0);
    FUN_18001cfd8((localeinfo_struct *)0x0,*(longlong *)(param_1 + 0x220),0x100,local_518,0x100,
                  local_418,0x100,*(UINT *)(param_1 + 4),0);
    FUN_18001cfd8((localeinfo_struct *)0x0,*(longlong *)(param_1 + 0x220),0x200,local_518,0x100,
                  local_318,0x100,*(UINT *)(param_1 + 4),0);
    pWVar8 = local_218;
    pbVar6 = (byte *)(param_1 + 0x19);
    do {
      if ((*(byte *)pWVar8 & 1) == 0) {
        if ((*(byte *)pWVar8 & 2) != 0) {
          *pbVar6 = *pbVar6 | 0x20;
          bVar1 = pbVar6[(longlong)(abStack817 + -param_1)];
          goto LAB_180018001;
        }
        pbVar6[0x100] = 0;
      }
      else {
        *pbVar6 = *pbVar6 | 0x10;
        bVar1 = pbVar6[(longlong)(abStack1073 + -param_1)];
LAB_180018001:
        pbVar6[0x100] = bVar1;
      }
      pbVar6 = pbVar6 + 1;
      pWVar8 = pWVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  FUN_18000f730(local_18 ^ (ulonglong)auStackY1416);
  return;
}

/* Function: __updatetmbcinfo */
/* Library Function - Single Match
    __updatetmbcinfo
   
   Library: Visual Studio 2012 Release */

pthreadmbcinfo __updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  pthreadmbcinfo _Memory;
  
  p_Var1 = _getptd();
  if (((p_Var1->_ownlocale & DAT_1800372e8) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    _lock(0xd);
    _Memory = p_Var1->ptmbcinfo;
    if (_Memory != (pthreadmbcinfo)PTR_DAT_180036e90) {
      if (_Memory != (pthreadmbcinfo)0x0) {
        LOCK();
        _Memory->refcount = _Memory->refcount + -1;
        if ((_Memory->refcount == 0) && (_Memory != (pthreadmbcinfo)&DAT_180036b70)) {
          free(_Memory);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_180036e90;
      _Memory = (pthreadmbcinfo)PTR_DAT_180036e90;
      LOCK();
      *(int *)PTR_DAT_180036e90 = *(int *)PTR_DAT_180036e90 + 1;
    }
    FUN_180017808(0xd);
  }
  else {
    _Memory = p_Var1->ptmbcinfo;
  }
  if (_Memory == (pthreadmbcinfo)0x0) {
    FUN_18001142c(0x20);
  }
  return _Memory;
}

/* Function: FUN_180018140 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_180018140(int param_1)

{
  pthreadmbcinfo ptVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  pthreadmbcinfo ptVar5;
  int iVar6;
  int iVar7;
  _ptiddata p_Var8;
  pthreadmbcinfo ptVar9;
  pthreadmbcinfo ptVar10;
  ulong *puVar11;
  pthreadmbcinfo ptVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  
  iVar7 = -1;
  p_Var8 = _getptd();
  __updatetmbcinfo();
  ptVar9 = p_Var8->ptmbcinfo;
  iVar6 = getSystemCP(param_1);
  if (iVar6 == ptVar9->mbcodepage) {
    iVar7 = 0;
  }
  else {
    ptVar9 = (pthreadmbcinfo)FUN_18001741c(0x228);
    iVar15 = 0;
    if (ptVar9 != (pthreadmbcinfo)0x0) {
      lVar14 = 4;
      ptVar1 = p_Var8->ptmbcinfo;
      ptVar5 = ptVar9;
      do {
        ptVar12 = ptVar5;
        ptVar10 = ptVar1;
        iVar7 = ptVar10->mbcodepage;
        iVar13 = ptVar10->ismbcodepage;
        uVar2 = *(undefined4 *)ptVar10->mbulinfo;
        ptVar12->refcount = ptVar10->refcount;
        ptVar12->mbcodepage = iVar7;
        ptVar12->ismbcodepage = iVar13;
        *(undefined4 *)ptVar12->mbulinfo = uVar2;
        uVar2 = *(undefined4 *)(ptVar10->mbulinfo + 4);
        uVar3 = *(undefined4 *)ptVar10->mbctype;
        uVar4 = *(undefined4 *)(ptVar10->mbctype + 4);
        *(undefined4 *)(ptVar12->mbulinfo + 2) = *(undefined4 *)(ptVar10->mbulinfo + 2);
        *(undefined4 *)(ptVar12->mbulinfo + 4) = uVar2;
        *(undefined4 *)ptVar12->mbctype = uVar3;
        *(undefined4 *)(ptVar12->mbctype + 4) = uVar4;
        uVar2 = *(undefined4 *)(ptVar10->mbctype + 0xc);
        uVar3 = *(undefined4 *)(ptVar10->mbctype + 0x10);
        uVar4 = *(undefined4 *)(ptVar10->mbctype + 0x14);
        *(undefined4 *)(ptVar12->mbctype + 8) = *(undefined4 *)(ptVar10->mbctype + 8);
        *(undefined4 *)(ptVar12->mbctype + 0xc) = uVar2;
        *(undefined4 *)(ptVar12->mbctype + 0x10) = uVar3;
        *(undefined4 *)(ptVar12->mbctype + 0x14) = uVar4;
        uVar2 = *(undefined4 *)(ptVar10->mbctype + 0x1c);
        uVar3 = *(undefined4 *)(ptVar10->mbctype + 0x20);
        uVar4 = *(undefined4 *)(ptVar10->mbctype + 0x24);
        *(undefined4 *)(ptVar12->mbctype + 0x18) = *(undefined4 *)(ptVar10->mbctype + 0x18);
        *(undefined4 *)(ptVar12->mbctype + 0x1c) = uVar2;
        *(undefined4 *)(ptVar12->mbctype + 0x20) = uVar3;
        *(undefined4 *)(ptVar12->mbctype + 0x24) = uVar4;
        uVar2 = *(undefined4 *)(ptVar10->mbctype + 0x2c);
        uVar3 = *(undefined4 *)(ptVar10->mbctype + 0x30);
        uVar4 = *(undefined4 *)(ptVar10->mbctype + 0x34);
        *(undefined4 *)(ptVar12->mbctype + 0x28) = *(undefined4 *)(ptVar10->mbctype + 0x28);
        *(undefined4 *)(ptVar12->mbctype + 0x2c) = uVar2;
        *(undefined4 *)(ptVar12->mbctype + 0x30) = uVar3;
        *(undefined4 *)(ptVar12->mbctype + 0x34) = uVar4;
        uVar2 = *(undefined4 *)(ptVar10->mbctype + 0x3c);
        uVar3 = *(undefined4 *)(ptVar10->mbctype + 0x40);
        uVar4 = *(undefined4 *)(ptVar10->mbctype + 0x44);
        *(undefined4 *)(ptVar12->mbctype + 0x38) = *(undefined4 *)(ptVar10->mbctype + 0x38);
        *(undefined4 *)(ptVar12->mbctype + 0x3c) = uVar2;
        *(undefined4 *)(ptVar12->mbctype + 0x40) = uVar3;
        *(undefined4 *)(ptVar12->mbctype + 0x44) = uVar4;
        uVar2 = *(undefined4 *)(ptVar10->mbctype + 0x4c);
        uVar3 = *(undefined4 *)(ptVar10->mbctype + 0x50);
        uVar4 = *(undefined4 *)(ptVar10->mbctype + 0x54);
        *(undefined4 *)(ptVar12->mbctype + 0x48) = *(undefined4 *)(ptVar10->mbctype + 0x48);
        *(undefined4 *)(ptVar12->mbctype + 0x4c) = uVar2;
        *(undefined4 *)(ptVar12->mbctype + 0x50) = uVar3;
        *(undefined4 *)(ptVar12->mbctype + 0x54) = uVar4;
        uVar2 = *(undefined4 *)(ptVar10->mbctype + 0x5c);
        uVar3 = *(undefined4 *)(ptVar10->mbctype + 0x60);
        uVar4 = *(undefined4 *)(ptVar10->mbctype + 100);
        *(undefined4 *)(ptVar12->mbctype + 0x58) = *(undefined4 *)(ptVar10->mbctype + 0x58);
        *(undefined4 *)(ptVar12->mbctype + 0x5c) = uVar2;
        *(undefined4 *)(ptVar12->mbctype + 0x60) = uVar3;
        *(undefined4 *)(ptVar12->mbctype + 100) = uVar4;
        lVar14 = lVar14 + -1;
        ptVar1 = (pthreadmbcinfo)(ptVar10->mbctype + 0x68);
        ptVar5 = (pthreadmbcinfo)(ptVar12->mbctype + 0x68);
      } while (lVar14 != 0);
      uVar2 = *(undefined4 *)(ptVar10->mbctype + 0x6c);
      uVar3 = *(undefined4 *)(ptVar10->mbctype + 0x70);
      uVar4 = *(undefined4 *)(ptVar10->mbctype + 0x74);
      ((pthreadmbcinfo)(ptVar12->mbctype + 0x68))->refcount =
           ((pthreadmbcinfo)(ptVar10->mbctype + 0x68))->refcount;
      *(undefined4 *)(ptVar12->mbctype + 0x6c) = uVar2;
      *(undefined4 *)(ptVar12->mbctype + 0x70) = uVar3;
      *(undefined4 *)(ptVar12->mbctype + 0x74) = uVar4;
      uVar2 = *(undefined4 *)(ptVar10->mbctype + 0x7c);
      uVar3 = *(undefined4 *)(ptVar10->mbctype + 0x80);
      uVar4 = *(undefined4 *)(ptVar10->mbctype + 0x84);
      *(undefined4 *)(ptVar12->mbctype + 0x78) = *(undefined4 *)(ptVar10->mbctype + 0x78);
      *(undefined4 *)(ptVar12->mbctype + 0x7c) = uVar2;
      *(undefined4 *)(ptVar12->mbctype + 0x80) = uVar3;
      *(undefined4 *)(ptVar12->mbctype + 0x84) = uVar4;
      *(undefined8 *)(ptVar12->mbctype + 0x88) = *(undefined8 *)(ptVar10->mbctype + 0x88);
      ptVar9->refcount = 0;
      iVar7 = FUN_180018384(iVar6,(longlong)ptVar9);
      if (iVar7 == 0) {
        ptVar1 = p_Var8->ptmbcinfo;
        LOCK();
        ptVar1->refcount = ptVar1->refcount + -1;
        if ((ptVar1->refcount == 0) && (p_Var8->ptmbcinfo != (pthreadmbcinfo)&DAT_180036b70)) {
          free(p_Var8->ptmbcinfo);
        }
        p_Var8->ptmbcinfo = ptVar9;
        LOCK();
        ptVar9->refcount = ptVar9->refcount + 1;
        if (((*(byte *)&p_Var8->_ownlocale & 2) == 0) && (((byte)DAT_1800372e8 & 1) == 0)) {
          _lock(0xd);
          _DAT_180038ea0 = ptVar9->mbcodepage;
          _DAT_180038ea4 = ptVar9->ismbcodepage;
          _DAT_180038eb8 = ptVar9->mblocalename;
          for (iVar6 = iVar15; iVar13 = iVar15, iVar6 < 5; iVar6 = iVar6 + 1) {
            (&DAT_180038ea8)[iVar6] = ptVar9->mbulinfo[iVar6];
          }
          for (; iVar13 < 0x101; iVar13 = iVar13 + 1) {
            (&DAT_180036960)[iVar13] = ptVar9->mbctype[iVar13];
          }
          for (; iVar15 < 0x100; iVar15 = iVar15 + 1) {
            (&DAT_180036a70)[iVar15] = ptVar9->mbcasemap[iVar15];
          }
          LOCK();
          iVar6 = *(int *)PTR_DAT_180036e90;
          *(int *)PTR_DAT_180036e90 = *(int *)PTR_DAT_180036e90 + -1;
          if ((iVar6 == 1) && ((undefined4 *)PTR_DAT_180036e90 != &DAT_180036b70)) {
            free(PTR_DAT_180036e90);
          }
          LOCK();
          PTR_DAT_180036e90 = (undefined *)ptVar9;
          ptVar9->refcount = ptVar9->refcount + 1;
          FUN_180017808(0xd);
        }
      }
      else if (iVar7 == -1) {
        if (ptVar9 != (pthreadmbcinfo)&DAT_180036b70) {
          free(ptVar9);
        }
        puVar11 = __doserrno();
        *puVar11 = 0x16;
      }
    }
  }
  return iVar7;
}

/* Function: FUN_180018384 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180018384(int param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint CodePage;
  BOOL BVar4;
  uint *puVar5;
  byte *pbVar6;
  undefined *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  BYTE *pBVar11;
  byte *pbVar12;
  uint uVar13;
  undefined *puVar14;
  undefined *puVar15;
  uint uVar16;
  byte *pbVar17;
  undefined auStack104 [32];
  _cpinfo local_48;
  ulonglong local_30;
  
  local_30 = DAT_180036000 ^ (ulonglong)auStack104;
  CodePage = getSystemCP(param_1);
  puVar14 = (undefined *)0x0;
  if (CodePage != 0) {
    puVar5 = &DAT_180036da0;
    puVar7 = puVar14;
LAB_1800183d8:
    if (*puVar5 != CodePage) goto code_r0x0001800183e0;
    FUN_180012b90((undefined (*) [16])(param_2 + 0x18),0,0x101);
    pbVar17 = &DAT_180036d98;
    lVar9 = 4;
    pbVar6 = &DAT_180036db0 + (longlong)puVar7 * 0x30;
    do {
      bVar2 = *pbVar6;
      pbVar12 = pbVar6;
      while ((bVar2 != 0 && (pbVar12[1] != 0))) {
        bVar2 = *pbVar12;
        uVar13 = (uint)bVar2;
        if (bVar2 <= pbVar12[1]) {
          uVar16 = (uint)bVar2;
          do {
            uVar16 = uVar16 + 1;
            if (0x100 < uVar16) break;
            uVar13 = uVar13 + 1;
            pbVar1 = (byte *)((ulonglong)uVar16 + 0x18 + param_2);
            *pbVar1 = *pbVar1 | *pbVar17;
          } while (uVar13 <= pbVar12[1]);
        }
        pbVar12 = pbVar12 + 2;
        bVar2 = *pbVar12;
      }
      pbVar6 = pbVar6 + 8;
      pbVar17 = pbVar17 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    *(uint *)(param_2 + 4) = CodePage;
    *(undefined4 *)(param_2 + 8) = 1;
    puVar15 = PTR_u_ja_JP_180028518;
    if (((CodePage != 0x3a4) && (puVar15 = PTR_u_zh_CN_180028520, CodePage != 0x3a8)) &&
       ((puVar15 = PTR_u_ko_KR_180028528, CodePage != 0x3b5 &&
        (puVar15 = puVar14, CodePage == 0x3b6)))) {
      puVar15 = PTR_u_zh_TW_180028530;
    }
    *(undefined **)(param_2 + 0x220) = puVar15;
    puVar10 = (undefined2 *)(param_2 + 0xc);
    lVar9 = 6;
    do {
      *puVar10 = *(undefined2 *)
                  (&DAT_180036d98 + ((longlong)puVar7 * 0x30 - param_2) + (longlong)puVar10);
      puVar10 = puVar10 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    goto LAB_180018602;
  }
LAB_1800183b9:
  FUN_180017e10(param_2);
LAB_18001860c:
  FUN_18000f730(local_30 ^ (ulonglong)auStack104);
  return;
code_r0x0001800183e0:
  uVar13 = (int)puVar7 + 1;
  puVar7 = (undefined *)(ulonglong)uVar13;
  puVar5 = puVar5 + 0xc;
  if (4 < uVar13) goto code_r0x0001800183ec;
  goto LAB_1800183d8;
code_r0x0001800183ec:
  if ((CodePage - 65000 < 2) || (BVar4 = IsValidCodePage(CodePage & 0xffff), BVar4 == 0))
  goto LAB_18001860c;
  BVar4 = GetCPInfo(CodePage,&local_48);
  if (BVar4 != 0) {
    FUN_180012b90((undefined (*) [16])(param_2 + 0x18),0,0x101);
    *(uint *)(param_2 + 4) = CodePage;
    *(undefined8 *)(param_2 + 0x220) = 0;
    if (local_48.MaxCharSize < 2) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else {
      pBVar11 = local_48.LeadByte;
      while ((local_48.LeadByte[0] != 0 && (pBVar11[1] != 0))) {
        bVar2 = *pBVar11;
        if (bVar2 <= pBVar11[1]) {
          pbVar6 = (byte *)(param_2 + 0x18 + (ulonglong)(bVar2 + 1));
          uVar8 = (ulonglong)(((uint)pBVar11[1] - (uint)bVar2) + 1);
          do {
            *pbVar6 = *pbVar6 | 4;
            pbVar6 = pbVar6 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        pBVar11 = pBVar11 + 2;
        local_48.LeadByte[0] = *pBVar11;
      }
      pbVar6 = (byte *)(param_2 + 0x1a);
      lVar9 = 0xfe;
      do {
        *pbVar6 = *pbVar6 | 8;
        pbVar6 = pbVar6 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      iVar3 = *(int *)(param_2 + 4);
      puVar7 = PTR_u_ja_JP_180028518;
      if ((((iVar3 != 0x3a4) && (puVar7 = PTR_u_zh_CN_180028520, iVar3 != 0x3a8)) &&
          (puVar7 = PTR_u_ko_KR_180028528, iVar3 != 0x3b5)) &&
         (puVar7 = PTR_u_zh_TW_180028530, iVar3 != 0x3b6)) {
        puVar7 = puVar14;
      }
      *(undefined **)(param_2 + 0x220) = puVar7;
      *(undefined4 *)(param_2 + 8) = 1;
    }
    puVar10 = (undefined2 *)(param_2 + 0xc);
    for (lVar9 = 6; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
LAB_180018602:
    FUN_180017ea0(param_2);
    goto LAB_18001860c;
  }
  if (_DAT_180038ec0 == 0) goto LAB_18001860c;
  goto LAB_1800183b9;
}

/* Function: FUN_180018650 */
char * FUN_180018650(ulonglong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  lVar4 = -(longlong)param_1;
  uVar2 = (ulonglong)param_1 & 7;
  while (uVar2 != 0) {
    cVar1 = *(char *)param_1;
    param_1 = (ulonglong *)((longlong)param_1 + 1);
    if (cVar1 == '\0') goto LAB_1800186c8;
    uVar2 = (ulonglong)param_1 & 7;
  }
  do {
    do {
      puVar3 = param_1;
      param_1 = puVar3 + 1;
    } while (((~*puVar3 ^ *puVar3 + 0x7efefefefefefeff) & 0x8101010101010100) == 0);
    uVar2 = *puVar3;
    if ((char)uVar2 == '\0') {
      return (char *)(lVar4 + -8 + (longlong)param_1);
    }
    if ((char)(uVar2 >> 8) == '\0') {
      return (char *)(lVar4 + -7 + (longlong)param_1);
    }
    if ((char)(uVar2 >> 0x10) == '\0') {
      return (char *)(lVar4 + -6 + (longlong)param_1);
    }
    if ((char)(uVar2 >> 0x18) == '\0') {
      return (char *)(lVar4 + -5 + (longlong)param_1);
    }
    if ((char)(uVar2 >> 0x20) == '\0') {
      return (char *)(lVar4 + -4 + (longlong)param_1);
    }
    if ((char)(uVar2 >> 0x28) == '\0') {
      return (char *)(lVar4 + -3 + (longlong)param_1);
    }
    if ((char)(uVar2 >> 0x30) == '\0') {
      return (char *)(lVar4 + -2 + (longlong)param_1);
    }
  } while ((char)(uVar2 >> 0x38) != '\0');
LAB_1800186c8:
  return (char *)(lVar4 + -1 + (longlong)param_1);
}

/* Function: FUN_1800186f8 */
ulong FUN_1800186f8(short *param_1,longlong param_2,short *param_3)

{
  short sVar1;
  ulong *puVar2;
  short *psVar3;
  longlong lVar4;
  ulong uVar5;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    psVar3 = param_1;
    if (param_3 == (short *)0x0) {
      *param_1 = 0;
    }
    else {
      do {
        if (*psVar3 == 0) break;
        psVar3 = psVar3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      if (param_2 != 0) {
        lVar4 = (longlong)psVar3 - (longlong)param_3;
        do {
          sVar1 = *param_3;
          *(short *)(lVar4 + (longlong)param_3) = sVar1;
          param_3 = param_3 + 1;
          if (sVar1 == 0) break;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        if (param_2 != 0) {
          return 0;
        }
        *param_1 = 0;
        puVar2 = __doserrno();
        uVar5 = 0x22;
        goto LAB_180018721;
      }
      *param_1 = 0;
    }
  }
  puVar2 = __doserrno();
  uVar5 = 0x16;
LAB_180018721:
  *puVar2 = uVar5;
  FUN_180011d8c();
  return uVar5;
}

/* Function: FUN_180018780 */
ulong FUN_180018780(undefined2 *param_1,longlong param_2,short *param_3)

{
  short sVar1;
  ulong *puVar2;
  ulong uVar3;
  longlong lVar4;
  
  if ((param_1 != (undefined2 *)0x0) && (param_2 != 0)) {
    if (param_3 != (short *)0x0) {
      lVar4 = (longlong)param_1 - (longlong)param_3;
      do {
        sVar1 = *param_3;
        *(short *)(lVar4 + (longlong)param_3) = sVar1;
        param_3 = param_3 + 1;
        if (sVar1 == 0) break;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      if (param_2 != 0) {
        return 0;
      }
      *param_1 = 0;
      puVar2 = __doserrno();
      uVar3 = 0x22;
      goto LAB_1800187a6;
    }
    *param_1 = 0;
  }
  puVar2 = __doserrno();
  uVar3 = 0x16;
LAB_1800187a6:
  *puVar2 = uVar3;
  FUN_180011d8c();
  return uVar3;
}

/* Function: FUN_1800187ec */
longlong FUN_1800187ec(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return ((longlong)psVar2 - (longlong)param_1 >> 1) + -1;
}

/* Function: FUN_180018808 */
ulong FUN_180018808(short *param_1,longlong param_2,short *param_3,longlong param_4)

{
  short sVar1;
  ulong *puVar2;
  ulong uVar3;
  longlong lVar4;
  longlong lVar5;
  short *psVar6;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_180018828:
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = 0;
          return 0;
        }
        if (param_3 != (short *)0x0) {
          lVar4 = param_2;
          if (param_4 == -1) {
            lVar5 = (longlong)param_1 - (longlong)param_3;
            do {
              sVar1 = *param_3;
              *(short *)(lVar5 + (longlong)param_3) = sVar1;
              param_3 = param_3 + 1;
              if (sVar1 == 0) break;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
          else {
            psVar6 = param_1;
            do {
              sVar1 = *(short *)(((longlong)param_3 - (longlong)param_1) + (longlong)psVar6);
              *psVar6 = sVar1;
              psVar6 = psVar6 + 1;
              if ((sVar1 == 0) || (lVar4 = lVar4 + -1, lVar4 == 0)) break;
              param_4 = param_4 + -1;
            } while (param_4 != 0);
            if (param_4 == 0) {
              *psVar6 = 0;
            }
          }
          if (lVar4 != 0) {
            return 0;
          }
          if (param_4 == -1) {
            param_1[param_2 + -1] = 0;
            return 0x50;
          }
          *param_1 = 0;
          puVar2 = __doserrno();
          uVar3 = 0x22;
          goto LAB_180018849;
        }
        *param_1 = 0;
      }
    }
  }
  else if (param_1 != (short *)0x0) goto LAB_180018828;
  puVar2 = __doserrno();
  uVar3 = 0x16;
LAB_180018849:
  *puVar2 = uVar3;
  FUN_180011d8c();
  return uVar3;
}

/* Function: _set_error_mode */
/* Library Function - Single Match
    _set_error_mode
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

int _set_error_mode(int _Mode)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  
  if ((_Mode < 0) ||
     ((iVar2 = DAT_180038ed8, iVar1 = _Mode, 2 < _Mode && (iVar1 = DAT_180038ed8, _Mode != 3)))) {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_180011d8c();
    iVar2 = -1;
    iVar1 = DAT_180038ed8;
  }
  DAT_180038ed8 = iVar1;
  return iVar2;
}

/* Function: FUN_180018914 */
void FUN_180018914(LPCWSTR param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  DWORD DVar2;
  BOOL BVar3;
  int iVar4;
  PVOID pvVar5;
  undefined7 extraout_var;
  HMODULE hModule;
  FARPROC pFVar6;
  code *pcVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined auStack136 [32];
  undefined *local_68;
  undefined local_58 [8];
  undefined local_50 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_180036000 ^ (ulonglong)auStack136;
  pvVar5 = EncodePointer((PVOID)0x0);
  lVar10 = 0;
  bVar1 = FUN_180016f0c();
  iVar4 = (int)CONCAT71(extraout_var,bVar1);
  if (DAT_180038ee0 == (PVOID)0x0) {
    hModule = LoadLibraryExW(L"USER32.DLL",(HANDLE)0x0,0x800);
    if (((hModule == (HMODULE)0x0) &&
        ((DVar2 = GetLastError(), DVar2 != 0x57 ||
         (hModule = LoadLibraryExW(L"USER32.DLL",(HANDLE)0x0,0), hModule == (HMODULE)0x0)))) ||
       (pFVar6 = GetProcAddress(hModule,"MessageBoxW"), pFVar6 == (FARPROC)0x0)) goto LAB_180018b6b;
    DAT_180038ee0 = EncodePointer(pFVar6);
    pFVar6 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_180038ee8 = EncodePointer(pFVar6);
    pFVar6 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_180038ef0 = EncodePointer(pFVar6);
    pFVar6 = GetProcAddress(hModule,"GetUserObjectInformationW");
    DAT_180038f00 = EncodePointer(pFVar6);
    if (DAT_180038f00 != (PVOID)0x0) {
      pFVar6 = GetProcAddress(hModule,"GetProcessWindowStation");
      DAT_180038ef8 = EncodePointer(pFVar6);
    }
  }
  BVar3 = IsDebuggerPresent();
  if (BVar3 == 0) {
    if (iVar4 != 0) {
      DecodePointer(DAT_180038ee0);
      goto LAB_180018b6b;
    }
  }
  else {
    if (param_1 != (LPCWSTR)0x0) {
      OutputDebugStringW(param_1);
    }
    if (iVar4 != 0) goto LAB_180018b6b;
  }
  if ((DAT_180038ef8 == pvVar5) || (DAT_180038f00 == pvVar5)) {
LAB_180018b07:
    if (((DAT_180038ee8 != pvVar5) &&
        (((pcVar7 = (code *)DecodePointer(DAT_180038ee8), pcVar7 != (code *)0x0 &&
          (lVar10 = (*pcVar7)(), lVar10 != 0)) && (DAT_180038ef0 != pvVar5)))) &&
       (pcVar7 = (code *)DecodePointer(DAT_180038ef0), pcVar7 != (code *)0x0)) {
      lVar10 = (*pcVar7)(lVar10);
    }
  }
  else {
    pcVar7 = (code *)DecodePointer(DAT_180038ef8);
    pcVar8 = (code *)DecodePointer(DAT_180038f00);
    if ((pcVar7 == (code *)0x0) || (pcVar8 == (code *)0x0)) goto LAB_180018b07;
    lVar9 = (*pcVar7)();
    if (lVar9 != 0) {
      local_68 = local_58;
      iVar4 = (*pcVar8)(lVar9,1,local_50);
      if ((iVar4 != 0) && ((local_48 & 1) != 0)) goto LAB_180018b07;
    }
    param_3 = param_3 | 0x200000;
  }
  pcVar7 = (code *)DecodePointer(DAT_180038ee0);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(lVar10,param_1,param_2,param_3);
  }
LAB_180018b6b:
  FUN_18000f730(local_40 ^ (ulonglong)auStack136);
  return;
}

/* Function: _isatty */
/* Library Function - Single Match
    _isatty
   
   Library: Visual Studio 2010 Release */

int _isatty(int _FileHandle)

{
  ulong *puVar1;
  
  if (_FileHandle == -2) {
    puVar1 = __doserrno();
    *puVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1800392a8)) {
      return (int)*(char *)((&DAT_180038910)[(longlong)_FileHandle >> 5] + 8 +
                           (ulonglong)(_FileHandle & 0x1f) * 0x58) & 0x40;
    }
    puVar1 = __doserrno();
    *puVar1 = 9;
    FUN_180011d8c();
  }
  return 0;
}

/* Function: _getbuf */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _getbuf
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void _getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_180038908 = _DAT_180038908 + 1;
  pcVar1 = (char *)FUN_18001741c(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_bufsiz = 2;
    _File->_base = (char *)&_File->_charbuf;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return;
}

/* Function: FUN_180018c3c */
void FUN_180018c3c(int *param_1)

{
  int *piVar1;
  int **ppiVar2;
  longlong lVar3;
  
  LOCK();
  *param_1 = *param_1 + 1;
  piVar1 = *(int **)(param_1 + 0x36);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
  }
  piVar1 = *(int **)(param_1 + 0x3a);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
  }
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
  }
  piVar1 = *(int **)(param_1 + 0x3e);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
  }
  ppiVar2 = (int **)(param_1 + 10);
  lVar3 = 6;
  do {
    if ((ppiVar2[-2] != (int *)&DAT_180036ea4) && (piVar1 = *ppiVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
    }
    if ((ppiVar2[-3] != (int *)0x0) && (piVar1 = ppiVar2[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
    }
    ppiVar2 = ppiVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  LOCK();
  *(int *)(*(longlong *)(param_1 + 0x48) + 0x15c) =
       *(int *)(*(longlong *)(param_1 + 0x48) + 0x15c) + 1;
  return;
}

/* Function: __freetlocinfo */
/* Library Function - Single Match
    __freetlocinfo
   
   Library: Visual Studio 2012 Release */

void __freetlocinfo(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  longlong lVar3;
  void **ppvVar4;
  int **ppiVar5;
  
  if ((((*(undefined ***)((longlong)param_1 + 0xf0) != (undefined **)0x0) &&
       (*(undefined ***)((longlong)param_1 + 0xf0) != &PTR_DAT_1800374e0)) &&
      (*(int **)((longlong)param_1 + 0xd8) != (int *)0x0)) &&
     (**(int **)((longlong)param_1 + 0xd8) == 0)) {
    piVar1 = *(int **)((longlong)param_1 + 0xe8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      free(piVar1);
      __free_lconv_mon(*(longlong *)((longlong)param_1 + 0xf0));
    }
    piVar1 = *(int **)((longlong)param_1 + 0xe0);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      free(piVar1);
      __free_lconv_num(*(void ***)((longlong)param_1 + 0xf0));
    }
    free(*(void **)((longlong)param_1 + 0xd8));
    free(*(void **)((longlong)param_1 + 0xf0));
  }
  if ((*(int **)((longlong)param_1 + 0xf8) != (int *)0x0) &&
     (**(int **)((longlong)param_1 + 0xf8) == 0)) {
    free((void *)(*(longlong *)((longlong)param_1 + 0x100) + -0xfe));
    free((void *)(*(longlong *)((longlong)param_1 + 0x110) + -0x80));
    free((void *)(*(longlong *)((longlong)param_1 + 0x118) + -0x80));
    free(*(void **)((longlong)param_1 + 0xf8));
  }
  ppuVar2 = *(undefined ***)((longlong)param_1 + 0x120);
  if ((ppuVar2 != &PTR_DAT_180036eb0) && (*(int *)((longlong)ppuVar2 + 0x15c) == 0)) {
    __free_lc_time(ppuVar2);
    free(*(void **)((longlong)param_1 + 0x120));
  }
  ppvVar4 = (void **)((longlong)param_1 + 0x128);
  ppiVar5 = (int **)((longlong)param_1 + 0x28);
  lVar3 = 6;
  do {
    if (((ppiVar5[-2] != (int *)&DAT_180036ea4) && (piVar1 = *ppiVar5, piVar1 != (int *)0x0)) &&
       (*piVar1 == 0)) {
      free(piVar1);
      free(*ppvVar4);
    }
    if (((ppiVar5[-3] != (int *)0x0) && (piVar1 = ppiVar5[-1], piVar1 != (int *)0x0)) &&
       (*piVar1 == 0)) {
      free(piVar1);
    }
    ppvVar4 = ppvVar4 + 1;
    ppiVar5 = ppiVar5 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  free(param_1);
  return;
}

/* Function: FUN_180018e60 */
int * FUN_180018e60(int *param_1)

{
  int *piVar1;
  int **ppiVar2;
  longlong lVar3;
  
  if (param_1 != (int *)0x0) {
    LOCK();
    *param_1 = *param_1 + -1;
    piVar1 = *(int **)(param_1 + 0x36);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
    }
    piVar1 = *(int **)(param_1 + 0x3a);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
    }
    piVar1 = *(int **)(param_1 + 0x38);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
    }
    piVar1 = *(int **)(param_1 + 0x3e);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
    }
    ppiVar2 = (int **)(param_1 + 10);
    lVar3 = 6;
    do {
      if ((ppiVar2[-2] != (int *)&DAT_180036ea4) && (piVar1 = *ppiVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
      }
      if ((ppiVar2[-3] != (int *)0x0) && (piVar1 = ppiVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
      }
      ppiVar2 = ppiVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    LOCK();
    *(int *)(*(longlong *)(param_1 + 0x48) + 0x15c) =
         *(int *)(*(longlong *)(param_1 + 0x48) + 0x15c) + -1;
  }
  return param_1;
}

/* Function: __updatetlocinfo */
/* Library Function - Single Match
    __updatetlocinfo
   
   Library: Visual Studio 2012 Release */

pthreadlocinfo __updatetlocinfo(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = _getptd();
  if (((p_Var1->_ownlocale & DAT_1800372e8) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    _lock(0xc);
    ptVar2 = (pthreadlocinfo)
             _updatetlocinfoEx_nolock((int **)&p_Var1->ptlocinfo,(int *)PTR_DAT_180037170);
    FUN_180017808(0xc);
  }
  else {
    p_Var1 = _getptd();
    ptVar2 = p_Var1->ptlocinfo;
  }
  if (ptVar2 == (pthreadlocinfo)0x0) {
    FUN_18001142c(0x20);
  }
  return ptVar2;
}

/* Function: _updatetlocinfoEx_nolock */
/* Library Function - Single Match
    _updatetlocinfoEx_nolock
   
   Library: Visual Studio 2012 Release */

int * _updatetlocinfoEx_nolock(int **param_1,int *param_2)

{
  int *piVar1;
  
  if ((param_2 == (int *)0x0) || (param_1 == (int **)0x0)) {
    param_2 = (int *)0x0;
  }
  else {
    piVar1 = *param_1;
    if (piVar1 != param_2) {
      *param_1 = param_2;
      FUN_180018c3c(param_2);
      if (((piVar1 != (int *)0x0) && (FUN_180018e60(piVar1), *piVar1 == 0)) &&
         (piVar1 != (int *)&DAT_180037180)) {
        __freetlocinfo(piVar1);
      }
    }
  }
  return param_2;
}

/* Function: _isleadbyte_l */
/* Library Function - Single Match
    _isleadbyte_l
   
   Library: Visual Studio 2012 Release */

int _isleadbyte_l(int _C,_locale_t _Locale)

{
  ushort uVar1;
  longlong local_28 [2];
  longlong local_18;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,_Locale);
  uVar1 = *(ushort *)(*(longlong *)(local_28[0] + 0x108) + (ulonglong)(_C & 0xff) * 2);
  if (local_10 != '\0') {
    *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}

/* Function: isleadbyte */
/* Library Function - Single Match
    isleadbyte
   
   Library: Visual Studio 2012 Release */

int isleadbyte(int _C)

{
  ushort uVar1;
  longlong local_28 [2];
  longlong local_18;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
  uVar1 = *(ushort *)(*(longlong *)(local_28[0] + 0x108) + (ulonglong)(_C & 0xff) * 2);
  if (local_10 != '\0') {
    *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}

/* Function: FUN_18001906c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_18001906c(void)

{
  return _DAT_180038f08 == (DAT_180036000 | 1);
}

/* Function: FUN_180019084 */
ulong FUN_180019084(int *param_1,undefined (*param_2) [16],ulonglong param_3,WCHAR param_4,
                   localeinfo_struct *param_5)

{
  int iVar1;
  DWORD DVar2;
  ulong *puVar3;
  ulong uVar4;
  int local_res10 [2];
  WCHAR local_res20 [4];
  longlong local_28 [2];
  longlong local_18;
  char local_10;
  
  if ((param_2 == (undefined (*) [16])0x0) && (param_3 != 0)) {
    if (param_1 != (int *)0x0) {
      *param_1 = 0;
    }
    return 0;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  local_res20[0] = param_4;
  if (0x7fffffff < param_3) {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_180011d8c();
    return 0x16;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_5);
  if (*(longlong *)(local_28[0] + 0x138) == 0) {
    if ((ushort)local_res20[0] < 0x100) {
      if (param_2 != (undefined (*) [16])0x0) {
        if (param_3 == 0) goto LAB_1800191f8;
        (*param_2)[0] = (char)local_res20[0];
      }
      if (param_1 != (int *)0x0) {
        *param_1 = 1;
      }
LAB_1800191cb:
      uVar4 = 0;
      goto LAB_18001913a;
    }
    if ((param_2 != (undefined (*) [16])0x0) && (param_3 != 0)) {
      FUN_180012b90(param_2,0,param_3);
    }
  }
  else {
    local_res10[0] = 0;
    iVar1 = WideCharToMultiByte(*(UINT *)(local_28[0] + 4),0,local_res20,1,(LPSTR)param_2,
                                (int)param_3,(LPCSTR)0x0,local_res10);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x7a) {
        if ((param_2 != (undefined (*) [16])0x0) && (param_3 != 0)) {
          FUN_180012b90(param_2,0,param_3);
        }
LAB_1800191f8:
        puVar3 = __doserrno();
        uVar4 = 0x22;
        *puVar3 = 0x22;
        FUN_180011d8c();
        goto LAB_18001913a;
      }
    }
    else if (local_res10[0] == 0) {
      if (param_1 != (int *)0x0) {
        *param_1 = iVar1;
      }
      goto LAB_1800191cb;
    }
  }
  puVar3 = __doserrno();
  *puVar3 = 0x2a;
  puVar3 = __doserrno();
  uVar4 = *puVar3;
LAB_18001913a:
  if (local_10 != '\0') {
    *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
  }
  return uVar4;
}

/* Function: FUN_180019210 */
void FUN_180019210(int *param_1,undefined (*param_2) [16],ulonglong param_3,WCHAR param_4)

{
  FUN_180019084(param_1,param_2,param_3,param_4,(localeinfo_struct *)0x0);
  return;
}

/* Function: FUN_180019224 */
uint FUN_180019224(localeinfo_struct *param_1,byte *param_2,byte **param_3,uint param_4,uint param_5
                  )

{
  ushort uVar1;
  uint uVar2;
  ulong *puVar3;
  undefined6 extraout_var;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  pthreadlocinfo ptVar9;
  localeinfo_struct local_48;
  longlong local_38;
  char local_30;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_48,param_1);
  if (param_3 != (byte **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 != (byte *)0x0) && ((param_4 == 0 || (param_4 - 2 < 0x23)))) {
    bVar7 = *param_2;
    uVar8 = 0;
    pbVar6 = param_2 + 1;
    ptVar9 = local_48.locinfo;
    while( true ) {
      if (ptVar9->mb_cur_max < 2) {
        uVar2 = ptVar9->pctype[bVar7] & 8;
      }
      else {
        uVar1 = FUN_18001d878((uint)bVar7,8,&local_48);
        uVar2 = (uint)CONCAT62(extraout_var,uVar1);
        ptVar9 = local_48.locinfo;
      }
      if (uVar2 == 0) break;
      bVar7 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    }
    if (bVar7 == 0x2d) {
      param_5 = param_5 | 2;
LAB_1800192ea:
      bVar7 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    }
    else if (bVar7 == 0x2b) goto LAB_1800192ea;
    if (param_4 == 0) {
LAB_180019312:
      if (bVar7 != 0x30) {
        param_4 = 10;
        goto LAB_180019354;
      }
      if ((*pbVar6 + 0xa8 & 0xdf) != 0) {
        param_4 = 8;
        goto LAB_180019354;
      }
      param_4 = 0x10;
    }
    else {
      if (0x22 < param_4 - 2) {
        if (param_3 != (byte **)0x0) {
          *param_3 = param_2;
        }
        goto LAB_180019306;
      }
      if (param_4 == 0) goto LAB_180019312;
      if ((param_4 != 0x10) || (bVar7 != 0x30)) goto LAB_180019354;
    }
    if ((*pbVar6 + 0xa8 & 0xdf) == 0) {
      bVar7 = pbVar6[1];
      pbVar6 = pbVar6 + 2;
    }
LAB_180019354:
    uVar2 = (uint)(0xffffffff / (ulonglong)param_4);
    do {
      if ((ptVar9->pctype[bVar7] & 4) == 0) {
        if ((ptVar9->pctype[bVar7] & 0x103) == 0) goto LAB_1800193b5;
        iVar5 = (int)(char)bVar7;
        if ((byte)(bVar7 + 0x9f) < 0x1a) {
          iVar5 = iVar5 + -0x20;
        }
        uVar4 = iVar5 - 0x37;
      }
      else {
        uVar4 = (int)(char)bVar7 - 0x30;
      }
      if (param_4 <= uVar4) goto LAB_1800193b5;
      if ((uVar8 < uVar2) ||
         ((uVar8 == uVar2 && (uVar4 <= (uint)(0xffffffff % (ulonglong)param_4))))) {
        uVar8 = uVar8 * param_4 + uVar4;
        param_5 = param_5 | 8;
      }
      else {
        param_5 = param_5 | 0xc;
        if (param_3 == (byte **)0x0) goto LAB_1800193b5;
      }
      bVar7 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while( true );
  }
  puVar3 = __doserrno();
  *puVar3 = 0x16;
  FUN_180011d8c();
LAB_180019306:
  uVar8 = 0;
LAB_180019432:
  if (local_30 != '\0') {
    *(uint *)(local_38 + 200) = *(uint *)(local_38 + 200) & 0xfffffffd;
  }
  return uVar8;
LAB_1800193b5:
  pbVar6 = pbVar6 + -1;
  if ((param_5 & 8) == 0) {
    if (param_3 != (byte **)0x0) {
      pbVar6 = param_2;
    }
    uVar8 = 0;
  }
  else if (((param_5 & 4) != 0) ||
          (((param_5 & 1) == 0 &&
           ((((param_5 & 2) != 0 && (0x80000000 < uVar8)) ||
            (((param_5 & 2) == 0 && (0x7fffffff < uVar8)))))))) {
    puVar3 = __doserrno();
    *puVar3 = 0x22;
    if ((param_5 & 1) == 0) {
      uVar8 = ((param_5 & 2) != 0) + 0x7fffffff;
    }
    else {
      uVar8 = 0xffffffff;
    }
  }
  if (param_3 != (byte **)0x0) {
    *param_3 = pbVar6;
  }
  if ((param_5 & 2) != 0) {
    uVar8 = -uVar8;
  }
  goto LAB_180019432;
}

/* Function: _fcloseall */
/* Library Function - Single Match
    _fcloseall
   
   Library: Visual Studio 2012 Release */

int _fcloseall(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  _lock(1);
  for (iVar2 = 3; iVar2 < DAT_1800392b8; iVar2 = iVar2 + 1) {
    lVar3 = (longlong)iVar2;
    _File = *(FILE **)(DAT_1800392b0 + lVar3 * 8);
    if (_File != (FILE *)0x0) {
      if ((*(byte *)&_File->_flag & 0x83) != 0) {
        iVar1 = fclose(_File);
        if (iVar1 != -1) {
          iVar4 = iVar4 + 1;
        }
      }
      if (0x13 < iVar2) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_1800392b0 + lVar3 * 8) + 0x30))
        ;
        free(*(void **)(DAT_1800392b0 + lVar3 * 8));
        *(undefined8 *)(DAT_1800392b0 + lVar3 * 8) = 0;
      }
    }
  }
  FUN_180017808(1);
  return iVar4;
}

/* Function: FUN_180019538 */
ulonglong FUN_180019538(LPCSTR param_1,uint param_2,int param_3,ulonglong param_4,uint *param_5,
                       int param_6)

{
  byte *pbVar1;
  ulong *puVar2;
  ulonglong uVar3;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = 0;
  if (((param_5 == (uint *)0x0) || (*param_5 = 0xffffffff, param_1 == (LPCSTR)0x0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7f) != 0)))) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_180011d8c();
    uVar3 = 0x16;
  }
  else {
    uVar3 = FUN_180019618(&local_18,param_5,param_1,param_2,param_3,(byte)param_4);
    local_14 = (int)uVar3;
    uVar3 = uVar3 & 0xffffffff;
    if (local_18 != 0) {
      if (local_14 != 0) {
        pbVar1 = (byte *)((&DAT_180038910)[(longlong)(int)*param_5 >> 5] + 8 +
                         (ulonglong)(*param_5 & 0x1f) * 0x58);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      FUN_180019e20(*param_5);
    }
    if ((int)uVar3 != 0) {
      *param_5 = 0xffffffff;
    }
  }
  return uVar3;
}

/* Function: FUN_180019618 */
ulonglong FUN_180019618(undefined4 *param_1,uint *param_2,LPCSTR param_3,uint param_4,int param_5,
                       byte param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  LPCWSTR local_18 [2];
  
  local_18[0] = (LPCWSTR)0x0;
  uVar1 = FUN_180011188(param_3,local_18);
  if ((int)uVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_18001ac5c(param_1,param_2,local_18[0],param_4,param_5,param_6);
    uVar2 = uVar2 & 0xffffffff;
    free(local_18[0]);
  }
  return uVar2;
}

/* Function: FUN_1800196a0 */
void FUN_1800196a0(uint *param_1,LPCSTR param_2,uint param_3,int param_4,uint param_5)

{
  FUN_180019538(param_2,param_3,param_4,(ulonglong)param_5,param_1,1);
  return;
}

/* Function: FUN_1800196d4 */
ulonglong FUN_1800196d4(ulonglong *param_1,byte *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulong *puVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  byte *pbVar6;
  _LocaleUpdate local_28 [8];
  longlong local_20;
  longlong local_18;
  char local_10;
  
  if (param_3 == 0) {
    return 0;
  }
  _LocaleUpdate::_LocaleUpdate(local_28,(localeinfo_struct *)0x0);
  if (*(int *)(local_20 + 8) == 0) {
    uVar1 = FUN_18001d9b0(param_1,(longlong)param_2,param_3);
  }
  else {
    if ((param_1 != (ulonglong *)0x0) && (param_2 != (byte *)0x0)) {
      do {
        uVar1 = (ulonglong)*(byte *)param_1;
        uVar4 = param_3 - 1;
        puVar5 = (ulonglong *)((longlong)param_1 + 1);
        if ((*(byte *)(uVar1 + 0x19 + local_20) & 4) == 0) {
LAB_180019796:
          uVar3 = (ushort)uVar1;
          uVar1 = (ulonglong)*param_2;
          pbVar6 = param_2 + 1;
          if ((*(byte *)(uVar1 + 0x19 + local_20) & 4) != 0) {
            if (uVar4 == 0) {
              uVar1 = 0;
            }
            else {
              uVar4 = param_3 - 2;
              if (*pbVar6 == 0) {
                uVar1 = 0;
              }
              else {
                uVar1 = (ulonglong)CONCAT11(*param_2,*pbVar6);
                pbVar6 = param_2 + 2;
              }
            }
          }
        }
        else {
          if (uVar4 != 0) {
            if (*(byte *)puVar5 == 0) {
              uVar1 = 0;
            }
            else {
              uVar1 = (ulonglong)CONCAT11(*(byte *)param_1,*(byte *)puVar5);
              puVar5 = (ulonglong *)((longlong)param_1 + 2);
            }
            goto LAB_180019796;
          }
          uVar3 = 0;
          if ((*(byte *)((ulonglong)*param_2 + 0x19 + local_20) & 4) != 0) goto LAB_1800197d5;
          uVar1 = (ulonglong)*param_2;
          pbVar6 = param_2;
        }
        if ((ushort)uVar1 != uVar3) {
          uVar1 = (ulonglong)((-(uint)((ushort)uVar1 < uVar3) & 2) - 1);
          goto LAB_1800197e0;
        }
        if ((uVar3 == 0) || (param_3 = uVar4, param_1 = puVar5, param_2 = pbVar6, uVar4 == 0))
        goto LAB_1800197d5;
      } while( true );
    }
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_180011d8c();
    uVar1 = 0x7fffffff;
  }
LAB_1800197e0:
  if (local_10 != '\0') {
    *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
  }
  return uVar1;
LAB_1800197d5:
  uVar1 = 0;
  goto LAB_1800197e0;
}

/* Function: FUN_180019808 */
int FUN_180019808(byte *param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  int iVar2;
  ulong *puVar3;
  ushort uVar4;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ushort uVar9;
  _LocaleUpdate local_28 [8];
  longlong local_20;
  longlong local_18;
  char local_10;
  ulonglong uVar5;
  
  _LocaleUpdate::_LocaleUpdate(local_28,(localeinfo_struct *)0x0);
  if (param_3 == 0) {
LAB_18001998a:
    iVar2 = 0;
  }
  else if (*(int *)(local_20 + 8) == 0) {
    iVar2 = FUN_18001da78(param_1,param_2,param_3);
  }
  else {
    if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
      do {
        uVar5 = (ulonglong)*param_1;
        uVar6 = param_3 - 1;
        pbVar7 = param_1 + 1;
        if ((*(byte *)(uVar5 + 0x19 + local_20) & 4) == 0) {
          if ((*(byte *)(uVar5 + 0x19 + local_20) & 0x10) != 0) {
            uVar5 = (ulonglong)*(byte *)(uVar5 + 0x119 + local_20);
          }
LAB_18001990f:
          uVar9 = (ushort)uVar5;
          uVar5 = (ulonglong)*param_2;
          pbVar8 = param_2 + 1;
          if ((*(byte *)(uVar5 + 0x19 + local_20) & 4) == 0) {
            if ((*(byte *)(uVar5 + 0x19 + local_20) & 0x10) != 0) {
              uVar5 = (ulonglong)*(byte *)(uVar5 + 0x119 + local_20);
            }
          }
          else if (uVar6 == 0) {
            uVar5 = 0;
          }
          else {
            uVar6 = param_3 - 2;
            if (*pbVar8 == 0) {
              uVar5 = 0;
            }
            else {
              bVar1 = *pbVar8;
              pbVar8 = param_2 + 2;
              uVar4 = CONCAT11(*param_2,bVar1);
              uVar5 = (ulonglong)uVar4;
              if ((uVar4 < *(ushort *)(local_20 + 0xc)) ||
                 (*(ushort *)(local_20 + 0xe) <= uVar4 && uVar4 != *(ushort *)(local_20 + 0xe))) {
                if ((*(ushort *)(local_20 + 0x12) <= uVar4) &&
                   (uVar4 < *(ushort *)(local_20 + 0x14) || uVar4 == *(ushort *)(local_20 + 0x14)))
                {
                  uVar5 = (ulonglong)(ushort)(uVar4 + *(short *)(local_20 + 0x16));
                }
              }
              else {
                uVar5 = (ulonglong)(ushort)(uVar4 + *(short *)(local_20 + 0x10));
              }
            }
          }
        }
        else {
          if (uVar6 != 0) {
            if (*pbVar7 == 0) {
              uVar5 = 0;
            }
            else {
              bVar1 = *pbVar7;
              pbVar7 = param_1 + 2;
              uVar9 = CONCAT11(*param_1,bVar1);
              uVar5 = (ulonglong)uVar9;
              if ((uVar9 < *(ushort *)(local_20 + 0xc)) ||
                 (*(ushort *)(local_20 + 0xe) <= uVar9 && uVar9 != *(ushort *)(local_20 + 0xe))) {
                if ((*(ushort *)(local_20 + 0x12) <= uVar9) &&
                   (uVar9 < *(ushort *)(local_20 + 0x14) || uVar9 == *(ushort *)(local_20 + 0x14)))
                {
                  uVar5 = (ulonglong)(ushort)(uVar9 + *(short *)(local_20 + 0x16));
                }
              }
              else {
                uVar5 = (ulonglong)(ushort)(uVar9 + *(short *)(local_20 + 0x10));
              }
            }
            goto LAB_18001990f;
          }
          uVar9 = 0;
          if ((*(byte *)((ulonglong)*param_2 + 0x19 + local_20) & 4) != 0) goto LAB_18001998a;
          uVar5 = (ulonglong)*param_2;
          pbVar8 = param_2;
        }
        if ((ushort)uVar5 != uVar9) {
          iVar2 = (-(uint)((ushort)uVar5 < uVar9) & 2) - 1;
          goto LAB_180019995;
        }
        if ((uVar9 == 0) || (param_3 = uVar6, param_1 = pbVar7, param_2 = pbVar8, uVar6 == 0))
        goto LAB_18001998a;
      } while( true );
    }
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_180011d8c();
    iVar2 = 0x7fffffff;
  }
LAB_180019995:
  if (local_10 != '\0') {
    *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
  }
  return iVar2;
}

/* Function: FUN_1800199c0 */
undefined8 FUN_1800199c0(uint param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (ulonglong)(param_1 & 0x1f) * 0x58;
  lVar2 = (&DAT_180038910)[(longlong)(int)param_1 >> 5];
  if (*(int *)(lVar3 + 0xc + lVar2) == 0) {
    _lock(10);
    if (*(int *)(lVar3 + 0xc + lVar2) == 0) {
      FUN_180016ee0((LPCRITICAL_SECTION)(lVar3 + 0x10 + lVar2),4000);
      piVar1 = (int *)(lVar3 + 0xc + lVar2);
      *piVar1 = *piVar1 + 1;
    }
    FUN_180017808(10);
  }
  EnterCriticalSection
            ((LPCRITICAL_SECTION)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 0x10 + lVar3));
  return 1;
}

/* Function: FUN_180019a58 */
uint FUN_180019a58(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0xffffffff;
  uVar1 = FUN_1800176e4(0xb);
  if ((int)uVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    _lock(0xb);
    for (iVar4 = 0; iVar4 < 0x40; iVar4 = iVar4 + 1) {
      puVar2 = (undefined8 *)(&DAT_180038910)[iVar4];
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)FUN_18001739c(0x20,0x58);
        if (puVar2 != (undefined8 *)0x0) {
          (&DAT_180038910)[iVar4] = puVar2;
          DAT_1800392a8 = DAT_1800392a8 + 0x20;
          for (; puVar2 < (undefined8 *)((&DAT_180038910)[iVar4] + 0xb00); puVar2 = puVar2 + 0xb) {
            *(undefined2 *)(puVar2 + 1) = 0xa00;
            *puVar2 = 0xffffffffffffffff;
            *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          }
          uVar3 = iVar4 << 5;
          *(undefined *)((&DAT_180038910)[(longlong)(int)uVar3 >> 5] + 8) = 1;
          uVar1 = FUN_1800199c0(uVar3);
          if ((int)uVar1 == 0) {
            uVar3 = 0xffffffff;
          }
        }
        break;
      }
      for (; puVar2 < (undefined8 *)((&DAT_180038910)[iVar4] + 0xb00); puVar2 = puVar2 + 0xb) {
        if ((*(byte *)(puVar2 + 1) & 1) == 0) {
          if (*(int *)((longlong)puVar2 + 0xc) == 0) {
            _lock(10);
            if (*(int *)((longlong)puVar2 + 0xc) == 0) {
              FUN_180016ee0((LPCRITICAL_SECTION)(puVar2 + 2),4000);
              *(int *)((longlong)puVar2 + 0xc) = *(int *)((longlong)puVar2 + 0xc) + 1;
            }
            FUN_180017808(10);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 2));
          if ((*(byte *)(puVar2 + 1) & 1) == 0) {
            *(undefined *)(puVar2 + 1) = 1;
            *puVar2 = 0xffffffffffffffff;
            uVar3 = (int)(((longlong)puVar2 - (&DAT_180038910)[iVar4]) / 0x58) + iVar4 * 0x20;
            break;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 2));
        }
      }
      if (uVar3 != 0xffffffff) break;
    }
    FUN_180017808(0xb);
  }
  return uVar3;
}

/* Function: FUN_180019c50 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180019c50(uint param_1)

{
  ulong *puVar1;
  DWORD nStdHandle;
  longlong lVar2;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_1800392a8)) {
    lVar2 = (ulonglong)(param_1 & 0x1f) * 0x58;
    if (((*(byte *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 + lVar2) & 1) != 0) &&
       (*(longlong *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + lVar2) != -1)) {
      if (_DAT_1800382c0 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_180019cc6;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_180019cc6:
      *(undefined8 *)(lVar2 + (&DAT_180038910)[(longlong)(int)param_1 >> 5]) = 0xffffffffffffffff;
      return 0;
    }
  }
  puVar1 = __doserrno();
  *puVar1 = 9;
  puVar1 = __doserrno();
  *puVar1 = 0;
  return 0xffffffff;
}

/* Function: FUN_180019cfc */
undefined8 FUN_180019cfc(uint param_1)

{
  ulong *puVar1;
  longlong lVar2;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = __doserrno();
    *puVar1 = 0;
    puVar1 = __doserrno();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1800392a8)) {
      lVar2 = (ulonglong)(param_1 & 0x1f) * 0x58;
      if ((*(byte *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 + lVar2) & 1) != 0) {
        return *(undefined8 *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + lVar2);
      }
    }
    puVar1 = __doserrno();
    *puVar1 = 0;
    puVar1 = __doserrno();
    *puVar1 = 9;
    FUN_180011d8c();
  }
  return 0xffffffffffffffff;
}

/* Function: FUN_180019d70 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180019d70(uint param_1,HANDLE param_2)

{
  ulong *puVar1;
  DWORD nStdHandle;
  longlong lVar2;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_1800392a8)) {
    lVar2 = (ulonglong)(param_1 & 0x1f) * 0x58;
    if (*(longlong *)(lVar2 + (&DAT_180038910)[(longlong)(int)param_1 >> 5]) == -1) {
      if (_DAT_1800382c0 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_180019de5;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_180019de5:
      *(HANDLE *)(lVar2 + (&DAT_180038910)[(longlong)(int)param_1 >> 5]) = param_2;
      return 0;
    }
  }
  puVar1 = __doserrno();
  *puVar1 = 9;
  puVar1 = __doserrno();
  *puVar1 = 0;
  return 0xffffffff;
}

/* Function: FUN_180019e20 */
void FUN_180019e20(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180019e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((ulonglong)(param_1 & 0x1f) * 0x58 + 0x10 +
             (&DAT_180038910)[(longlong)(int)param_1 >> 5]));
  return;
}

/* Function: FUN_180019fa0 */
undefined4 FUN_180019fa0(LPWSTR param_1,byte *param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  localeinfo_struct local_28;
  longlong local_18;
  char local_10;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    if (*param_2 != 0) {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(localeinfo_struct *)0x0);
      if ((local_28.locinfo)->locale_name[2] == (wchar_t *)0x0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)*param_2;
        }
        iVar2 = 1;
      }
      else {
        iVar1 = _isleadbyte_l((uint)*param_2,&local_28);
        iVar2 = 1;
        if (iVar1 == 0) {
          iVar1 = MultiByteToWideChar((local_28.locinfo)->lc_codepage,9,(LPCSTR)param_2,1,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar1 != 0) goto LAB_180019f83;
        }
        else {
          iVar2 = (local_28.locinfo)->mb_cur_max;
          if ((((1 < iVar2) && (iVar2 <= (int)param_3)) &&
              (iVar2 = MultiByteToWideChar((local_28.locinfo)->lc_codepage,9,(LPCSTR)param_2,iVar2,
                                           param_1,(uint)(param_1 != (LPWSTR)0x0)), iVar2 != 0)) ||
             (((ulonglong)(longlong)(local_28.locinfo)->mb_cur_max <= param_3 && (param_2[1] != 0)))
             ) {
            iVar2 = (local_28.locinfo)->mb_cur_max;
            goto LAB_180019f83;
          }
        }
        puVar3 = __doserrno();
        iVar2 = -1;
        *puVar3 = 0x2a;
      }
LAB_180019f83:
      if (local_10 == '\0') {
        return iVar2;
      }
      *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
      return iVar2;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}

/* Function: FUN_180019fa8 */
undefined2 FUN_180019fa8(undefined2 param_1)

{
  BOOL BVar1;
  undefined2 local_res8 [4];
  DWORD local_res10 [6];
  
  local_res8[0] = param_1;
  if (DAT_1800375a0 == (HANDLE)0xfffffffffffffffe) {
    FUN_18001dbc4();
  }
  if ((DAT_1800375a0 == (HANDLE)0xffffffffffffffff) ||
     (BVar1 = WriteConsoleW(DAT_1800375a0,local_res8,1,local_res10,(LPVOID)0x0), BVar1 == 0)) {
    local_res8[0] = 0xffff;
  }
  return local_res8[0];
}

/* Function: FUN_18001a004 */
DWORD FUN_18001a004(uint param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  ulong *puVar3;
  HANDLE hFile;
  longlong lVar4;
  
  if (param_1 == 0xfffffffe) {
    puVar3 = __doserrno();
    *puVar3 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1800392a8)) {
      lVar4 = (ulonglong)(param_1 & 0x1f) * 0x58;
      if ((*(byte *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 + lVar4) & 1) != 0) {
        FUN_1800199c0(param_1);
        if ((*(byte *)((&DAT_180038910)[(longlong)(int)param_1 >> 5] + 8 + lVar4) & 1) != 0) {
          hFile = (HANDLE)FUN_180019cfc(param_1);
          BVar1 = FlushFileBuffers(hFile);
          if (BVar1 == 0) {
            DVar2 = GetLastError();
          }
          else {
            DVar2 = 0;
          }
          if (DVar2 == 0) goto LAB_18001a0af;
          puVar3 = __doserrno();
          *puVar3 = DVar2;
        }
        puVar3 = __doserrno();
        *puVar3 = 9;
        DVar2 = 0xffffffff;
LAB_18001a0af:
        FUN_180019e20(param_1);
        return DVar2;
      }
    }
    puVar3 = __doserrno();
    *puVar3 = 9;
    FUN_180011d8c();
  }
  return 0xffffffff;
}

/* Function: FUN_18001a0dc */
void FUN_18001a0dc(uint param_1,undefined (*param_2) [16])

{
  ushort uVar1;
  DWORD DVar2;
  uint uVar3;
  BOOL BVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined auStackY216 [32];
  _FILETIME local_98;
  uint local_90 [2];
  uint local_88;
  _SYSTEMTIME local_80;
  byte local_70;
  FILETIME local_6c;
  FILETIME local_64;
  FILETIME local_5c [2];
  DWORD local_4c;
  ulonglong local_38;
  
  local_38 = DAT_180036000 ^ (ulonglong)auStackY216;
  local_88 = param_1;
  if (param_2 == (undefined (*) [16])0x0) {
    puVar5 = __doserrno();
    *puVar5 = 0;
    puVar5 = __doserrno();
    *puVar5 = 0x16;
  }
  else {
    FUN_180012b90(param_2,0,0x30);
    if (param_1 == 0xfffffffe) {
      puVar5 = __doserrno();
      *puVar5 = 0;
      puVar5 = __doserrno();
      *puVar5 = 9;
      goto LAB_18001a466;
    }
    if ((-1 < (int)param_1) && (param_1 < DAT_1800392a8)) {
      lVar8 = (longlong)(int)param_1 >> 5;
      lVar9 = (ulonglong)(param_1 & 0x1f) * 0x58;
      if ((*(byte *)((&DAT_180038910)[lVar8] + 8 + lVar9) & 1) != 0) {
        FUN_1800199c0(param_1);
        if ((*(byte *)((&DAT_180038910)[lVar8] + 8 + lVar9) & 1) == 0) {
LAB_18001a1bb:
          puVar5 = __doserrno();
          *puVar5 = 9;
        }
        else {
          DVar2 = GetFileType(*(HANDLE *)((&DAT_180038910)[lVar8] + lVar9));
          uVar3 = DVar2 & 0xffff7fff;
          if (uVar3 == 1) {
            *(undefined4 *)(*param_2 + 4) = 0;
            *(undefined4 *)(*param_2 + 10) = 0;
            *(undefined2 *)(*param_2 + 8) = 1;
            BVar4 = GetFileInformationByHandle
                              (*(HANDLE *)((&DAT_180038910)[lVar8] + lVar9),
                               (LPBY_HANDLE_FILE_INFORMATION)&local_70);
            if (BVar4 == 0) {
LAB_18001a1ee:
              DVar2 = GetLastError();
              _dosmaperr(DVar2);
            }
            else {
              if ((local_70 & 1) == 0) {
                uVar1 = *(ushort *)(*param_2 + 6) | 0x1b6;
              }
              else {
                uVar1 = *(ushort *)(*param_2 + 6) | 0x124;
              }
              *(ushort *)(*param_2 + 6) = uVar1;
              if ((local_5c[0].dwLowDateTime == 0) && (local_5c[0].dwHighDateTime == 0)) {
                *(undefined8 *)param_2[2] = 0;
              }
              else {
                BVar4 = FileTimeToLocalFileTime(local_5c,&local_98);
                if ((BVar4 == 0) || (BVar4 = FileTimeToSystemTime(&local_98,&local_80), BVar4 == 0))
                goto LAB_18001a441;
                uVar6 = FUN_18001a5a0((uint)local_80.wYear,(uint)local_80.wMonth,(uint)local_80.wDay
                                      ,(uint)local_80.wHour,(uint)local_80.wMinute,
                                      (uint)local_80.wSecond,-1);
                *(undefined8 *)param_2[2] = uVar6;
              }
              if ((local_64.dwLowDateTime == 0) && (local_64.dwHighDateTime == 0)) {
                uVar6 = *(undefined8 *)param_2[2];
              }
              else {
                BVar4 = FileTimeToLocalFileTime(&local_64,&local_98);
                if ((BVar4 == 0) || (BVar4 = FileTimeToSystemTime(&local_98,&local_80), BVar4 == 0))
                goto LAB_18001a441;
                uVar6 = FUN_18001a5a0((uint)local_80.wYear,(uint)local_80.wMonth,(uint)local_80.wDay
                                      ,(uint)local_80.wHour,(uint)local_80.wMinute,
                                      (uint)local_80.wSecond,-1);
              }
              *(undefined8 *)(param_2[1] + 8) = uVar6;
              if ((local_6c.dwLowDateTime == 0) && (local_6c.dwHighDateTime == 0)) {
                uVar6 = *(undefined8 *)param_2[2];
              }
              else {
                BVar4 = FileTimeToLocalFileTime(&local_6c,&local_98);
                if ((BVar4 == 0) || (BVar4 = FileTimeToSystemTime(&local_98,&local_80), BVar4 == 0))
                goto LAB_18001a441;
                uVar6 = FUN_18001a5a0((uint)local_80.wYear,(uint)local_80.wMonth,(uint)local_80.wDay
                                      ,(uint)local_80.wHour,(uint)local_80.wMinute,
                                      (uint)local_80.wSecond,-1);
              }
              *(undefined8 *)(param_2[2] + 8) = uVar6;
              *(DWORD *)(param_2[1] + 4) = local_4c;
              *(ushort *)(*param_2 + 6) = *(ushort *)(*param_2 + 6) | 0x8000;
              *(undefined4 *)*param_2 = 0;
              *(undefined4 *)param_2[1] = 0;
            }
          }
          else {
            if (1 < uVar3 - 2) {
              if (uVar3 != 0) goto LAB_18001a1ee;
              goto LAB_18001a1bb;
            }
            uVar7 = 0x2000;
            if (uVar3 != 2) {
              uVar7 = 0x1000;
            }
            *(undefined2 *)(*param_2 + 6) = uVar7;
            *(uint *)*param_2 = param_1;
            *(uint *)param_2[1] = param_1;
            *(undefined4 *)(*param_2 + 8) = 1;
            *(undefined2 *)(*param_2 + 4) = 0;
            *(undefined2 *)(*param_2 + 0xc) = 0;
            *(undefined8 *)(param_2[2] + 8) = 0;
            *(undefined8 *)param_2[2] = 0;
            *(undefined8 *)(param_2[1] + 8) = 0;
            if (uVar3 == 2) {
              *(undefined4 *)(param_2[1] + 4) = 0;
            }
            else {
              BVar4 = PeekNamedPipe(*(HANDLE *)((&DAT_180038910)[lVar8] + lVar9),(LPVOID)0x0,0,
                                    (LPDWORD)0x0,local_90,(LPDWORD)0x0);
              *(uint *)(param_2[1] + 4) = -(uint)(BVar4 != 0) & local_90[0];
            }
          }
        }
LAB_18001a441:
        FUN_180019e20(param_1);
        goto LAB_18001a466;
      }
    }
    puVar5 = __doserrno();
    *puVar5 = 0;
    puVar5 = __doserrno();
    *puVar5 = 9;
  }
  FUN_180011d8c();
LAB_18001a466:
  FUN_18000f730(local_38 ^ (ulonglong)auStackY216);
  return;
}

/* Function: FUN_18001a494 */;