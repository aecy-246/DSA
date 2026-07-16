class Solution:
    def secondsBetweenTimes(self, startTime: str, endTime: str) -> int:
        StartHour = int(startTime[0])*10 + int(startTime[1])
        StartMin = int(startTime[3]) * 10 + int(startTime[4])
        StartSec = int(startTime[6]) * 10 + int(startTime[7])
        EndHour = int(endTime[0])*10 + int(endTime[1])
        EndMin = int(endTime[3])*10 + int(endTime[4])
        EndSec = int(endTime[6])*10 + int(endTime[7])
        answer = 0
        if(EndSec>=StartSec):
            answer = answer +(EndSec-StartSec)
        else:
            answer = EndSec + 60 - StartSec
            if(EndMin>0):
                EndMin = EndMin-1
            else:
                EndMin = 59
                EndHour = EndHour-1
        if(EndMin>=StartMin):
            answer = answer +(EndMin-StartMin)*60
        else:
            answer = answer +(60 + EndMin - StartMin)*60
            EndHour = EndHour-1
        answer = answer + (EndHour - StartHour)*3600
        return answer