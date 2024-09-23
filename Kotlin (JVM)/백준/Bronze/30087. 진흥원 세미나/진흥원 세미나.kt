fun main() {
    val inputDto = readInput()
    print(inputDto.findRooms())
}

data class InputDto(
    val seminarList: List<String>
) {
    fun findRooms(): String {
        return seminarList.joinToString("\n") {
            findSeminarRoom(it)
        }
    }

    private fun findSeminarRoom(seminarName: String): String {
        return when (seminarName) {
            "Algorithm" -> "204"
            "DataAnalysis" -> "207"
            "ArtificialIntelligence" -> "302"
            "CyberSecurity" -> "B101"
            "Network" -> "303"
            "Startup" -> "501"
            "TestStrategy" -> "105"
            else -> "Unknown"
        }
    }
}

fun readInput(): InputDto {

    val seminarCnt =
        readLine()
            ?.toIntOrNull()
            ?: throw IllegalArgumentException("Invalid seminarCnt")

    val list = mutableListOf<String>()
    repeat(seminarCnt) {
        val line = readLine()
            ?: throw IllegalArgumentException("Invalid seminar")
        list.add(line)
    }

    return InputDto(list)
}