switch_to_task:

    ;these are to save a previous task's state:



    push ebx
    push esi
    push edi
    push ebp

    mov edi,[current_task_TCB]
    ;Saving ESP for previous task's kernel stack in a threadd
    mov [edi+TCB.ESP],esp

    ;Load the next state for a task

    ;thread control block

    mov esi,[esp+(4+1)*4]
    mov [current_task_TCB],esi

    ;load a current tasks TCB

    mov esp,[esi+TCB.ESP]
    mov eax,[esi+TCB.CR3]
    mov ebx,[esi+TCB.ESP0]
    mov [TSS.ESP0],ebx
    mov ecx,cr3                   ;previous task's virtual address space

    cmp eax,ecx                   ;check if virtual address capacity needs to be altered
    je .doneVAS                   ; if iti s the same it will flush
    mov cr3,eax                   ; if it is load the next task's allocated kernel space
.doneVAS:

    pop ebp
    pop edi
    pop esi
    pop ebx

    ret
