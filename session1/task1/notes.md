### How do these crashes differ?
- Python gives you error with line number and potential issues
- C only says "*** stack smashing detected ***: terminated Aborted (core dumped)". message means we're trying to override memory which shouldn't be overrided. So basically out of bounds error.

### Which program would be easier to debug on the basis of its observed behaviour? Why?
- Python would be easier as yo know which line has caused the crash.