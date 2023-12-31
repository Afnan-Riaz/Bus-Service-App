USE [bus]
GO
/****** Object:  Table [dbo].[BusInfo]    Script Date: 6/21/2023 2:46:55 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[BusInfo](
	[Id] [nvarchar](20) NOT NULL,
	[servProv] [nvarchar](50) NOT NULL,
	[classTr] [nvarchar](15) NOT NULL,
	[totSeat] [int] NOT NULL,
	[avSeat] [int] NOT NULL,
	[depDT] [smalldatetime] NULL,
	[arrDT] [smalldatetime] NULL,
	[depLoc] [nvarchar](20) NULL,
	[arrLoc] [nvarchar](20) NULL,
	[stop] [int] NULL,
	[estTime] [nvarchar](15) NULL,
	[Booked_Seats] [varchar](150) NULL,
PRIMARY KEY CLUSTERED 
(
	[Id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
ALTER TABLE [dbo].[BusInfo] ADD  DEFAULT (NULL) FOR [depDT]
GO
ALTER TABLE [dbo].[BusInfo] ADD  DEFAULT (NULL) FOR [arrDT]
GO
ALTER TABLE [dbo].[BusInfo] ADD  DEFAULT (NULL) FOR [depLoc]
GO
ALTER TABLE [dbo].[BusInfo] ADD  DEFAULT (NULL) FOR [arrLoc]
GO
ALTER TABLE [dbo].[BusInfo] ADD  DEFAULT ((0)) FOR [stop]
GO
ALTER TABLE [dbo].[BusInfo] ADD  DEFAULT (NULL) FOR [estTime]
GO
